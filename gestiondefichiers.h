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
    static int ajoutFichier(Recette* recette, Ingredient *ing);
    static QString creerLigneIngredient(Ingredient* ing);
    static QString creerStringRecette(Recette* recette);
};

#endif // GESTIONDEFICHIERS_H
