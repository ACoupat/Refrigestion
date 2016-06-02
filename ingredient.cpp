#include "ingredient.h"

Ingredient::Ingredient(QString nom, double quantite, QString unite, QDate datePeremption, QString cheminImage)
{
    this->nom = nom;
    this->datePeremption = datePeremption;
    this->unite = unite;
    this->quantite = quantite;
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

Ingredient::~Ingredient()
{

}

/*void Ingredient::initInterface(QString cheminImage)
{
    layout = new QVBoxLayout(this);
    this->setLayout(layout);
    //Image
    image = new QLabel(this);
    image->setPixmap(QPixmap(cheminImage));
    image->setFixedSize(325, 200);
    image->setScaledContents(true);
    //Labels
    labelNom = new QLabel(nom+"\n\nQuantité :\n\nA consommer avant:", this);
    //Ajouts au layout
    layout->addWidget(image);
    layout->addWidget(labelNom);

}*/
