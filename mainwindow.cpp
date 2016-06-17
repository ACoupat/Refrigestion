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
    fenAR = new FenetreAjoutRecette(this);
    fenAI = new FenetreAjoutIngredient(this);
    grilleIngredients = new QGridLayout();
    grilleRecettes = new QGridLayout();
    ui->verticalLayout->addLayout(grilleIngredients);
    ui->verticalLayout_2->addLayout(grilleRecettes);
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
    fenAI = new FenetreAjoutIngredient(this);
    fenAI->show();
}

void MainWindow::ouvrirFenetreAjoutRecette()
{
    fenAR = new FenetreAjoutRecette(this);
    fenAR->show();
}

void MainWindow::ouvrirFenArModif(Recette* recette)
{
    fenAR->setContenu(recette);
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
        grilleIngredients->addWidget(newVignetteIngredient, ingredients.size() / NB_COLONNE_MAX, ingredients.size() % NB_COLONNE_MAX);
        vignettesIngredients << newVignetteIngredient;
        ingredients << nouvelIngredient;
    }
}
void MainWindow::modifRecette(QString nomModif)
{
    qDebug() << "la2";
qDebug() << vignettesRecettes.size();
        foreach(VignetteRecette* vr, vignettesRecettes)
        {
            qDebug() << "la3";
            if(vr->getRecette()->getNom() == nomModif)
            {       qDebug() << "la4";
                supprimerVignetteRecette(vr,true);
                    qDebug() << "la5";
            }


        }
        //Ajout de la recette
        QString nomEntre =  fenAR->getNomEntre();

        if(!GestionDeFichiers::nomEstConforme(nomEntre))
        {
            QMessageBox msgBox;
            msgBox.setWindowFlags(Qt::Popup);
            msgBox.setText("Erreur. Le nom de la recette est non conforme ou la recette existe déjà.");
            fenAR->show();
            msgBox.exec();
        }
        else if(fenAR->pasDingredients())
        {
            QMessageBox msgBox;
            msgBox.setWindowFlags(Qt::Popup);
            msgBox.setText("Erreur. Veuillez renseigner au moins un ingrédient.");
            msgBox.exec();
        }
        else
        {
           Recette* nouvelleRecette = fenAR->creerRecette();
           fenAR->close();
           fenAR = new FenetreAjoutRecette(this);
           VignetteRecette *newVignetteRecette = new VignetteRecette(screenWidth * TAILLE_GRILLE / NB_COLONNE_MAX,nouvelleRecette,this);
           grilleRecettes->addWidget(newVignetteRecette, recettes.size() / NB_COLONNE_MAX, recettes.size() % NB_COLONNE_MAX);
           vignettesRecettes << newVignetteRecette;
           recettes << nouvelleRecette;
        }
}

void MainWindow::ajoutRecette()
{
    //Ajout de la recette
    QString nomEntre =  fenAR->getNomEntre();
    if(GestionDeFichiers::recetteExisteDeja(nomEntre+".rfg") || !GestionDeFichiers::nomEstConforme(nomEntre))
    {
        QMessageBox msgBox;
        msgBox.setWindowFlags(Qt::Popup);
        msgBox.setText("Erreur. Le nom de la recette est non conforme ou la recette existe déjà.");
        fenAR->show();
        msgBox.exec();
    }
    else if(fenAR->pasDingredients())
    {
        QMessageBox msgBox;
        msgBox.setWindowFlags(Qt::Popup);
        msgBox.setText("Erreur. Veuillez renseigner au moins un ingrédient.");
        msgBox.exec();
    }
    else
    {
       Recette* nouvelleRecette = fenAR->creerRecette();
       fenAR->close();
       fenAR = new FenetreAjoutRecette(this);
       VignetteRecette *newVignetteRecette = new VignetteRecette(screenWidth * TAILLE_GRILLE / NB_COLONNE_MAX,nouvelleRecette,this);
       grilleRecettes->addWidget(newVignetteRecette, recettes.size() / NB_COLONNE_MAX, recettes.size() % NB_COLONNE_MAX);
       vignettesRecettes << newVignetteRecette;
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
            grilleIngredients->addWidget(newVignetteIngredient, ingredients.size() / NB_COLONNE_MAX, ingredients.size() % NB_COLONNE_MAX);
            vignettesIngredients << newVignetteIngredient;
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
            grilleRecettes->addWidget(newVignetteRecette, recettes.size() / NB_COLONNE_MAX, recettes.size() % NB_COLONNE_MAX);
            vignettesRecettes << newVignetteRecette;
            recettes << nouvelleRecette;
        }
    }
    else
    {
        qDebug()<< "liste Vide";
    }
}

bool MainWindow::supprimerVignetteIngredient(VignetteIngredient *vignette)
{
    QMessageBox msgBox;
    msgBox.setWindowFlags(Qt::Popup);
    msgBox.setText("Vous êtes sur le point de supprimer définitvement cet ingrédient.\nConfirmer ?");
    msgBox.addButton(trUtf8("Oui"),QMessageBox::YesRole);
    msgBox.addButton(trUtf8("Non"),QMessageBox::NoRole);
    msgBox.setDefaultButton(QMessageBox::No);

    if(msgBox.exec() == QMessageBox::Yes)
    {
        ingredients.removeOne(vignette->getIngredient());

        foreach(VignetteIngredient *vignette, vignettesIngredients) vignette->deleteLater();
        vignettesIngredients.clear();
        delete grilleIngredients;
        grilleIngredients = new QGridLayout();
        ui->verticalLayout->addLayout(grilleIngredients);

        foreach(Ingredient *ingredient, ingredients)
        {
            VignetteIngredient *newVignetteIngredient = new VignetteIngredient(screenWidth * TAILLE_GRILLE / NB_COLONNE_MAX, ingredient, this);
            grilleIngredients->addWidget(newVignetteIngredient, vignettesIngredients.size() / NB_COLONNE_MAX, vignettesIngredients.size() % NB_COLONNE_MAX);
            vignettesIngredients << newVignetteIngredient;
        }
    }
    else
    {
        //vignette->getIngredient()->setQuantite(0);
        return false;
    }
    reecrireFichier();
    return true;
}

bool MainWindow::supprimerVignetteRecette(VignetteRecette *vignette, bool modif)
{
    QMessageBox msgBox;
    msgBox.setWindowFlags(Qt::Popup);
    if(modif)
        msgBox.setText("Vous êtes sur le point de modifier cet ingrédient.\nConfirmer ?");
    else
     msgBox.setText("Vous êtes sur le point de supprimer définitivement cette recette.\nEtes vous sûr de vouloir continuer ?");
    msgBox.setStandardButtons(QMessageBox::Yes);
    msgBox.addButton(QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::No);
    if(msgBox.exec() == QMessageBox::Yes)
    {
        qDebug() << vignettesRecettes;
        qDebug() << GestionDeFichiers::supprimerFichierRecette(vignette->getRecette());
        qDebug() << "Removal" << recettes.removeOne(vignette->getRecette());

        qDebug() << vignettesRecettes;
        foreach(VignetteRecette *vignette, vignettesRecettes) vignette->deleteLater();
        vignettesRecettes.clear();
        delete grilleRecettes;
        grilleRecettes = new QGridLayout();
        ui->verticalLayout_2->addLayout(grilleRecettes);
        foreach(Recette *recette, recettes)
        {
            VignetteRecette *newVignetteRecette = new VignetteRecette(screenWidth * TAILLE_GRILLE / NB_COLONNE_MAX, recette, this);
            grilleRecettes->addWidget(newVignetteRecette, vignettesRecettes.size() / NB_COLONNE_MAX, vignettesRecettes.size() % NB_COLONNE_MAX);
            vignettesRecettes << newVignetteRecette;
        }
    }
    else
    {
        return false;
    }
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
