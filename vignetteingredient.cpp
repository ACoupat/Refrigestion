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
    initLabels();
    this->show();
}

void VignetteIngredient::initLabels()
{
    ui->nomLabel->setText(ingredientModel->getNom());
        //Image
        ui->imageLabel = new QLabel(this);
        ui->imageLabel->setPixmap(QPixmap(":/Images/tomate.jpg"));
        ui->imageLabel->setFixedSize(325, 200);
        ui->imageLabel->setScaledContents(true);
}

VignetteIngredient::~VignetteIngredient()
{
    delete ui;
}
