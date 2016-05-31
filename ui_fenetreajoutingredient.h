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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_FenetreAjoutIngredient
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
    QDateEdit *de_date;
    QLineEdit *le_nom;
    QTextEdit *te_desc;
    QComboBox *cb_image;
    QLabel *label_5;
    QDialogButtonBox *buttonBox;
    QDoubleSpinBox *dsp_qte;

    void setupUi(QDialog *FenetreAjoutIngredient)
    {
        if (FenetreAjoutIngredient->objectName().isEmpty())
            FenetreAjoutIngredient->setObjectName(QStringLiteral("FenetreAjoutIngredient"));
        gridLayout_3 = new QGridLayout(FenetreAjoutIngredient);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(15);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(10, 10, 10, 10);
        label = new QLabel(FenetreAjoutIngredient);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        label_3 = new QLabel(FenetreAjoutIngredient);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        label_2 = new QLabel(FenetreAjoutIngredient);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        label_4 = new QLabel(FenetreAjoutIngredient);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 1, 1, 1);

        de_date = new QDateEdit(FenetreAjoutIngredient);
        de_date->setObjectName(QStringLiteral("de_date"));

        gridLayout->addWidget(de_date, 2, 3, 1, 1);

        le_nom = new QLineEdit(FenetreAjoutIngredient);
        le_nom->setObjectName(QStringLiteral("le_nom"));

        gridLayout->addWidget(le_nom, 0, 3, 1, 1);

        te_desc = new QTextEdit(FenetreAjoutIngredient);
        te_desc->setObjectName(QStringLiteral("te_desc"));

        gridLayout->addWidget(te_desc, 4, 3, 1, 1);

        cb_image = new QComboBox(FenetreAjoutIngredient);
        cb_image->setObjectName(QStringLiteral("cb_image"));

        gridLayout->addWidget(cb_image, 5, 3, 1, 1);

        label_5 = new QLabel(FenetreAjoutIngredient);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 5, 1, 1, 1);

        buttonBox = new QDialogButtonBox(FenetreAjoutIngredient);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 6, 3, 1, 1);

        dsp_qte = new QDoubleSpinBox(FenetreAjoutIngredient);
        dsp_qte->setObjectName(QStringLiteral("dsp_qte"));

        gridLayout->addWidget(dsp_qte, 1, 3, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(FenetreAjoutIngredient);
        QObject::connect(buttonBox, SIGNAL(accepted()), FenetreAjoutIngredient, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FenetreAjoutIngredient, SLOT(reject()));

        QMetaObject::connectSlotsByName(FenetreAjoutIngredient);
    } // setupUi

    void retranslateUi(QDialog *FenetreAjoutIngredient)
    {
        FenetreAjoutIngredient->setWindowTitle(QApplication::translate("FenetreAjoutIngredient", "Dialog", 0));
        label->setText(QApplication::translate("FenetreAjoutIngredient", "Nom :", 0));
        label_3->setText(QApplication::translate("FenetreAjoutIngredient", "A consommer avant le :", 0));
        label_2->setText(QApplication::translate("FenetreAjoutIngredient", "Quantit\303\251 :", 0));
        label_4->setText(QApplication::translate("FenetreAjoutIngredient", "Description :", 0));
        cb_image->clear();
        cb_image->insertItems(0, QStringList()
         << QApplication::translate("FenetreAjoutIngredient", "Nouvel \303\251l\303\251ment", 0)
         << QApplication::translate("FenetreAjoutIngredient", "Tomates", 0)
        );
        label_5->setText(QApplication::translate("FenetreAjoutIngredient", "Image :", 0));
    } // retranslateUi

};

namespace Ui {
    class FenetreAjoutIngredient: public Ui_FenetreAjoutIngredient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETREAJOUTINGREDIENT_H
