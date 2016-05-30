#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDesktopWidget>
#include <QObject>
#include <QLabel>
#include <QList>
#include <QDialog>
#include <QPushButton>
#include <ingredient.h>
#include <recette.h>
#include <fenetreajoutingredient.h>

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
    //QList<QLabel*> ingredients;
    QList<QLabel*> recettes;
    QList<Ingredient*> ingredients;
    int screenWidth;
    int screenHeight;
    FenetreAjoutIngredient* fenAI;

public slots:
    void ouvrirFenetreAjoutIngredient();
    void ajoutIngredient();
    void ouvrirFenetreAjoutRecette();
    void ajoutRecette();
};

#endif // MAINWINDOW_H
