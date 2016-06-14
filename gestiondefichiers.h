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
    static Ingredient* creerIngredient(QString ligneFichier);
    static Recette* creerRecette(QString nomFichier);
    static QList<Ingredient*> listeIngredientsFichier();
    static int supprimerIngredient(Ingredient* ing);
    static int modifierQuantiteIngredient(Ingredient* ing);
    static int reecrireFichier(QList<Ingredient*> listIng);
    static bool etudeFaisabilite(Recette* );
    static bool supprimerFichierRecette(Recette*);
};

#endif // GESTIONDEFICHIERS_H
