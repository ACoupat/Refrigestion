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

int Ingredient::getType()
{
    return type;
}

QString Ingredient::getTypeColor() {
    static const QString colors[] = {"Images/autre.png", // Autre
                                     "Images/boisson.png", // Boisson
                                     "Images/legume.png", // Légume
                                     "Images/fruit.png", // Fruit
                                     "Images/viande.png", // Viande
                                     "Images/poisson.png", // Poisson
                                     "Images/fromage.png", // Fromage
                                     "Images/entree.png", //Entrée
                                     "Images/plat.png", //Plat
                                     "Images/dessert.png"}; // Dessert
    return colors[type];
}

QString Ingredient::getTypeColorLettre() {
    static const QString colors[] = {"Images/autreLettre.png", // Autre
                                     "Images/boissonLettre.png", // Boisson
                                     "Images/legumeLettre.png", // Légume
                                     "Images/fruitLettre.png", // Fruit
                                     "Images/viandeLettre.png", // Viande
                                     "Images/poissonLettre.png", // Poisson
                                     "Images/fromageLettre.png", // Fromage
                                     "Images/entreeLettre.png", //Entrée
                                     "Images/platLettre.png", //Plat
                                     "Images/dessertLettre.png"}; // Dessert
    return colors[type];
}

Ingredient::~Ingredient()
{

}


