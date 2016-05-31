#ifndef VIGNETTEINGREDIENT_H
#define VIGNETTEINGREDIENT_H

#include <QWidget>
#include <ingredient.h>
#include <QDebug>
#include <QPainter>
namespace Ui {
class VignetteIngredient;
}

class VignetteIngredient : public QWidget
{
    Q_OBJECT

       friend class Ingredient;
public:
    explicit VignetteIngredient(int width,Ingredient* ingModel, QWidget *parent = 0);
    ~VignetteIngredient();

private:
    Ui::VignetteIngredient *ui;
    Ingredient* ingredientModel;
    void paintEvent(QPaintEvent *pe);

    void initLabels(int width);

public slots:
    void ajoutQuantite();
    void retraitQuantite();
};

#endif // VIGNETTEINGREDIENT_H
