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
#include <ingredient.h>
#include <recette.h>
#include <fenetreajoutingredient.h>
#include <fenetreajoutrecette.h>
#include <vignetteingredient.h>
#include <QMessageBox>
#include <gestiondefichiers.h>
#include <QDir>
#include <vignetterecette.h>


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

private:
    Ui::MainWindow *ui;
    QList<Recette*> recettes;
    QList<Ingredient*> ingredients;
    QList<VignetteIngredient*> vignettesIngredients;
    QList<VignetteRecette*> vignettesRecettes;
    int screenWidth;
    int screenHeight;
    FenetreAjoutIngredient* fenAI;
    FenetreAjoutRecette* fenAR;
    QGridLayout *grilleIngredients;
    QGridLayout *grilleRecettes;

    void creerVignettesIngredientDemarrage();
    void creerVignettesRecettesDemarrage();
    void creerPostit();
    void creerListeIngredientDateLimite();


public slots:
    void ouvrirFenetreAjoutIngredient();
    void ajoutIngredient();
    void ouvrirFenetreAjoutRecette();
    void ajoutRecette();
    void modifRecette(QString nomModif);
    void ouvrirFenArModif(Recette* recette);
    void modifierContenuPostit();

};

#endif // MAINWINDOW_H
