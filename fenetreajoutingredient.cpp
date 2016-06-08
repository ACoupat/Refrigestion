#include "fenetreajoutingredient.h"
#include "ui_fenetreajoutingredient.h"
#include <QDebug>
#include <gestiondefichiers.h>

FenetreAjoutIngredient::FenetreAjoutIngredient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FenetreAjoutIngredient)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::SplashScreen);
    this->setModal(true);
    this->setWindowTitle("Ajouter un ingrédient");
    ui->de_date->setDateTime(QDateTime::currentDateTime());

    ui->cb_image->addItem("Tomates",QVariant(":/Images/Images/tomate.jpg"));
    ui->cb_image->addItem("Gateau au chocolat",QVariant(":/Images/Images/gateauChocolat.jpg"));
    ui->cb_image->addItem("Poulet Roti",QVariant(":/Images/Images/pouletRoti.jpg"));
    ui->cb_image->addItem("Tacos",QVariant(":/Images/Images/tacos.jpg"));
    ui->cb_image->addItem("Aspic",QVariant(":/Images/Images/aspic.jpg"));

    connect(ui->okButton,SIGNAL(clicked()),parent,SLOT(ajoutIngredient()));
    connect(ui->cancelButton,SIGNAL(clicked()),this,SLOT(close()));
}

Ingredient* FenetreAjoutIngredient::creerIngredient()
{
    Ingredient* ingTemp = new Ingredient(ui->le_nom->text(), ui->cb_type->currentIndex(), ui->sb_quantite->value(),ui->comboBox->currentText(),ui->de_date->date(),ui->cb_image->currentData().toString());
    GestionDeFichiers::ajoutFichier(NULL,ingTemp);
    return ingTemp;

}


FenetreAjoutIngredient::~FenetreAjoutIngredient()
{
    delete ui;
}

