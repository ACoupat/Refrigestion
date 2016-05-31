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
    //Test
    for(int i=0;i<3;++i)
     ajoutIngredient();


    /*QPixmap pixmap("20160115_151045.jpg");
    ui->label->setPixmap(pixmap);
    ui->label->setMaximumSize(250,150);
    ui->label->setScaledContents(true);
    ui->label_2->setPixmap(pixmap);
    ui->label_2->setMaximumSize(250,150);
    ui->label_2->setScaledContents(true);
    ui->label_3->setPixmap(pixmap);
    ui->label_3->setMaximumSize(250,150);
    ui->label_3->setScaledContents(true);*/
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
    /*Ingredient *nouvelIngredient = new Ingredient("Tomate Bite", 2, "L", new QDate(2015,5,31), ":/Images/tomate.jpg", this);
    nouvelIngredient->setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed));
    nouvelIngredient->setFrameStyle(1);
    nouvelIngredient->setMinimumWidth(screenWidth * TAILLE_GRILLE / NB_COLONNE_MAX);
    nouvelIngredient->setMinimumHeight(nouvelIngredient->minimumWidth());*/
    //Ingredient *nouvelIngredient = new Ingredient("Tomate",6,"",QDate(2016,12,21),":/Images/tomate.jpg");
    Ingredient* nouvelIngredient = fenAI->creerIngredient();

    VignetteIngredient *newVignetteIngredient = new VignetteIngredient(screenWidth * TAILLE_GRILLE / NB_COLONNE_MAX,nouvelIngredient,this);

    ui->grilleIngredients->addWidget(newVignetteIngredient, ingredients.size() / NB_COLONNE_MAX, ingredients.size() % NB_COLONNE_MAX);
    ingredients << nouvelIngredient;
}

void MainWindow::ajoutRecette()
{
    QLabel *nouvelleRecette = new QLabel(this);
    nouvelleRecette->setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed));
    nouvelleRecette->setText("Recette n°" + QString::number(recettes.size()));
    nouvelleRecette->setFrameStyle(1);
    nouvelleRecette->setMinimumWidth(screenWidth * TAILLE_GRILLE / NB_COLONNE_MAX);
    nouvelleRecette->setMinimumHeight(nouvelleRecette->minimumWidth());
    ui->grilleRecettes->addWidget(nouvelleRecette, recettes.size() / NB_COLONNE_MAX, recettes.size() % NB_COLONNE_MAX);
    recettes << nouvelleRecette;
}
