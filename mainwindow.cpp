#include "mainwindow.h"
#include "ui_mainwindow.h"
#define NB_COLONNE_MAX 4
#define TAILLE_GROUPE_WIDGETS 0.2 // En fraction d'écran
#define TAILLE_GRILLE 0.7 // En fraction d'écran
#define LONGUEUR_COLONNE 200
#define HAUTEUR_LIGNE 200

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->showFullScreen();
    screenWidth = QApplication::desktop()->screenGeometry().width();
    screenHeight = QApplication::desktop()->screenGeometry().height();
    ui->widgets->setFixedWidth(screenWidth * TAILLE_GROUPE_WIDGETS);
    ui->boutonAjoutIngredient->setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed));
    ui->boutonAjoutIngredient->setLayoutDirection(Qt::RightToLeft);
    connect(ui->boutonAjoutIngredient, SIGNAL(clicked(bool)), this, SLOT(ouvrirFenetreAjoutIngredient()));
    ui->boutonAjoutRecette->setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed));
    ui->boutonAjoutRecette->setLayoutDirection(Qt::RightToLeft);
    connect(ui->boutonAjoutRecette, SIGNAL(clicked(bool)), this, SLOT(ouvrirFenetreAjoutRecette()));
    fenAI = new FenetreAjoutIngredient(this);
    fenAR = new FenetreAjoutRecette(this);
    creerVignettesIngredientDemarrage();
    creerVignettesRecettesDemarrage();
    GestionDeFichiers::creerRecette("recette.rfg");
    //Test
    /*for(int i=0;i<3;++i)
    {
        ajoutIngredient();
        ajoutRecette();
    }*/
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ouvrirFenetreAjoutIngredient()
{
    fenAI->show();
}

void MainWindow::ouvrirFenetreAjoutRecette()
{
    fenAR->show();
}

void MainWindow::ajoutIngredient()
{

    Ingredient* nouvelIngredient = fenAI->creerIngredient();
    if(nouvelIngredient->getNom() == "")
    {
            QMessageBox msgBox;
            msgBox.setWindowFlags(Qt::Popup);
            msgBox.setText("Erreur. Veuillez renseigner le champ 'Nom'.");
            msgBox.exec();
    }
    else {
        fenAI->close();
        fenAI = new FenetreAjoutIngredient(this);
        VignetteIngredient *newVignetteIngredient = new VignetteIngredient(screenWidth * TAILLE_GRILLE / NB_COLONNE_MAX,nouvelIngredient,this);

        ui->grilleIngredients->addWidget(newVignetteIngredient, ingredients.size() / NB_COLONNE_MAX, ingredients.size() % NB_COLONNE_MAX);
        ingredients << nouvelIngredient;
    }
}

void MainWindow::ajoutRecette()
{
    Recette* nouvelleRecette = fenAR->creerRecette();

    if(nouvelleRecette->getNom() == "")
    {
        QMessageBox msgBox;
        msgBox.setWindowFlags(Qt::Popup);
        msgBox.setText("Erreur. Veuillez renseigner le champ 'Nom'.");
        msgBox.exec();
    }
    else if(nouvelleRecette->aucunIngredient())
    {
        QMessageBox msgBox;
        msgBox.setWindowFlags(Qt::Popup);
        msgBox.setText("Erreur. Veuillez renseigner au moins un ingrédient.");
        msgBox.exec();
    }
    else
    {
       fenAR->close();
       fenAR = new FenetreAjoutRecette(this);
       VignetteRecette *newVignetteRecette = new VignetteRecette(screenWidth * TAILLE_GRILLE / NB_COLONNE_MAX,nouvelleRecette,this);
       ui->grilleRecettes->addWidget(newVignetteRecette, recettes.size() / NB_COLONNE_MAX, recettes.size() % NB_COLONNE_MAX);
       recettes << nouvelleRecette;
    }

}

void MainWindow::creerVignettesIngredientDemarrage()
{
    QList<Ingredient*> listIng = GestionDeFichiers::listeIngredientsFichier();
    if (listIng.size() == 0)
    {
        qDebug() << "Le fichier listIgredients.rfg est vide";
    }
    else
    {
        foreach (Ingredient* ing, listIng)
        {
            VignetteIngredient *newVignetteIngredient = new VignetteIngredient(screenWidth * TAILLE_GRILLE / NB_COLONNE_MAX, ing, this);
            ui->grilleIngredients->addWidget(newVignetteIngredient, ingredients.size() / NB_COLONNE_MAX, ingredients.size() % NB_COLONNE_MAX);
            ingredients << ing;
        }

    }

}

void MainWindow::creerVignettesRecettesDemarrage()
{
    QDir rep("Recettes");
    QStringList filters;
    filters << "*.rfg";
    QStringList listeRep = rep.entryList(filters);
    if(listeRep.size()!=0)
    {
        foreach(QString chemin, listeRep)
        {
            Recette* nouvelleRecette = GestionDeFichiers::creerRecette(chemin);
            VignetteRecette *newVignetteRecette = new VignetteRecette(screenWidth * TAILLE_GRILLE / NB_COLONNE_MAX,nouvelleRecette,this);
            ui->grilleRecettes->addWidget(newVignetteRecette, recettes.size() / NB_COLONNE_MAX, recettes.size() % NB_COLONNE_MAX);
            recettes << nouvelleRecette;
        }
    }
    else
    {
        qDebug()<< "liste Vide";
    }
}

bool MainWindow::supprimerVignette(VignetteIngredient *vignette)
{
    QMessageBox msgBox;
    msgBox.setWindowFlags(Qt::Popup);
    msgBox.setText("Vous êtes sur le point de supprimer définitivement cet ingrédient.\nEtes vous sûr de vouloir continuer ?");
    msgBox.setStandardButtons(QMessageBox::Yes);
    msgBox.addButton(QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::No);
    if(msgBox.exec() == QMessageBox::Yes)
    {
        vignette->deleteLater();
        ingredients.removeOne(vignette->getIngredient());
        ui->grilleIngredients = new QGridLayout(ui->scrollAreaWidgetContents);
        //ui->scrollArea->setLayout(ui->grilleIngredients);
        //ui->scrollAreaWidgetContents->layout()->addItem(ui->grilleIngredients);

        foreach(Ingredient *ingredient, ingredients)
        {
            VignetteIngredient *newVignetteIngredient = new VignetteIngredient(screenWidth * TAILLE_GRILLE / NB_COLONNE_MAX, ingredient, this);
            ui->grilleIngredients->addWidget(newVignetteIngredient, ingredients.size() / NB_COLONNE_MAX, ingredients.size() % NB_COLONNE_MAX);
        }
    }
    else
    {
        return false;
        /*
        ingredient->setQuantite(+1);
        ui->label_quantite->setText(QString::number(ingredient->getQuantite()) + " " + ingredient->getUnite());
        */
    }
    reecrireFichier();
    return true;
}

void MainWindow::reecrireFichier()
{
    GestionDeFichiers::reecrireFichier(ingredients);
}

QList<Ingredient*> MainWindow::getIngredients()
{
    return this->ingredients;
}
