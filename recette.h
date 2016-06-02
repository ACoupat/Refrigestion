#ifndef RECETTE_H
#define RECETTE_H

#include <QObject>
#include <ingredient.h>

class Recette
{
public:
    explicit Recette(QString nom, QString dureePrep, QList<Ingredient> listeIng,QString etapesPrep,QString typeRecette, QString cheminImage);
    QString getNom();
    QString getDureePreparation();
    QString getCheminImage();
    ~Recette();
private :
    QString nom;
    QString dureePreparation;
    QList<Ingredient> listeIngredients;
    QString etapesPreparation;
    QString typeRecette;
    QString cheminImage;
};

#endif // RECETTE_H
