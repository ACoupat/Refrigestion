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
    //Test
    for(int i=0;i<20;++i)
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

    /*QDialog *fenetreAjoutIngredient = new QDialog(this);
    fenetreAjoutIngredient->setModal(true);
    fenetreAjoutIngredient->setWindowFlags(Qt::SplashScreen);
    QPalette pal(palette());
    pal.setColor(QPalette::Background, Qt::darkCyan);
    fenetreAjoutIngredient->setAutoFillBackground(true);
    fenetreAjoutIngredient->setPalette(pal);
    QHBoxLayout *layout = new QHBoxLayout(fenetreAjoutIngredient);
    QPushButton *annuler = new QPushButton(fenetreAjoutIngredient);
    annuler->setText("Annuler");
    connect(annuler, SIGNAL(clicked(bool)), fenetreAjoutIngredient, SLOT(close()));
    QPushButton *valider = new QPushButton(fenetreAjoutIngredient);
    valider->setText("Valider");
    connect(valider, SIGNAL(clicked(bool)), fenetreAjoutIngredient, SLOT(close()));
    connect(valider, SIGNAL(clicked(bool)), this, SLOT(ajoutIngredient()));
    layout->addWidget(annuler);
    layout->addWidget(valider);*/
    fenAI->show();
}

void MainWindow::ouvrirFenetreAjoutRecette()
{
    QDialog *fenetreAjoutRecette = new QDialog(this);
    fenetreAjoutRecette->setModal(true);
    fenetreAjoutRecette->setWindowFlags(Qt::SplashScreen);
    QPalette pal(palette());
    pal.setColor(QPalette::Background, Qt::darkCyan);
    fenetreAjoutRecette->setAutoFillBackground(true);
    fenetreAjoutRecette->setPalette(pal);
    QHBoxLayout *layout = new QHBoxLayout(fenetreAjoutRecette);
    QPushButton *annuler = new QPushButton(fenetreAjoutRecette);
    annuler->setText("Annuler");
    connect(annuler, SIGNAL(clicked(bool)), fenetreAjoutRecette, SLOT(close()));
    QPushButton *valider = new QPushButton(fenetreAjoutRecette);
    valider->setText("Valider");
    connect(valider, SIGNAL(clicked(bool)), fenetreAjoutRecette, SLOT(close()));
    connect(valider, SIGNAL(clicked(bool)), this, SLOT(ajoutRecette()));
    layout->addWidget(annuler);
    layout->addWidget(valider);
    fenetreAjoutRecette->show();
}

void MainWindow::ajoutIngredient()
{
    Ingredient *nouvelIngredient = new Ingredient("Tomate Bite", 2, "L", new QDate(2015,5,31), ":/Images/tomate.jpg", this);
    nouvelIngredient->setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed));
    //nouvelIngredient->setFrameStyle(1);
    nouvelIngredient->setMinimumWidth(screenWidth * TAILLE_GRILLE / NB_COLONNE_MAX);
    nouvelIngredient->setMinimumHeight(nouvelIngredient->minimumWidth());
    ui->grilleIngredients->addWidget(nouvelIngredient, ingredients.size() / NB_COLONNE_MAX, ingredients.size() % NB_COLONNE_MAX);
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
