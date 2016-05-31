/********************************************************************************
** Form generated from reading UI file 'vignetteingredient.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIGNETTEINGREDIENT_H
#define UI_VIGNETTEINGREDIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VignetteIngredient
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *imageLabel;
    QLabel *nomLabel;
    QLabel *qteLabel;
    QLabel *dateLabel;

    void setupUi(QWidget *VignetteIngredient)
    {
        if (VignetteIngredient->objectName().isEmpty())
            VignetteIngredient->setObjectName(QStringLiteral("VignetteIngredient"));
        VignetteIngredient->setEnabled(true);
        VignetteIngredient->resize(400, 313);
        VignetteIngredient->setWindowOpacity(1);
        VignetteIngredient->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"	border: 5px solid black;\n"
"	background-color : yellow;\n"
"	border-radius:20px;\n"
"}\n"
"QLabel\n"
"{\n"
"	font: bold italic 18px;\n"
"}\n"
"                       "));
        verticalLayout_2 = new QVBoxLayout(VignetteIngredient);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        imageLabel = new QLabel(VignetteIngredient);
        imageLabel->setObjectName(QStringLiteral("imageLabel"));
        imageLabel->setEnabled(true);
        imageLabel->setMinimumSize(QSize(0, 69));

        verticalLayout->addWidget(imageLabel);

        nomLabel = new QLabel(VignetteIngredient);
        nomLabel->setObjectName(QStringLiteral("nomLabel"));

        verticalLayout->addWidget(nomLabel);

        qteLabel = new QLabel(VignetteIngredient);
        qteLabel->setObjectName(QStringLiteral("qteLabel"));

        verticalLayout->addWidget(qteLabel);

        dateLabel = new QLabel(VignetteIngredient);
        dateLabel->setObjectName(QStringLiteral("dateLabel"));

        verticalLayout->addWidget(dateLabel);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(VignetteIngredient);

        QMetaObject::connectSlotsByName(VignetteIngredient);
    } // setupUi

    void retranslateUi(QWidget *VignetteIngredient)
    {
        VignetteIngredient->setWindowTitle(QApplication::translate("VignetteIngredient", "Form", 0));
        imageLabel->setText(QApplication::translate("VignetteIngredient", "TextLabel", 0));
        nomLabel->setText(QApplication::translate("VignetteIngredient", "Nom:", 0));
        qteLabel->setText(QApplication::translate("VignetteIngredient", "Quantit\303\251 :", 0));
        dateLabel->setText(QApplication::translate("VignetteIngredient", "A consommer avant le :", 0));
    } // retranslateUi

};

namespace Ui {
    class VignetteIngredient: public Ui_VignetteIngredient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIGNETTEINGREDIENT_H
