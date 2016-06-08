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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FenetreAjoutIngredient
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *sb_quantite;
    QComboBox *comboBox;
    QComboBox *cb_type;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *le_nom;
    QDateEdit *de_date;
    QComboBox *cb_image;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *cancelButton;
    QPushButton *okButton;

    void setupUi(QDialog *FenetreAjoutIngredient)
    {
        if (FenetreAjoutIngredient->objectName().isEmpty())
            FenetreAjoutIngredient->setObjectName(QStringLiteral("FenetreAjoutIngredient"));
        FenetreAjoutIngredient->resize(416, 243);
        FenetreAjoutIngredient->setStyleSheet(QLatin1String("QDialog\n"
"{\n"
"	background-color: darkgray;\n"
"}"));
        gridLayout_3 = new QGridLayout(FenetreAjoutIngredient);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(15);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(10, 10, 10, 10);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        sb_quantite = new QDoubleSpinBox(FenetreAjoutIngredient);
        sb_quantite->setObjectName(QStringLiteral("sb_quantite"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sb_quantite->sizePolicy().hasHeightForWidth());
        sb_quantite->setSizePolicy(sizePolicy);
        sb_quantite->setValue(1);

        horizontalLayout->addWidget(sb_quantite);

        comboBox = new QComboBox(FenetreAjoutIngredient);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox);


        gridLayout->addLayout(horizontalLayout, 2, 3, 1, 1);

        cb_type = new QComboBox(FenetreAjoutIngredient);
        cb_type->setObjectName(QStringLiteral("cb_type"));

        gridLayout->addWidget(cb_type, 1, 3, 1, 1);

        label_4 = new QLabel(FenetreAjoutIngredient);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 1, 1, 1, 1);

        label = new QLabel(FenetreAjoutIngredient);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        label_3 = new QLabel(FenetreAjoutIngredient);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 1, 1, 1);

        label_2 = new QLabel(FenetreAjoutIngredient);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(label_2, 2, 1, 1, 1);

        le_nom = new QLineEdit(FenetreAjoutIngredient);
        le_nom->setObjectName(QStringLiteral("le_nom"));

        gridLayout->addWidget(le_nom, 0, 3, 1, 1);

        de_date = new QDateEdit(FenetreAjoutIngredient);
        de_date->setObjectName(QStringLiteral("de_date"));

        gridLayout->addWidget(de_date, 3, 3, 1, 1);

        cb_image = new QComboBox(FenetreAjoutIngredient);
        cb_image->setObjectName(QStringLiteral("cb_image"));

        gridLayout->addWidget(cb_image, 5, 3, 1, 1);

        label_5 = new QLabel(FenetreAjoutIngredient);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 5, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        cancelButton = new QPushButton(FenetreAjoutIngredient);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cancelButton->sizePolicy().hasHeightForWidth());
        cancelButton->setSizePolicy(sizePolicy2);
        cancelButton->setMinimumSize(QSize(20, 20));
        cancelButton->setAutoDefault(false);

        horizontalLayout_2->addWidget(cancelButton);

        okButton = new QPushButton(FenetreAjoutIngredient);
        okButton->setObjectName(QStringLiteral("okButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(okButton->sizePolicy().hasHeightForWidth());
        okButton->setSizePolicy(sizePolicy3);
        okButton->setMinimumSize(QSize(20, 20));

        horizontalLayout_2->addWidget(okButton);


        gridLayout->addLayout(horizontalLayout_2, 6, 3, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        QWidget::setTabOrder(le_nom, cb_type);
        QWidget::setTabOrder(cb_type, sb_quantite);
        QWidget::setTabOrder(sb_quantite, comboBox);
        QWidget::setTabOrder(comboBox, de_date);
        QWidget::setTabOrder(de_date, cb_image);
        QWidget::setTabOrder(cb_image, cancelButton);
        QWidget::setTabOrder(cancelButton, okButton);

        retranslateUi(FenetreAjoutIngredient);

        QMetaObject::connectSlotsByName(FenetreAjoutIngredient);
    } // setupUi

    void retranslateUi(QDialog *FenetreAjoutIngredient)
    {
        FenetreAjoutIngredient->setWindowTitle(QApplication::translate("FenetreAjoutIngredient", "Dialog", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("FenetreAjoutIngredient", "mL", 0)
         << QApplication::translate("FenetreAjoutIngredient", "cL", 0)
         << QApplication::translate("FenetreAjoutIngredient", "L", 0)
         << QApplication::translate("FenetreAjoutIngredient", "g", 0)
         << QApplication::translate("FenetreAjoutIngredient", "kg", 0)
        );
        cb_type->clear();
        cb_type->insertItems(0, QStringList()
         << QApplication::translate("FenetreAjoutIngredient", "Autre", 0)
         << QApplication::translate("FenetreAjoutIngredient", "Boisson", 0)
         << QApplication::translate("FenetreAjoutIngredient", "L\303\251gume", 0)
         << QApplication::translate("FenetreAjoutIngredient", "Fruit", 0)
         << QApplication::translate("FenetreAjoutIngredient", "Viande", 0)
         << QApplication::translate("FenetreAjoutIngredient", "Poisson", 0)
         << QApplication::translate("FenetreAjoutIngredient", "Fromage", 0)
         << QApplication::translate("FenetreAjoutIngredient", "Entr\303\251e", 0)
         << QApplication::translate("FenetreAjoutIngredient", "Plat", 0)
         << QApplication::translate("FenetreAjoutIngredient", "Dessert", 0)
        );
        label_4->setText(QApplication::translate("FenetreAjoutIngredient", "Type :", 0));
        label->setText(QApplication::translate("FenetreAjoutIngredient", "Nom :", 0));
        label_3->setText(QApplication::translate("FenetreAjoutIngredient", "A consommer avant le :", 0));
        label_2->setText(QApplication::translate("FenetreAjoutIngredient", "Quantit\303\251 :", 0));
        label_5->setText(QApplication::translate("FenetreAjoutIngredient", "Image :", 0));
        cancelButton->setText(QApplication::translate("FenetreAjoutIngredient", "Annuler", 0));
        okButton->setText(QApplication::translate("FenetreAjoutIngredient", "Ok", 0));
    } // retranslateUi

};

namespace Ui {
    class FenetreAjoutIngredient: public Ui_FenetreAjoutIngredient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETREAJOUTINGREDIENT_H
