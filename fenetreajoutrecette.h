#ifndef FENETREAJOUTRECETTE_H
#define FENETREAJOUTRECETTE_H

#include <QDialog>
#include <recette.h>
#include <gestiondefichiers.h>
#include <QAbstractItemModel>
#include <QDebug>
#include <QLineEdit>
#include <QComboBox>
#include <QDoubleSpinBox>
#include <ingredient.h>

class MainWindow;

namespace Ui {
class FenetreAjoutRecette;
}

class FenetreAjoutRecette : public QDialog
{
    Q_OBJECT

public:
    explicit FenetreAjoutRecette(MainWindow *parent = 0);
    ~FenetreAjoutRecette();
    Recette* creerRecette();
    QString getNomEntre();
    bool pasDingredients();
    void setContenu(Recette * recette);


private:
    Ui::FenetreAjoutRecette *ui;
    QList<Ingredient *> creerListeIngredients();
    QList<QLineEdit*> le_list;
    QList<QComboBox*> cb_list;
    QList<QDoubleSpinBox*> sb_list;
    QString nomModif;
    MainWindow* window;

private slots:
    void ajouterLigneTableIng();
    void retirerLigneTableIng();
    QString getFenAREtat();
    void ajoutModifRecette();

};

#endif // FENETREAJOUTRECETTE_H
