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

    ui->tableIngredients->setColumnCount(3);
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
    qDebug() << ui->le_nom->text() ;
    qDebug()<< ui->le_duree->text();
    qDebug()<< creerListeIngredients();
    qDebug()<< ui->te_etapes->toPlainText();
    qDebug()<< ui->cb_type->currentText() ;
    qDebug()<< ui->cb_image->currentData().toString();
    Recette* recetteTemp = new Recette(ui->le_nom->text(),ui->le_duree->text(),creerListeIngredients(),ui->te_etapes->toPlainText(),ui->cb_type->currentText(),ui->cb_image->currentData().toString());
    GestionDeFichiers::ajoutFichier(recetteTemp,NULL);
    return recetteTemp;
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

QList<QString> FenetreAjoutRecette::creerListeIngredients()
{
    QList<QString> liste;

    int nbIngredients = ui->tableIngredients->rowCount();

    for(int i=0; i<nbIngredients; i++)
    {
        QVariant varTemp0 = ui->tableIngredients->item(i,0)->data(0);//erreur si nom vide
        QVariant varTemp1 = ui->tableIngredients->item(i,1)->data(0);
        QVariant varTemp2 = ui->tableIngredients->item(i,2)->data(0);
        QString strTemp;

        strTemp = strTemp + varTemp0.toString() + " (" + varTemp1.toString() + varTemp2.toString() +")" ;
        liste << strTemp;
    }    qDebug() << "je passe là";
    return liste;

}

FenetreAjoutRecette::~FenetreAjoutRecette()
{
    delete ui;
}


