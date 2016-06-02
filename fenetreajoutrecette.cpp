#include "fenetreajoutrecette.h"
#include "ui_fenetreajoutrecette.h"

FenetreAjoutRecette::FenetreAjoutRecette(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FenetreAjoutRecette)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::SplashScreen);
    this->setModal(true);
    this->setWindowTitle("Ajouter une recette");

    connect(ui->buttonBox,SIGNAL(accepted()),parent,SLOT(ajoutRecette()));
    connect(ui->buttonBox,SIGNAL(rejected()),this,SLOT(close()));
}

Recette* FenetreAjoutRecette::creerRecette()
{
    Recette* RecetteTemp = new Recette(ui->le_nom->text(),ui->le_duree->text(),QList<Ingredient>(),ui->te_etapes->toPlainText(),ui->le_type->text());
    return RecetteTemp;
}

FenetreAjoutRecette::~FenetreAjoutRecette()
{
    delete ui;
}
