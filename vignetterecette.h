#ifndef VIGNETTERECETTE_H
#define VIGNETTERECETTE_H

#include <QWidget>
#include <recette.h>
#include <QPainter>

namespace Ui {
class VignetteRecette;
}

class VignetteRecette : public QWidget
{
    Q_OBJECT

public:
    explicit VignetteRecette(int width,Recette* recette, QWidget *parent = 0);
    ~VignetteRecette();

private:
    Recette* recette;
    Ui::VignetteRecette *ui;
    void initLabels();
    void paintEvent(QPaintEvent *pe);
};

#endif // VIGNETTERECETTE_H
