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
#include <ingredient.h>
#include <recette.h>
#include <fenetreajoutingredient.h>
#include <fenetreajoutrecette.h>
#include <vignetteingredient.h>
#include <vignetterecette.h>
#include <QMessageBox>
#include <gestiondefichiers.h>
#include <QDir>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QList<Recette*> recettes;
    QList<Ingredient*> ingredients;
    int screenWidth;
    int screenHeight;
    FenetreAjoutIngredient* fenAI;
    FenetreAjoutRecette* fenAR;

    void creerVignettesIngredientDemarrage();
    void creerVignettesRecettesDemarrage();

public slots:
    void ouvrirFenetreAjoutIngredient();
    void ajoutIngredient();
    void ouvrirFenetreAjoutRecette();
    void ajoutRecette();
};

#endif // MAINWINDOW_H
