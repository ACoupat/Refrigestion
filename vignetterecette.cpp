#include "vignetterecette.h"
#include "ui_vignetterecette.h"
#include <QDebug>
#include <mainwindow.h>
VignetteRecette::VignetteRecette(int width, Recette* recette, MainWindow *parent) :
    QWidget(parent),
    ui(new Ui::VignetteRecette)
{
    ui->setupUi(this);
    window = parent;
    this->recette = recette;
    this->setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed));
    this->setMaximumWidth(width);
    this->setMaximumHeight(width);
    ui->labelImage->setMinimumHeight(width * 0.5);
    this->setStyleSheet("QWidget#VignetteRecette{border: 3px solid black;background-color :lightgreen;border-radius:20px;}"
                        "QLabel{font: bold 18px;}"
                        "QWidget#VignetteRecette:hover{border: 3px solid black;background-color :blue;border-radius:20px;}");
    initLabels();
    connect(ui->buttonSuppr,SIGNAL(clicked(bool)),this,SLOT(supprimerVignette()));

    this->show();
}

void VignetteRecette::initLabels()
{
    ui->labelNom->setText(recette->getNom());
    ui->labelDureePrep->setText((recette->getDureePreparation()));
    ui->labelImage->setStyleSheet("QLabel#labelImage{ border-image: url("+recette->getCheminImage()+") 0 0 0 0 stretch stretch; }" );
    repaint();
}

//Utile pour que l'affichage se fasse correctement
void VignetteRecette::paintEvent(QPaintEvent *pe) {
    QStyleOption o;
    o.initFrom(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &o, &p, this);
}

void VignetteRecette::mousePressEvent ( QMouseEvent * event )
{
    fenetreDetailRecette* fenDR = new fenetreDetailRecette(recette);
    fenDR->show();
}

void VignetteRecette::supprimerVignette()
{
    window->supprimerVignetteRecette(this);
}

Recette *VignetteRecette::getRecette()
{
    return recette;
}

VignetteRecette::~VignetteRecette()
{
    delete ui;
}
