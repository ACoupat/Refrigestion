#include "recette.h"

Recette::Recette(QString nom, QString dureePrep, QList<QString> listeIng,QString etapesPrep,QString typeRecette,QString cheminImage)
{
    this->nom = nom;
    this->dureePreparation = dureePrep;
    this->listeIngredients = listeIng;
    this->etapesPreparation = etapesPrep;
    this->typeRecette = typeRecette;
    this->cheminImage = cheminImage;
}

QString Recette::getNom()
{
    return nom;
}
QString Recette::getDureePreparation()
{
    return dureePreparation;
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
