#include "fenetreajoutingredient.h"
#include "ui_fenetreajoutingredient.h"

FenetreAjoutIngredient::FenetreAjoutIngredient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FenetreAjoutIngredient)
{
    ui->setupUi(this);
    this->setModal(true);
    this->setWindowTitle("Ajouter un ingrédient");
}

FenetreAjoutIngredient::~FenetreAjoutIngredient()
{
    delete ui;
}
