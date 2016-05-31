#include "fenetreajoutrecette.h"
#include "ui_fenetreajoutrecette.h"

FenetreAjoutRecette::FenetreAjoutRecette(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FenetreAjoutRecette)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::SplashScreen);
}

FenetreAjoutRecette::~FenetreAjoutRecette()
{
    delete ui;
}
