#include "vignetteingredient.h"
#include "ui_vignetteingredient.h"

VignetteIngredient::VignetteIngredient(int width,Ingredient* ingModel, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VignetteIngredient)
{
    ui->setupUi(this);
    this->ingredientModel = ingModel;
    this->setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed));
    this->setMinimumWidth(width);
    this->setMinimumHeight(width);
    initLabels(width);
    this->show();
}

void VignetteIngredient::initLabels(int width)
{
        //ui->nomLabel->setText(ingredientModel->getNom());
        //Image
       /* ui->imageLabel = new QLabel(this);
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
