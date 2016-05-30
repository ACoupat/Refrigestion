#ifndef FENETREAJOUTINGREDIENT_H
#define FENETREAJOUTINGREDIENT_H

#include <QDialog>

namespace Ui {
class FenetreAjoutIngredient;
}

class FenetreAjoutIngredient : public QDialog
{
    Q_OBJECT

public:
    explicit FenetreAjoutIngredient(QWidget *parent = 0);
    ~FenetreAjoutIngredient();

private:
    Ui::FenetreAjoutIngredient *ui;
};

#endif // FENETREAJOUTINGREDIENT_H
