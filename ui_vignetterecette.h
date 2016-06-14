/********************************************************************************
** Form generated from reading UI file 'vignetterecette.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIGNETTERECETTE_H
#define UI_VIGNETTERECETTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VignetteRecette
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *buttonSuppr;
    QLabel *labelNom;
    QLabel *labelImage;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *labelDureePrep;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *labelRealisable;

    void setupUi(QWidget *VignetteRecette)
    {
        if (VignetteRecette->objectName().isEmpty())
            VignetteRecette->setObjectName(QStringLiteral("VignetteRecette"));
        VignetteRecette->resize(400, 330);
        VignetteRecette->setMaximumSize(QSize(400, 400));
        VignetteRecette->setCursor(QCursor(Qt::PointingHandCursor));
        VignetteRecette->setStyleSheet(QLatin1String("QWidget#VignetteRecette\n"
"{\n"
"	border: 3px solid black;\n"
"	background-color :lightgreen;\n"
"	border-radius:20px;\n"
"}\n"
"QLabel\n"
"{\n"
"	font: bold 18px;\n"
"}\n"
"\n"
"QWidget#VignetteRecette:hover\n"
"{\n"
"	border: 3px solid black;\n"
"	background-color :blue;\n"
"	border-radius:20px;\n"
"}           "));
        verticalLayout = new QVBoxLayout(VignetteRecette);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        buttonSuppr = new QPushButton(VignetteRecette);
        buttonSuppr->setObjectName(QStringLiteral("buttonSuppr"));

        verticalLayout->addWidget(buttonSuppr);

        labelNom = new QLabel(VignetteRecette);
        labelNom->setObjectName(QStringLiteral("labelNom"));

        verticalLayout->addWidget(labelNom);

        labelImage = new QLabel(VignetteRecette);
        labelImage->setObjectName(QStringLiteral("labelImage"));
        labelImage->setStyleSheet(QLatin1String("QLabel#labelImage\n"
"\n"
"{\n"
"	border-image: url(:/Images/Images/gateauChocolat.jpg) 0 0 0 0 stretch stretch;\n"
"}"));
        labelImage->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelImage);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(VignetteRecette);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        labelDureePrep = new QLabel(VignetteRecette);
        labelDureePrep->setObjectName(QStringLiteral("labelDureePrep"));

        horizontalLayout->addWidget(labelDureePrep);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(VignetteRecette);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        labelRealisable = new QLabel(VignetteRecette);
        labelRealisable->setObjectName(QStringLiteral("labelRealisable"));

        horizontalLayout_2->addWidget(labelRealisable);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(VignetteRecette);

        QMetaObject::connectSlotsByName(VignetteRecette);
    } // setupUi

    void retranslateUi(QWidget *VignetteRecette)
    {
        VignetteRecette->setWindowTitle(QApplication::translate("VignetteRecette", "Form", 0));
        buttonSuppr->setText(QApplication::translate("VignetteRecette", "Supprimer recette", 0));
        labelNom->setText(QApplication::translate("VignetteRecette", "Gateau au chocolat", 0));
        labelImage->setText(QString());
        label->setText(QApplication::translate("VignetteRecette", "Dur\303\251e de pr\303\251paration :", 0));
        labelDureePrep->setText(QApplication::translate("VignetteRecette", "30 min", 0));
        label_2->setText(QApplication::translate("VignetteRecette", "R\303\251alisable :", 0));
        labelRealisable->setText(QApplication::translate("VignetteRecette", "oui", 0));
    } // retranslateUi

};

namespace Ui {
    class VignetteRecette: public Ui_VignetteRecette {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIGNETTERECETTE_H
