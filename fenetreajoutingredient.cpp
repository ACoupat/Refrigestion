#include "fenetreajoutingredient.h"
#include "ui_fenetreajoutingredient.h"

FenetreAjoutIngredient::FenetreAjoutIngredient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FenetreAjoutIngredient)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::SplashScreen);
    this->setModal(true);
    this->setWindowTitle("Ajouter un ingrédient");

    connect(ui->buttonBox,SIGNAL(accepted()),parent,SLOT(ajoutIngredient()));
    connect(ui->buttonBox,SIGNAL(rejected()),this,SLOT(close()));
}

Ingredient* FenetreAjoutIngredient::creerIngredient()
{
    Ingredient* ingTemp = new Ingredient(ui->le_nom->text(),ui->dsp_qte->value(),"",ui->de_date->date(),ui->cb_image->currentData().toString());
    return ingTemp;
}

FenetreAjoutIngredient::~FenetreAjoutIngredient()
{
    delete ui;
}
