#include "ingredient.h"

Ingredient::Ingredient(QString nom, int type, double quantite, QString unite, QDate datePeremption, QString cheminImage)
{
    this->nom = nom;
    this->type = type;
    this->datePeremption = datePeremption;
    this->unite = unite;
    this->quantite = quantite;
    this->cheminImage = cheminImage;
}

void Ingredient::setQuantite(double dQte) {
    if(quantite + dQte > 0) quantite += dQte;
    else quantite = 0;
}

QString Ingredient::getNom()
{
    return nom;
}

QString Ingredient::getUnite()
{
    return unite;
}

double Ingredient::getQuantite()
{
    return quantite;
}

QDate Ingredient::getDate()
{
    return datePeremption;
}

QString Ingredient::getCheminImage()
{
    return cheminImage;
}

QString Ingredient::getTypeColor() {
    static const QString colors[] = {"rgba(200, 200, 200, 0.5);", // Autre
                                     "rgba(0, 255, 255, 0.5);", // Boisson
                                     "rgba(0, 255, 0, 0.5);", // Légume
                                     "rgba(255, 0, 255, 0.5);", // Fruit
                                     "rgba(255, 0, 0, 0.5);", // Viande
                                     "rgba(0, 0, 255, 0.5);", // Poisson
                                     "rgba(255, 255, 0, 0.5);", // Fromage
                                     "rgba(90, 58, 34, 0.5);", // Dessert
                                     "rgba(0, 255, 255, 0.5);"}; // Plat
    return colors[type];
}

Ingredient::~Ingredient()
{

}


