#ifndef FENETREAJOUTRECETTE_H
#define FENETREAJOUTRECETTE_H

#include <QDialog>
#include <recette.h>

namespace Ui {
class FenetreAjoutRecette;
}

class FenetreAjoutRecette : public QDialog
{
    Q_OBJECT

public:
    explicit FenetreAjoutRecette(QWidget *parent = 0);
    ~FenetreAjoutRecette();
    Recette* creerRecette();

private:
    Ui::FenetreAjoutRecette *ui;
};

#endif // FENETREAJOUTRECETTE_H
