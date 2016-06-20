#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDesktopWidget>
#include <QObject>
#include <QLabel>
#include <QList>
#include <QDialog>
#include <QPushButton>
#include <QDebug>
#include <QFontDatabase>
#include <QStringListModel>
#include <QCalendarWidget>
#include <QTimer>
#include <ingredient.h>
#include <recette.h>
#include <fenetreajoutingredient.h>
#include <fenetreajoutrecette.h>
#include <vignetteingredient.h>
#include <QMessageBox>
#include <gestiondefichiers.h>
#include <QDir>
#include <vignetterecette.h>
#include <QLCDNumber>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QList<Ingredient*> getIngredients();
    bool supprimerVignetteIngredient(VignetteIngredient* vi);
    bool supprimerVignetteRecette(VignetteRecette * vr, bool modif);
    void reecrireFichier();
    static bool nameLessThan(Ingredient *ing1, Ingredient *ing2);
    static bool categoryLessThan(Ingredient *ing1, Ingredient *ing2);
    static bool dateLessThan(Ingredient *ing1, Ingredient *ing2);

private:
    Ui::MainWindow *ui;
    QList<Recette*> recettes;
    QList<Ingredient*> ingredients;
    QList<VignetteIngredient*> vignettesIngredients;
    QList<VignetteRecette*> vignettesRecettes;
    int screenWidth;
    int screenHeight;
    int tri;
    FenetreAjoutIngredient* fenAI;
    FenetreAjoutRecette* fenAR;
    QGridLayout *grilleIngredients;
    QGridLayout *grilleRecettes;

    void updateVignettes();
    void creerVignettesIngredientDemarrage();
    void creerVignettesRecettesDemarrage();
    void creerPostit();


public slots:
    void ouvrirFenetreAjoutIngredient();
    void ajoutIngredient();
    void ouvrirFenetreAjoutRecette();
    void ajoutRecette();
    void modifRecette(QString nomModif);
    void ouvrirFenArModif(Recette* recette);
    void modifierContenuPostit();
    void updateHeure();
    void triAlphabetique();
    void triDatePeremption();
    void triCategorie();
    void actualiserVignettesRecettes();
    void actualiserAffichageType(int);
};

#endif // MAINWINDOW_H
