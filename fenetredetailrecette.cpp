#include "fenetredetailrecette.h"
#include "ui_fenetredetailrecette.h"

fenetreDetailRecette::fenetreDetailRecette(Recette *recette, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fenetreDetailRecette)
{
    ui->setupUi(this);
    this->recette = recette;
    this->setModal(true);
    this->setWindowFlags(Qt::Popup);
    initLabels();
}

void fenetreDetailRecette::initLabels()
{
    QString ingredients;
    QList<Ingredient*> liste = recette->getListIngredients();
    foreach(Ingredient* ing, liste)
    {
        ingredients += "- " + ing->toStringDetail() +"\n";
    }

    ui->labelNom->setText(recette->getNom());
    ui->labelDuree->setText(recette->getDureePreparation());
    ui->labelImage->setStyleSheet("QLabel#labelImage{ border-image: url("+recette->getCheminImage()+") 0 0 0 0 stretch stretch; }");
    ui->labelIngredients->setText(ingredients);
    ui->labelEtapes->setText(recette->getEtapesPreparation());
}

fenetreDetailRecette::~fenetreDetailRecette()
{
    delete ui;
}
