#include "ingredient.h"

Ingredient::Ingredient(QString nom, int quantite, QString unite, QDate *datePeremption, QString cheminImage, QWidget *parent) :
    QWidget(parent)
{
    this->nom = nom;
    this->quantite = quantite;
    this->datePeremption = datePeremption;
    this->unite = unite;
    initInterface(cheminImage);
    //this->setStyleSheet(":/style.qss");
    this->show();
}

Ingredient::~Ingredient()
{

}

void Ingredient::initInterface(QString cheminImage)
{
    layout = new QVBoxLayout(this);
    image = new QLabel(this);
    image->setPixmap(QPixmap(cheminImage));
    image->setMaximumSize(800, 800);
    image->setScaledContents(true);
    labelNom = new QLabel(nom, this);
    layout->addWidget(labelNom);
    layout->addWidget(image);
}
