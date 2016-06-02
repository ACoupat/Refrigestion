#ifndef INGREDIENT_H
#define INGREDIENT_H

#include <QObject>
#include <QLabel>
#include <QWidget>
#include <QDate>
#include <QPushButton>
#include <QPixmap>
#include <QVBoxLayout>
#include <QFile>

class Ingredient //: public QWidget
{
public:
    explicit Ingredient(QString nom, double quantite, QString unite, QDate datePeremption, QString cheminImage/*, QWidget *parent = nullptr*/);
    ~Ingredient();
    void setQuantite(double);
    QString getNom();
    double getQuantite();
    QString getUnite();
    QDate getDate();

private:
    double quantite;
    QString nom;
    QString unite;
    QDate datePeremption;
};

#endif // INGREDIENT_H