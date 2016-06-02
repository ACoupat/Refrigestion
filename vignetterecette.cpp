#include "vignetterecette.h"
#include "ui_vignetterecette.h"

VignetteRecette::VignetteRecette(int width,Recette* recette, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VignetteRecette)
{
    ui->setupUi(this);

    this->recette = recette;
    this->setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed));
    this->setMaximumWidth(width);
    this->setMaximumHeight(width);
    ui->labelImage->setMinimumHeight(width * 0.5);
    initLabels();
    this->show();
}

void VignetteRecette::initLabels()
{
    ui->labelNom->setText(recette->getNom());
    ui->labelDureePrep->setText((recette->getDureePreparation()));

}

//Utile pour que l'affichage se fasse correctement
void VignetteRecette::paintEvent(QPaintEvent *pe) {
    QStyleOption o;
    o.initFrom(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &o, &p, this);
};

VignetteRecette::~VignetteRecette()
{
    delete ui;
}
