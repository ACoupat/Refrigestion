/********************************************************************************
** Form generated from reading UI file 'fenetredetailrecette.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETREDETAILRECETTE_H
#define UI_FENETREDETAILRECETTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fenetreDetailRecette
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *labelNom;
    QLabel *labelImage;
    QLabel *label_3;
    QLabel *labelDuree;
    QLabel *label;
    QLabel *labelIngredients;
    QLabel *label_2;
    QLabel *labelEtapes;

    void setupUi(QWidget *fenetreDetailRecette)
    {
        if (fenetreDetailRecette->objectName().isEmpty())
            fenetreDetailRecette->setObjectName(QStringLiteral("fenetreDetailRecette"));
        fenetreDetailRecette->resize(432, 409);
        fenetreDetailRecette->setStyleSheet(QLatin1String("QWidget#fenetreDetailRecette\n"
"{\n"
"	background-color: lightgreen;\n"
"	border:3px solid black;\n"
"	border-radius:15px;\n"
"}\n"
"\n"
"QWidget#labelNom\n"
"{\n"
"	font-weight:bold;\n"
"	font-size: 20px;\n"
"	padding-left:0px;\n"
"	qproperty-alignment: AlignCenter;\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	font-size: 16px;\n"
"	padding-left:15 px;\n"
"}\n"
"\n"
"strong\n"
"{\n"
"\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(fenetreDetailRecette);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelNom = new QLabel(fenetreDetailRecette);
        labelNom->setObjectName(QStringLiteral("labelNom"));

        verticalLayout->addWidget(labelNom);

        labelImage = new QLabel(fenetreDetailRecette);
        labelImage->setObjectName(QStringLiteral("labelImage"));

        verticalLayout->addWidget(labelImage);

        label_3 = new QLabel(fenetreDetailRecette);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("font-weight:bold;"));

        verticalLayout->addWidget(label_3);

        labelDuree = new QLabel(fenetreDetailRecette);
        labelDuree->setObjectName(QStringLiteral("labelDuree"));

        verticalLayout->addWidget(labelDuree);

        label = new QLabel(fenetreDetailRecette);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("font-weight:bold;"));

        verticalLayout->addWidget(label);

        labelIngredients = new QLabel(fenetreDetailRecette);
        labelIngredients->setObjectName(QStringLiteral("labelIngredients"));

        verticalLayout->addWidget(labelIngredients);

        label_2 = new QLabel(fenetreDetailRecette);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("font-weight:bold;"));

        verticalLayout->addWidget(label_2);

        labelEtapes = new QLabel(fenetreDetailRecette);
        labelEtapes->setObjectName(QStringLiteral("labelEtapes"));

        verticalLayout->addWidget(labelEtapes);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(fenetreDetailRecette);

        QMetaObject::connectSlotsByName(fenetreDetailRecette);
    } // setupUi

    void retranslateUi(QWidget *fenetreDetailRecette)
    {
        fenetreDetailRecette->setWindowTitle(QApplication::translate("fenetreDetailRecette", "Form", 0));
        labelNom->setText(QApplication::translate("fenetreDetailRecette", "Nom Recette", 0));
        labelImage->setText(QString());
        label_3->setText(QApplication::translate("fenetreDetailRecette", "Dur\303\251e  :", 0));
        labelDuree->setText(QString());
        label->setText(QApplication::translate("fenetreDetailRecette", "Ingr\303\251dients n\303\251cessaires :", 0));
        labelIngredients->setText(QString());
        label_2->setText(QApplication::translate("fenetreDetailRecette", "Etapes de pr\303\251paration :", 0));
        labelEtapes->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class fenetreDetailRecette: public Ui_fenetreDetailRecette {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETREDETAILRECETTE_H
