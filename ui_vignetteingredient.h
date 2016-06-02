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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VignetteIngredient
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label_nom;
    QLabel *imageLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QLabel *label_quantite;
    QPushButton *pushButton_2;

    void setupUi(QWidget *VignetteIngredient)
    {
        if (VignetteIngredient->objectName().isEmpty())
            VignetteIngredient->setObjectName(QStringLiteral("VignetteIngredient"));
        VignetteIngredient->setEnabled(true);
        VignetteIngredient->resize(300, 305);
        VignetteIngredient->setWindowOpacity(1);
        VignetteIngredient->setAutoFillBackground(false);
        VignetteIngredient->setStyleSheet(QLatin1String("QWidget#VignetteIngredient\n"
"{\n"
"	border: 5px solid black;\n"
"	background-color : yellow;\n"
"	border-radius:20px;\n"
"}\n"
"QLabel\n"
"{\n"
"	font: bold 18px;\n"
"}\n"
"                       "));
        verticalLayout_2 = new QVBoxLayout(VignetteIngredient);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_nom = new QLabel(VignetteIngredient);
        label_nom->setObjectName(QStringLiteral("label_nom"));
        label_nom->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_nom);

        imageLabel = new QLabel(VignetteIngredient);
        imageLabel->setObjectName(QStringLiteral("imageLabel"));
        imageLabel->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(imageLabel->sizePolicy().hasHeightForWidth());
        imageLabel->setSizePolicy(sizePolicy);
        imageLabel->setAutoFillBackground(false);
        imageLabel->setStyleSheet(QLatin1String("QLabel#imageLabel\n"
"{\n"
"	border-image: url(:/Images/Images/tomate.jpg) 0 0 0 0 stretch stretch;\n"
"}"));
        imageLabel->setScaledContents(true);

        verticalLayout_2->addWidget(imageLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(VignetteIngredient);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        label_2 = new QLabel(VignetteIngredient);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(VignetteIngredient);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMinimumSize(QSize(0, 0));
        pushButton->setMaximumSize(QSize(40, 40));
        QFont font;
        font.setPointSize(20);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(pushButton);

        label_quantite = new QLabel(VignetteIngredient);
        label_quantite->setObjectName(QStringLiteral("label_quantite"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_quantite->sizePolicy().hasHeightForWidth());
        label_quantite->setSizePolicy(sizePolicy2);
        label_quantite->setMinimumSize(QSize(100, 0));
        label_quantite->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_quantite);

        pushButton_2 = new QPushButton(VignetteIngredient);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setMaximumSize(QSize(40, 40));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(VignetteIngredient);

        QMetaObject::connectSlotsByName(VignetteIngredient);
    } // setupUi

    void retranslateUi(QWidget *VignetteIngredient)
    {
        VignetteIngredient->setWindowTitle(QApplication::translate("VignetteIngredient", "Form", 0));
        label_nom->setText(QApplication::translate("VignetteIngredient", "Nom", 0));
        imageLabel->setText(QString());
        label->setText(QApplication::translate("VignetteIngredient", "DLC :", 0));
        label_2->setText(QApplication::translate("VignetteIngredient", "01/01/2000", 0));
        pushButton->setText(QApplication::translate("VignetteIngredient", "-", 0));
        label_quantite->setText(QApplication::translate("VignetteIngredient", "0", 0));
        pushButton_2->setText(QApplication::translate("VignetteIngredient", "+", 0));
    } // retranslateUi

};

namespace Ui {
    class VignetteIngredient: public Ui_VignetteIngredient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIGNETTEINGREDIENT_H
