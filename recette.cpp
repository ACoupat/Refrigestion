#include "recette.h"

Recette::Recette(QString nom, QString dureePrep, QList<QString> listeIng,QString etapesPrep,QString typeRecette, QString nomImage, QString cheminImage)
{
    this->nom = nom;
    this->dureePreparation = dureePrep;
    this->listeIngredients = listeIng;
    this->etapesPreparation = etapesPrep;
    this->typeRecette = typeRecette;
    this->nomImage = nomImage;
    this->cheminImage = cheminImage;
}

bool Recette::aucunIngredient()
{
    bool aucunIngredient = true;
    foreach(QString str, this->listeIngredients)
    {
        if(str != " ()")
            aucunIngredient = false;
    }
    return aucunIngredient;
}

QString Recette::getNom()
{
    return nom;
}
QString Recette::getDureePreparation()
{
    return dureePreparation;
}

QString Recette::getNomImage()
{
    return nomImage;
}

QString Recette::getCheminImage()
{
    return cheminImage;
}

QList<QString> Recette::getListIngredients()
{
    return listeIngredients;
}

QString Recette::getEtapesPreparation()
{
    return etapesPreparation;
}

QString Recette::getTypeRecette()
{
    return typeRecette;
}
