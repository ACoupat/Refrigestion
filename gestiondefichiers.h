#ifndef GESTIONDEFICHIERS_H
#define GESTIONDEFICHIERS_H
#include <QString>
#include <recette.h>
#include <ingredient.h>


class GestionDeFichiers
{
public:
    GestionDeFichiers();
    void ControleEspace(QString );
    int ajoutFichier(Recette* recette, Ingredient *ing);
    QString creerLigneIngredient(Ingredient* ing);
    QString creerStringRecette(Recette* recette);
};

#endif // GESTIONDEFICHIERS_H
