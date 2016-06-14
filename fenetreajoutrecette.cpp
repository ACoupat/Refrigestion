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
    ui->tableIngredients->setColumnCount(3);
    ui->tableIngredients->setRowCount(1);
    ui->tableIngredients->horizontalHeader()->setStretchLastSection(true);
    ui->tableIngredients->verticalHeader()->setVisible(false);

    ui->cb_image->addItem("Tomates",QVariant(":/Images/Images/tomate.jpg"));
    ui->cb_image->addItem("Gateau au chocolat",QVariant(":/Images/Images/gateauChocolat.jpg"));
    ui->cb_image->addItem("Poulet Roti",QVariant(":/Images/Images/pouletRoti.jpg"));
    ui->cb_image->addItem("Tacos",QVariant(":/Images/Images/tacos.jpg"));
    ui->cb_image->addItem("Aspic",QVariant(":/Images/Images/aspic.jpg"));
    connect(ui->okButton,SIGNAL(clicked()),this,SLOT(ajoutModifRecette()));
    //connect(ui->okButton,SIGNAL(clicked()),window,SLOT(ajoutRecette()));
    connect(ui->cancelButton,SIGNAL(clicked()),this,SLOT(close()));
    connect(ui->tbAjouterIng,SIGNAL(clicked()),this,SLOT(ajouterLigneTableIng()));
    connect(ui->tbRetirerIng,SIGNAL(clicked()),this,SLOT(retirerLigneTableIng()));
}

Recette* FenetreAjoutRecette::creerRecette()
{
    Recette* recetteTemp = new Recette(ui->le_nom->text(),ui->le_duree->text(),creerListeIngredients(),ui->te_etapes->toPlainText(),ui->cb_type->currentText(),ui->cb_image->currentData().toString());
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
    ui->cb_image->setCurrentText(recette->getCheminImage());

    int nbIngredients = recette->getListIngredients().size();
    qDebug() << recette->getListIngredients();
    if(nbIngredients >0)
    {
        ui->tableIngredients->setRowCount(nbIngredients);
        int j =0;
        for(int i=0;i<nbIngredients;i++)
        {
            QString strIng = recette->getListIngredients().at(i);
            QString strTemp;
            QChar c;

            c = strIng.at(j);
            while(c != '(')
            {qDebug() << c;
                strTemp += c;
                j++;
                c = strIng.at(j);

            }
            strTemp = strTemp.left(strTemp.size()-1);
            qDebug() << "ingrédient : " << strTemp;
            ui->tableIngredients->item(i,0)->setText(strTemp);
            strTemp = "";
            j++;
            c =strIng.at(j);
            while(c.isNumber() || c == '/')
            {
                strTemp += c;
                j++;
                c = strIng.at(j);

            }
            qDebug() << "quantité : " << strTemp;
            ui->tableIngredients->item(i,1)->setText(strTemp);
            while(c != ')')
            {
                strTemp += c;
                j++;
                c = strIng.at(j);

            }
            qDebug() << "unité : " << strTemp;
            ui->tableIngredients->item(i,2)->setText(strTemp);
        }

    }

    /*
     * remplir le tableau avec les ingrédients
     */
    ui->okButton->setText("Modifier");
}

void FenetreAjoutRecette::ajouterLigneTableIng()
{

    ui->tableIngredients->setRowCount(ui->tableIngredients->rowCount()+1);

}

void FenetreAjoutRecette::retirerLigneTableIng()
{
    if(ui->tableIngredients->rowCount() > 1)
        ui->tableIngredients->setRowCount(ui->tableIngredients->rowCount()-1);
        //essayer de trouver comment supprimer la ligne sélectionnée plutôt que la dernière
}

QList<QString> FenetreAjoutRecette::creerListeIngredients()
{
    QList<QString> liste;

    int nbIngredients = ui->tableIngredients->rowCount();

    for(int i=0; i<nbIngredients; i++)
    {
        QVariant varTemp0;
        QVariant varTemp1;
        QVariant varTemp2;
        QTableWidgetItem*  qtwi0 = ui->tableIngredients->item(i,0);
        QTableWidgetItem* qtwi1 = ui->tableIngredients->item(i,1);
        QTableWidgetItem* qtwi2 = ui->tableIngredients->item(i,2);
        if(qtwi0 != 0)
            varTemp0 = qtwi0->data(0);//erreur si nom vide
        else
            varTemp0 = "";
        if(qtwi1 != 0)
            varTemp1 = qtwi1->data(0);
        else
            varTemp1 = "";
        if(qtwi2 != 0)
            varTemp2 = qtwi2->data(0);
        else
            varTemp2 = "";

        QString strTemp;

        if(varTemp0 != "")
        {
            strTemp += varTemp0.toString();
            if(varTemp1 != "")
            {
                strTemp += " (" + varTemp1.toString() + varTemp2.toString() +")" ;
            }
            liste << strTemp;
        }
    }
    return liste;

}

bool FenetreAjoutRecette::pasDingredients()
{
    int nbRows = ui->tableIngredients->rowCount();

    qDebug() << "Count" << nbRows;
    for(int i=0; i<nbRows; i++)
    {
        if(ui->tableIngredients->item(i,0) != NULL)
            return false;
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


