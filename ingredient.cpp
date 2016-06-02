#include "ingredient.h"

Ingredient::Ingredient(QString nom, double quantite, QString unite, QDate datePeremption, QString cheminImage)
{
    this->nom = nom;
    this->datePeremption = datePeremption;
    this->unite = unite;
    this->quantite = quantite;
    this->cheminImage = cheminImage;
}

void Ingredient::setQuantite(double quantite) {
    this->quantite = quantite;
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

Ingredient::~Ingredient()
{

}

