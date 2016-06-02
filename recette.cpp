#include "recette.h"

Recette::Recette(QString nom, QString dureePrep, QList<Ingredient> listeIng,QString etapesPrep,QString typeRecette)
{
    this->nom = nom;
    this->dureePreparation = dureePrep;
    this->listeIngredients = listeIng;
    this->etapesPreparation = etapesPrep;
    this->typeRecette = typeRecette;
}

QString Recette::getNom()
{
    return nom;
}
QString Recette::getDureePreparation()
{
    return dureePreparation;
}
