#ifndef RECETTE_H
#define RECETTE_H

#include <QObject>
#include <QLabel>

class Recette : public QLabel
{
public:
    explicit Recette(QWidget *parent = nullptr);
    ~Recette();
};

#endif // RECETTE_H
