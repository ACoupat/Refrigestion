#include "vignetteingredient.h"
#include "ui_vignetteingredient.h"

VignetteIngredient::VignetteIngredient(int width,Ingredient* ingredient, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VignetteIngredient)
{
    ui->setupUi(this);

    connect(ui->pushButton, SIGNAL(clicked(bool)), this, SLOT(retraitQuantite()));
    connect(ui->pushButton_2, SIGNAL(clicked(bool)), this, SLOT(ajoutQuantite()));
    this->ingredient = ingredient;
    this->setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed));
    this->setMaximumWidth(width);
    this->setMaximumHeight(width);
    ui->labelImage->setMinimumHeight(width * 0.5);

    QPolygon forme;
    forme << QPoint(0, 20) << QPoint(40, 0) << QPoint(40, 40);
    ui->pushButton->setMask(QRegion(forme));
    forme.clear();
    forme << QPoint(0, 0) << QPoint(40, 20) << QPoint(0, 40);
    ui->pushButton_2->setMask(QRegion(forme));

    QString color = ingredient->getTypeColor();
    this->setStyleSheet("QWidget#VignetteIngredient{border: 3px solid black;background-color : " + color + ";border-radius:20px;}QLabel{font: bold 18px;}");
    initLabels();
    this->show();
}

void VignetteIngredient::ajoutQuantite() {
    ingredient->setQuantite(+1);
    ui->label_quantite->setText(QString::number(ingredient->getQuantite()) + " " + ingredient->getUnite());

}

void VignetteIngredient::retraitQuantite() {
    ingredient->setQuantite(-1);
    ui->label_quantite->setText(QString::number(ingredient->getQuantite()) + " " + ingredient->getUnite());
    if(ingredient->getQuantite() == 0) this->deleteLater();
}

void VignetteIngredient::initLabels()
{
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
};

VignetteIngredient::~VignetteIngredient()
{
    delete ui;
}
