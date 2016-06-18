#include "fenetreajoutrecette.h"
#include "ui_fenetreajoutrecette.h"
#include <mainwindow.h>

FenetreAjoutRecette::FenetreAjoutRecette(MainWindow *parent):
    QDialog(parent),
    ui(new Ui::FenetreAjoutRecette)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::SplashScreen);
    this->setModal(true);
    this->setWindowTitle("Ajouter une recette");
    window = parent;

    le_list << ui->le_ing1 <<  ui->le_ing2;
    cb_list << ui->cb_ing1 << ui->cb_ing2;
    sb_list << ui->sb_ing1 << ui->sb_ing2;

    ui->cb_image->addItem("Tomates",QVariant(":/Images/Images/tomate.jpg"));
    ui->cb_image->addItem("Gateau au chocolat",QVariant(":/Images/Images/gateauChocolat.jpg"));
    ui->cb_image->addItem("Poulet Roti",QVariant(":/Images/Images/pouletRoti.jpg"));
    ui->cb_image->addItem("Tacos",QVariant(":/Images/Images/tacos.jpg"));
    ui->cb_image->addItem("Aspic",QVariant(":/Images/Images/aspic.jpg"));
    connect(ui->okButton,SIGNAL(clicked()),this,SLOT(ajoutModifRecette()));
    connect(ui->cancelButton,SIGNAL(clicked()),this,SLOT(close()));
    connect(ui->tbAjouterIng,SIGNAL(clicked()),this,SLOT(ajouterLigneTableIng()));
    connect(ui->tbRetirerIng,SIGNAL(clicked()),this,SLOT(retirerLigneTableIng()));
}

Recette* FenetreAjoutRecette::creerRecette()
{
    Recette* recetteTemp = new Recette(ui->le_nom->text(),ui->le_duree->text(),creerListeIngredients(),ui->te_etapes->toPlainText(),ui->cb_type->currentText(),ui->cb_image->currentText(), ui->cb_image->currentData().toString());
    GestionDeFichiers::ajoutFichier(recetteTemp,NULL);
    return recetteTemp;
}

void FenetreAjoutRecette::ajoutModifRecette()
{
    if(ui->okButton->text() == "Modifier")
        window -> modifRecette(nomModif);
    else
        window->ajoutRecette();
}

QString FenetreAjoutRecette::getFenAREtat()
{
    return ui->okButton->text();
}

void FenetreAjoutRecette::setContenu(Recette * recette)
{
    ui->le_nom->setText(recette->getNom());
    nomModif = recette->getNom();
    ui->cb_type->setCurrentText(recette->getTypeRecette());
    ui->te_etapes->setText(recette->getEtapesPreparation());
    ui->le_duree->setText(recette->getDureePreparation());
    ui->cb_image->setCurrentText(recette->getNomImage());

    int nbIngredients = recette->getListIngredients().size();
    qDebug() << nbIngredients;
    if(nbIngredients>2)
    {
        for(int i=0;i<nbIngredients-2;i++)
        {
            ajouterLigneTableIng();
        }
    }
    for(int i=0;i<nbIngredients;i++)
    {
        Ingredient* ingTemp = recette->getListIngredients().at(i);
        le_list.at(i)->setText(ingTemp->getNom());
        cb_list.at(i)->setCurrentText(ingTemp->getUnite());
        sb_list.at(i)->setValue(ingTemp->getQuantite());
    }

    ui->okButton->setText("Modifier");
}

void FenetreAjoutRecette::ajouterLigneTableIng()
{
    QLineEdit* le = new QLineEdit();
    le->setMinimumWidth(175);
    QDoubleSpinBox* sb = new QDoubleSpinBox();
    QComboBox* cb = new QComboBox();
    cb->addItem(QIcon()," ",QVariant());
    cb->addItem(QIcon(),"mL",QVariant());
    cb->addItem(QIcon(),"cL",QVariant());
    cb->addItem(QIcon(),"L",QVariant());
    cb->addItem(QIcon(),"g",QVariant());
    cb->addItem(QIcon(),"kg",QVariant());
    cb->setMinimumWidth(45);
    ui->grilleIngredients->addWidget(le,ui->grilleIngredients->rowCount()+1,0,Qt::AlignLeft);
    ui->grilleIngredients->addWidget(sb,ui->grilleIngredients->rowCount()-1,1,Qt::AlignLeft);
    ui->grilleIngredients->addWidget(cb,ui->grilleIngredients->rowCount()-1,2,Qt::AlignCenter);

    le_list << le;
    cb_list << cb;
    sb_list << sb;

    qDebug() << "nombre de lignes :" << ui->grilleIngredients->rowCount();
}

void FenetreAjoutRecette::retirerLigneTableIng()
{
    /*if(ui->grilleIngredients->rowCount() > 1)
    {
        qDebug() << "le rowCount" <<  ui->grilleIngredients->rowCount();
        delete le_list.at(2);
        delete cb_list.at(2);
        delete sb_list.at(2);
    }*/
}

QList<Ingredient*> FenetreAjoutRecette::creerListeIngredients()
{
    QList<Ingredient*> liste;

    int nbLignes = ui->grilleIngredients->rowCount()-3;
    qDebug() << nbLignes << "la liste :" << le_list;
    for(int i=0; i<nbLignes; i++)
    {
        if(le_list.at(i)->text() != "" && le_list.at(i)->text() != NULL )
        {
            Ingredient* ingTemp = new Ingredient(le_list.at(i)->text(),0,sb_list.at(i)->value(),cb_list.at(i)->currentText(),QDate(),"");
            liste << ingTemp;
            qDebug() << "je passe icieuh";
        }
    }
    return liste;
}

bool FenetreAjoutRecette::pasDingredients()
{
    int nbRows = ui->grilleIngredients->rowCount()-1;

    qDebug() << "Count" << nbRows;
    qDebug() << "liste" << le_list;
    foreach(QLineEdit* le, le_list)
    {
        qDebug() << le;
        if(le->text()!= "" && le->text() != NULL)
        {
            qDebug() << "blou : " << le->text();
            return false;
        }
    }
    return true;
}

QString FenetreAjoutRecette::getNomEntre()
{
    return ui->le_nom->text();
}

FenetreAjoutRecette::~FenetreAjoutRecette()
{
    delete ui;
}


