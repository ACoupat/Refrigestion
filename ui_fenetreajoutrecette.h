/********************************************************************************
** Form generated from reading UI file 'fenetreajoutrecette.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETREAJOUTRECETTE_H
#define UI_FENETREAJOUTRECETTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FenetreAjoutRecette
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_5;
    QScrollArea *scrollIngredients;
    QWidget *tableIngredients;
    QGridLayout *gridLayout_4;
    QGridLayout *grilleIngredients;
    QDoubleSpinBox *sb_ing1;
    QComboBox *cb_ing1;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_8;
    QLineEdit *le_ing1;
    QComboBox *cb_ing2;
    QDoubleSpinBox *sb_ing2;
    QLineEdit *le_ing2;
    QHBoxLayout *horizontalLayout;
    QToolButton *tbRetirerIng;
    QToolButton *tbAjouterIng;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *cancelButton;
    QPushButton *okButton;
    QLineEdit *le_duree;
    QLabel *label_6;
    QLabel *label_2;
    QComboBox *cb_image;
    QTextEdit *te_etapes;
    QLabel *label_4;
    QLineEdit *le_nom;
    QLabel *label;
    QLabel *label_5;
    QComboBox *cb_type;

    void setupUi(QDialog *FenetreAjoutRecette)
    {
        if (FenetreAjoutRecette->objectName().isEmpty())
            FenetreAjoutRecette->setObjectName(QStringLiteral("FenetreAjoutRecette"));
        FenetreAjoutRecette->resize(490, 580);
        FenetreAjoutRecette->setStyleSheet(QLatin1String("QDialog\n"
"{\n"
"	background-color: darkgray;\n"
"}\n"
"\n"
"QWidget#scrollAreaWidgetContents_2\n"
"{\n"
"	padding-top : 5pxpx;\n"
"}"));
        gridLayout_2 = new QGridLayout(FenetreAjoutRecette);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(15);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(10, 10, 10, 10);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        scrollIngredients = new QScrollArea(FenetreAjoutRecette);
        scrollIngredients->setObjectName(QStringLiteral("scrollIngredients"));
        scrollIngredients->setStyleSheet(QStringLiteral("padding : 0px;"));
        scrollIngredients->setWidgetResizable(true);
        tableIngredients = new QWidget();
        tableIngredients->setObjectName(QStringLiteral("tableIngredients"));
        tableIngredients->setGeometry(QRect(0, 0, 319, 124));
        gridLayout_4 = new QGridLayout(tableIngredients);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        grilleIngredients = new QGridLayout();
        grilleIngredients->setObjectName(QStringLiteral("grilleIngredients"));
        sb_ing1 = new QDoubleSpinBox(tableIngredients);
        sb_ing1->setObjectName(QStringLiteral("sb_ing1"));

        grilleIngredients->addWidget(sb_ing1, 1, 1, 1, 1);

        cb_ing1 = new QComboBox(tableIngredients);
        cb_ing1->setObjectName(QStringLiteral("cb_ing1"));

        grilleIngredients->addWidget(cb_ing1, 1, 2, 1, 1);

        label_7 = new QLabel(tableIngredients);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMaximumSize(QSize(16777215, 25));

        grilleIngredients->addWidget(label_7, 0, 0, 1, 1);

        label_9 = new QLabel(tableIngredients);
        label_9->setObjectName(QStringLiteral("label_9"));

        grilleIngredients->addWidget(label_9, 0, 2, 1, 1);

        label_8 = new QLabel(tableIngredients);
        label_8->setObjectName(QStringLiteral("label_8"));

        grilleIngredients->addWidget(label_8, 0, 1, 1, 1);

        le_ing1 = new QLineEdit(tableIngredients);
        le_ing1->setObjectName(QStringLiteral("le_ing1"));

        grilleIngredients->addWidget(le_ing1, 1, 0, 1, 1);

        cb_ing2 = new QComboBox(tableIngredients);
        cb_ing2->setObjectName(QStringLiteral("cb_ing2"));

        grilleIngredients->addWidget(cb_ing2, 2, 2, 1, 1);

        sb_ing2 = new QDoubleSpinBox(tableIngredients);
        sb_ing2->setObjectName(QStringLiteral("sb_ing2"));

        grilleIngredients->addWidget(sb_ing2, 2, 1, 1, 1);

        le_ing2 = new QLineEdit(tableIngredients);
        le_ing2->setObjectName(QStringLiteral("le_ing2"));

        grilleIngredients->addWidget(le_ing2, 2, 0, 1, 1);


        gridLayout_4->addLayout(grilleIngredients, 0, 0, 1, 1);

        scrollIngredients->setWidget(tableIngredients);

        verticalLayout_5->addWidget(scrollIngredients);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tbRetirerIng = new QToolButton(FenetreAjoutRecette);
        tbRetirerIng->setObjectName(QStringLiteral("tbRetirerIng"));

        horizontalLayout->addWidget(tbRetirerIng);

        tbAjouterIng = new QToolButton(FenetreAjoutRecette);
        tbAjouterIng->setObjectName(QStringLiteral("tbAjouterIng"));

        horizontalLayout->addWidget(tbAjouterIng);


        verticalLayout_5->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_5, 2, 3, 1, 1);

        label_3 = new QLabel(FenetreAjoutRecette);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        cancelButton = new QPushButton(FenetreAjoutRecette);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setAutoDefault(false);

        horizontalLayout_3->addWidget(cancelButton);

        okButton = new QPushButton(FenetreAjoutRecette);
        okButton->setObjectName(QStringLiteral("okButton"));

        horizontalLayout_3->addWidget(okButton);


        gridLayout->addLayout(horizontalLayout_3, 9, 3, 1, 1);

        le_duree = new QLineEdit(FenetreAjoutRecette);
        le_duree->setObjectName(QStringLiteral("le_duree"));

        gridLayout->addWidget(le_duree, 3, 3, 1, 1);

        label_6 = new QLabel(FenetreAjoutRecette);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 3, 1, 1, 1);

        label_2 = new QLabel(FenetreAjoutRecette);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        cb_image = new QComboBox(FenetreAjoutRecette);
        cb_image->setObjectName(QStringLiteral("cb_image"));

        gridLayout->addWidget(cb_image, 7, 3, 1, 1);

        te_etapes = new QTextEdit(FenetreAjoutRecette);
        te_etapes->setObjectName(QStringLiteral("te_etapes"));

        gridLayout->addWidget(te_etapes, 6, 3, 1, 1);

        label_4 = new QLabel(FenetreAjoutRecette);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 6, 1, 1, 1);

        le_nom = new QLineEdit(FenetreAjoutRecette);
        le_nom->setObjectName(QStringLiteral("le_nom"));

        gridLayout->addWidget(le_nom, 0, 3, 1, 1);

        label = new QLabel(FenetreAjoutRecette);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        label_5 = new QLabel(FenetreAjoutRecette);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 7, 1, 1, 1);

        cb_type = new QComboBox(FenetreAjoutRecette);
        cb_type->setObjectName(QStringLiteral("cb_type"));

        gridLayout->addWidget(cb_type, 1, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        QWidget::setTabOrder(le_nom, cb_type);
        QWidget::setTabOrder(cb_type, scrollIngredients);
        QWidget::setTabOrder(scrollIngredients, le_ing1);
        QWidget::setTabOrder(le_ing1, sb_ing1);
        QWidget::setTabOrder(sb_ing1, cb_ing1);
        QWidget::setTabOrder(cb_ing1, le_ing2);
        QWidget::setTabOrder(le_ing2, sb_ing2);
        QWidget::setTabOrder(sb_ing2, cb_ing2);
        QWidget::setTabOrder(cb_ing2, tbRetirerIng);
        QWidget::setTabOrder(tbRetirerIng, tbAjouterIng);
        QWidget::setTabOrder(tbAjouterIng, le_duree);
        QWidget::setTabOrder(le_duree, te_etapes);
        QWidget::setTabOrder(te_etapes, cb_image);
        QWidget::setTabOrder(cb_image, cancelButton);
        QWidget::setTabOrder(cancelButton, okButton);

        retranslateUi(FenetreAjoutRecette);

        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(FenetreAjoutRecette);
    } // setupUi

    void retranslateUi(QDialog *FenetreAjoutRecette)
    {
        FenetreAjoutRecette->setWindowTitle(QApplication::translate("FenetreAjoutRecette", "Dialog", 0));
        cb_ing1->clear();
        cb_ing1->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("FenetreAjoutRecette", "mL", 0)
         << QApplication::translate("FenetreAjoutRecette", "cL", 0)
         << QApplication::translate("FenetreAjoutRecette", "L", 0)
         << QApplication::translate("FenetreAjoutRecette", "g", 0)
         << QApplication::translate("FenetreAjoutRecette", "kg", 0)
        );
        label_7->setText(QApplication::translate("FenetreAjoutRecette", "Ingr\303\251dients", 0));
        label_9->setText(QApplication::translate("FenetreAjoutRecette", "Unit\303\251", 0));
        label_8->setText(QApplication::translate("FenetreAjoutRecette", "Quantit\303\251", 0));
        cb_ing2->clear();
        cb_ing2->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("FenetreAjoutRecette", "mL", 0)
         << QApplication::translate("FenetreAjoutRecette", "cL", 0)
         << QApplication::translate("FenetreAjoutRecette", "L", 0)
         << QApplication::translate("FenetreAjoutRecette", "g", 0)
         << QApplication::translate("FenetreAjoutRecette", "kg", 0)
        );
        tbRetirerIng->setText(QApplication::translate("FenetreAjoutRecette", " - ", 0));
        tbAjouterIng->setText(QApplication::translate("FenetreAjoutRecette", " + ", 0));
        label_3->setText(QApplication::translate("FenetreAjoutRecette", "Ingr\303\251dients", 0));
        cancelButton->setText(QApplication::translate("FenetreAjoutRecette", "Annuler", 0));
        okButton->setText(QApplication::translate("FenetreAjoutRecette", "Ok", 0));
        label_6->setText(QApplication::translate("FenetreAjoutRecette", "Dur\303\251e de pr\303\251paration :", 0));
        label_2->setText(QApplication::translate("FenetreAjoutRecette", "Type de recette :", 0));
        label_4->setText(QApplication::translate("FenetreAjoutRecette", "Etapes de pr\303\251paration :", 0));
        label->setText(QApplication::translate("FenetreAjoutRecette", "Nom :", 0));
        label_5->setText(QApplication::translate("FenetreAjoutRecette", "Image :", 0));
        cb_type->clear();
        cb_type->insertItems(0, QStringList()
         << QApplication::translate("FenetreAjoutRecette", "Autre", 0)
         << QApplication::translate("FenetreAjoutRecette", "Boisson", 0)
         << QApplication::translate("FenetreAjoutRecette", "L\303\251gume", 0)
         << QApplication::translate("FenetreAjoutRecette", "Fruit", 0)
         << QApplication::translate("FenetreAjoutRecette", "Viande", 0)
         << QApplication::translate("FenetreAjoutRecette", "Poisson", 0)
         << QApplication::translate("FenetreAjoutRecette", "Fromage", 0)
         << QApplication::translate("FenetreAjoutRecette", "Entr\303\251e", 0)
         << QApplication::translate("FenetreAjoutRecette", "Plat", 0)
         << QApplication::translate("FenetreAjoutRecette", "Dessert", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class FenetreAjoutRecette: public Ui_FenetreAjoutRecette {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETREAJOUTRECETTE_H
