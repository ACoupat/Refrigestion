/********************************************************************************
** Form generated from reading UI file 'fenetreajoutingredient.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETREAJOUTINGREDIENT_H
#define UI_FENETREAJOUTINGREDIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FenetreAjoutIngredient
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QLabel *label_2;
    QTextEdit *textEdit_2;
    QLabel *label;
    QLabel *label_3;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_4;
    QLabel *label_4;

    void setupUi(QDialog *FenetreAjoutIngredient)
    {
        if (FenetreAjoutIngredient->objectName().isEmpty())
            FenetreAjoutIngredient->setObjectName(QStringLiteral("FenetreAjoutIngredient"));
        FenetreAjoutIngredient->resize(400, 400);
        buttonBox = new QDialogButtonBox(FenetreAjoutIngredient);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(40, 360, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        gridLayoutWidget = new QWidget(FenetreAjoutIngredient);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 401, 349));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(15);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(10, 10, 10, 10);
        textEdit = new QTextEdit(gridLayoutWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout->addWidget(textEdit, 0, 3, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        textEdit_2 = new QTextEdit(gridLayoutWidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));

        gridLayout->addWidget(textEdit_2, 1, 3, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        textEdit_3 = new QTextEdit(gridLayoutWidget);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));

        gridLayout->addWidget(textEdit_3, 2, 3, 1, 1);

        textEdit_4 = new QTextEdit(gridLayoutWidget);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));

        gridLayout->addWidget(textEdit_4, 3, 3, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 1, 1, 1);


        retranslateUi(FenetreAjoutIngredient);
        QObject::connect(buttonBox, SIGNAL(accepted()), FenetreAjoutIngredient, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FenetreAjoutIngredient, SLOT(reject()));

        QMetaObject::connectSlotsByName(FenetreAjoutIngredient);
    } // setupUi

    void retranslateUi(QDialog *FenetreAjoutIngredient)
    {
        FenetreAjoutIngredient->setWindowTitle(QApplication::translate("FenetreAjoutIngredient", "Dialog", 0));
        label_2->setText(QApplication::translate("FenetreAjoutIngredient", "Quantit\303\251", 0));
        label->setText(QApplication::translate("FenetreAjoutIngredient", "Nom :", 0));
        label_3->setText(QApplication::translate("FenetreAjoutIngredient", "A consommer avant le :", 0));
        label_4->setText(QApplication::translate("FenetreAjoutIngredient", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class FenetreAjoutIngredient: public Ui_FenetreAjoutIngredient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETREAJOUTINGREDIENT_H
