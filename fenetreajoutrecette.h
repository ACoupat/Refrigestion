#ifndef FENETREAJOUTRECETTE_H
#define FENETREAJOUTRECETTE_H

#include <QDialog>
#include <recette.h>
#include <gestiondefichiers.h>
#include <QAbstractItemModel>
#include <QDebug>

namespace Ui {
class FenetreAjoutRecette;
}

class FenetreAjoutRecette : public QDialog
{
    Q_OBJECT

public:
    explicit FenetreAjoutRecette(QWidget *parent = 0);
    ~FenetreAjoutRecette();
    Recette* creerRecette();
    QString getNomEntre();
    bool pasDingredients();

private:
    Ui::FenetreAjoutRecette *ui;
    QList<QString> creerListeIngredients();
private slots:
    void ajouterLigneTableIng();
    void retirerLigneTableIng();

};

#endif // FENETREAJOUTRECETTE_H
