#include "vignetteingredient.h"
#include "ui_vignetteingredient.h"

VignetteIngredient::VignetteIngredient(int width,Ingredient* ingModel, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VignetteIngredient)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked(bool)), this, SLOT(retraitQuantite()));
    connect(ui->pushButton_2, SIGNAL(clicked(bool)), this, SLOT(ajoutQuantite()));
    this->ingredientModel = ingModel;
    this->setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed));
    this->setMinimumWidth(width);
    this->setMinimumHeight(width);
    QPolygon forme;
    forme << QPoint(0, 20) << QPoint(40, 0) << QPoint(40, 40);
    ui->pushButton->setMask(QRegion(forme));
    forme.clear();
    forme << QPoint(0, 0) << QPoint(40, 20) << QPoint(0, 40);
    ui->pushButton_2->setMask(QRegion(forme));
    initLabels(width);
    this->show();
}

void VignetteIngredient::ajoutQuantite() {
    ingredientModel->setQuantite(ingredientModel->getQuantite() + 1);
    ui->label->setText(QString::number(ingredientModel->getQuantite() + 1));

}

void VignetteIngredient::retraitQuantite() {
    ingredientModel->setQuantite(ingredientModel->getQuantite() - 1);
    ui->label->setText(QString::number(ingredientModel->getQuantite() + 1));
}

void VignetteIngredient::initLabels(int width)
{
        //ui->nomLabel->setText(ingredientModel->getNom());
        //Image
        /*ui->imageLabel = new QLabel(this);
        ui->imageLabel->setPixmap(QPixmap(":/Images/tomate.jpg"));
        ui->imageLabel->setFixedSize(width-50,width/3);
        ui->imageLabel->setScaledContents(true);*/
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
