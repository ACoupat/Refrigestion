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
    QDir *image = new QDir(QDir::currentPath() + "/Images/Contenu");
    image->setFilter(QDir::Files);
    image->setSorting(QDir::Name);

    QFileInfoList list = image->entryInfoList();
    for(int i=0; i< list.size(); ++i){
        QFileInfo fileInfo = list.at(i);
        ui->cb_image->addItem(fileInfo.fileName().split(".").at(0),fileInfo.filePath());
    }

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

