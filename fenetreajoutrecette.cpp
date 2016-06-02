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

    ui->tableIngredients->setColumnCount(2);
    ui->tableIngredients->setRowCount(1);
    ui->tableIngredients->horizontalHeader()->setStretchLastSection(true);
    ui->tableIngredients->verticalHeader()->setVisible(false);

    ui->cb_image->addItem("Tomates",QVariant(":/Images/Images/tomate.jpg"));
    ui->cb_image->addItem("Gateau au chocolat",QVariant(":/Images/Images/gateauChocolat.jpg"));
    ui->cb_image->addItem("Poulet Roti",QVariant(":/Images/Images/pouletRoti.jpg"));
    ui->cb_image->addItem("Tacos",QVariant(":/Images/Images/tacos.jpg"));
    ui->cb_image->addItem("Aspic",QVariant(":/Images/Images/aspic.jpg"));
    connect(ui->buttonBox,SIGNAL(accepted()),parent,SLOT(ajoutRecette()));
    connect(ui->buttonBox,SIGNAL(rejected()),this,SLOT(close()));
    connect(ui->tbAjouterIng,SIGNAL(clicked()),this,SLOT(ajouterLigneTableIng()));
    connect(ui->tbRetirerIng,SIGNAL(clicked()),this,SLOT(retirerLigneTableIng()));
}

Recette* FenetreAjoutRecette::creerRecette()
{
    Recette* RecetteTemp = new Recette(ui->le_nom->text(),ui->le_duree->text(),QList<Ingredient>(),ui->te_etapes->toPlainText(),ui->le_type->text(),ui->cb_image->currentData().toString());
    return RecetteTemp;
}

void FenetreAjoutRecette::ajouterLigneTableIng()
{

    ui->tableIngredients->setRowCount(ui->tableIngredients->rowCount()+1);

}

void FenetreAjoutRecette::retirerLigneTableIng()
{
    ui->tableIngredients->setRowCount(ui->tableIngredients->rowCount()-1);
    //essayer de trouver comment supprimer la ligne sélectionnée plutôt que la dernière
}

FenetreAjoutRecette::~FenetreAjoutRecette()
{
    delete ui;
}


