#include "vignetteingredient.h"
#include "ui_vignetteingredient.h"
#include <mainwindow.h>

VignetteIngredient::VignetteIngredient(int width, Ingredient* ingredient, MainWindow *parent) :
    QWidget(parent),
    ui(new Ui::VignetteIngredient)
{
    ui->setupUi(this);
    window = parent;
    connect(ui->pushButton, SIGNAL(clicked(bool)), this, SLOT(retraitQuantite()));
    connect(ui->pushButton_2, SIGNAL(clicked(bool)), this, SLOT(ajoutQuantite()));
    this->ingredient = ingredient;
    this->setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed));
    this->setMaximumWidth(width);
    this->setMaximumHeight(width);
    ui->labelImage->setMinimumHeight(width * 0.5);
    ui->labelImage->setMaximumSize(width * 0.9, width * 0.56);

    QPolygon forme;
    forme << QPoint(0, 20) << QPoint(40, 0) << QPoint(40, 40);
    ui->pushButton->setMask(QRegion(forme));
    forme.clear();
    forme << QPoint(0, 0) << QPoint(40, 20) << QPoint(0, 40);
    ui->pushButton_2->setMask(QRegion(forme));

    ui->label_type->setPixmap(ingredient->getTypeColor());
    this->setStyleSheet("QWidget#VignetteIngredient{border-bottom: 3px solid #BDBDBD;border-right : 1px solid #BDBDBD;background-color : white;}"
                        "QLabel{font:16px;color:black;} ");
    initLabels();

    this->setAttribute(Qt::WA_Hover, true);
    this->show();
}

void VignetteIngredient::enterEvent(QEvent * event)
{
    QGraphicsDropShadowEffect *g = new QGraphicsDropShadowEffect(this);
    g->setBlurRadius(7);
    g->setOffset(0,0);
    this->setGraphicsEffect(g);
    ui->label_type->setPixmap(ingredient->getTypeColorLettre());
    QWidget::enterEvent(event);
}

void VignetteIngredient::leaveEvent(QEvent * event)
{
    this->setGraphicsEffect(NULL);
    ui->label_type->setPixmap(ingredient->getTypeColor());
    QWidget::leaveEvent(event);
}

void VignetteIngredient::ajoutQuantite() {
    ingredient->setQuantite(+1);
    ui->label_quantite->setText(QString::number(ingredient->getQuantite()) + " " + ingredient->getUnite());
    window->reecrireFichier();
}

void VignetteIngredient::retraitQuantite() {
    ingredient->setQuantite(-1);

    window->reecrireFichier();
    if(ingredient->getQuantite() == 0)
    {
        if(!window->supprimerVignetteIngredient(this)) ingredient->setQuantite(+1);
    }
    ui->label_quantite->setText(QString::number(ingredient->getQuantite()) + " " + ingredient->getUnite());
}

void VignetteIngredient::initLabels()
{
    if(ingredient->getQuantite()==0) ingredient->setQuantite(1);
    ui->label_quantite->setText(QString::number(ingredient->getQuantite()) + " " + ingredient->getUnite());
    ui->label_nom->setText(ingredient->getNom());
    ui->label_2->setText(ingredient->getDate().toString("dd.MM.yyyy"));
    ui->labelImage->setStyleSheet("QLabel#labelImage{ border-image: url("+ingredient->getCheminImage()+") 0 0 0 0 stretch stretch; }");
}

//Utile pour que l'affichage se fasse correctement
void VignetteIngredient::paintEvent(QPaintEvent *pe) {
    QStyleOption o;
    o.initFrom(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &o, &p, this);
}

Ingredient *VignetteIngredient::getIngredient()
{
    return ingredient;
}

VignetteIngredient::~VignetteIngredient()
{
    delete ui;
}
