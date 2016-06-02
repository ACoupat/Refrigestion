#ifndef RECETTE_H
#define RECETTE_H

#include <QObject>
#include <ingredient.h>

class Recette
{
public:
    explicit Recette(QString nom, QString dureePrep, QList<Ingredient> listeIng,QString etapesPrep,QString typeRecette);
    QString getNom();
    QString getDureePreparation();
    ~Recette();
private :
    QString nom;
    QString dureePreparation;
    QList<Ingredient> listeIngredients;
    QString etapesPreparation;
    QString typeRecette;

};

#endif // RECETTE_H
