#ifndef VIGNETTEINGREDIENT_H
#define VIGNETTEINGREDIENT_H

#include <QWidget>
#include <ingredient.h>
#include <QDebug>
#include <QPainter>
#include <gestiondefichiers.h>
class MainWindow;

namespace Ui {
class VignetteIngredient;
}

class VignetteIngredient : public QWidget
{
    Q_OBJECT

       friend class Ingredient;
public:
    explicit VignetteIngredient(int width, Ingredient* ingModel, MainWindow *parent);
    ~VignetteIngredient();
    Ingredient *getIngredient();

private:
    Ui::VignetteIngredient *ui;
    MainWindow *window;
    Ingredient* ingredient;
    void paintEvent(QPaintEvent *pe);

    void initLabels();

public slots:
    void ajoutQuantite();
    void retraitQuantite();
};

#endif // VIGNETTEINGREDIENT_H
