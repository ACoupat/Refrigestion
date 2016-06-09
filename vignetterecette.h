#ifndef VIGNETTERECETTE_H
#define VIGNETTERECETTE_H

#include <QWidget>
#include <recette.h>
#include <QPainter>
#include <fenetredetailrecette.h>

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

protected:
    void mousePressEvent ( QMouseEvent * event );

};

#endif // VIGNETTERECETTE_H
