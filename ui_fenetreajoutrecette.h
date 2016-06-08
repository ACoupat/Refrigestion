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
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FenetreAjoutRecette
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *le_duree;
    QLabel *label_6;
    QLabel *label_2;
    QTextEdit *te_etapes;
    QComboBox *cb_image;
    QLabel *label_4;
    QDialogButtonBox *buttonBox;
    QLabel *label_3;
    QLineEdit *le_nom;
    QLabel *label_5;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableIngredients;
    QHBoxLayout *horizontalLayout;
    QToolButton *tbRetirerIng;
    QToolButton *tbAjouterIng;
    QComboBox *cb_type;

    void setupUi(QDialog *FenetreAjoutRecette)
    {
        if (FenetreAjoutRecette->objectName().isEmpty())
            FenetreAjoutRecette->setObjectName(QStringLiteral("FenetreAjoutRecette"));
        FenetreAjoutRecette->resize(490, 580);
        FenetreAjoutRecette->setStyleSheet(QLatin1String("QDialog\n"
"{\n"
"	background-color: darkgray;\n"
"}"));
        gridLayout_2 = new QGridLayout(FenetreAjoutRecette);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(15);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(10, 10, 10, 10);
        le_duree = new QLineEdit(FenetreAjoutRecette);
        le_duree->setObjectName(QStringLiteral("le_duree"));

        gridLayout->addWidget(le_duree, 3, 3, 1, 1);

        label_6 = new QLabel(FenetreAjoutRecette);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 3, 1, 1, 1);

        label_2 = new QLabel(FenetreAjoutRecette);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        te_etapes = new QTextEdit(FenetreAjoutRecette);
        te_etapes->setObjectName(QStringLiteral("te_etapes"));

        gridLayout->addWidget(te_etapes, 5, 3, 1, 1);

        cb_image = new QComboBox(FenetreAjoutRecette);
        cb_image->setObjectName(QStringLiteral("cb_image"));

        gridLayout->addWidget(cb_image, 6, 3, 1, 1);

        label_4 = new QLabel(FenetreAjoutRecette);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 5, 1, 1, 1);

        buttonBox = new QDialogButtonBox(FenetreAjoutRecette);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 7, 3, 1, 1);

        label_3 = new QLabel(FenetreAjoutRecette);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        le_nom = new QLineEdit(FenetreAjoutRecette);
        le_nom->setObjectName(QStringLiteral("le_nom"));

        gridLayout->addWidget(le_nom, 0, 3, 1, 1);

        label_5 = new QLabel(FenetreAjoutRecette);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 6, 1, 1, 1);

        label = new QLabel(FenetreAjoutRecette);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableIngredients = new QTableWidget(FenetreAjoutRecette);
        if (tableIngredients->columnCount() < 3)
            tableIngredients->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableIngredients->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableIngredients->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableIngredients->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableIngredients->rowCount() < 1)
            tableIngredients->setRowCount(1);
        tableIngredients->setObjectName(QStringLiteral("tableIngredients"));
        tableIngredients->setStyleSheet(QLatin1String("QHeaderView::section {\n"
"    background-color:gray; /*qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                      stop:0 #616161, stop: 0.5 #505050,\n"
"                                      stop: 0.6 #434343, stop:1 #656565);*/\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"}"));
        tableIngredients->setFrameShape(QFrame::StyledPanel);
        tableIngredients->setGridStyle(Qt::SolidLine);
        tableIngredients->setRowCount(1);
        tableIngredients->horizontalHeader()->setCascadingSectionResizes(false);
        tableIngredients->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableIngredients->horizontalHeader()->setStretchLastSection(true);
        tableIngredients->verticalHeader()->setVisible(false);
        tableIngredients->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableIngredients->verticalHeader()->setStretchLastSection(false);

        verticalLayout->addWidget(tableIngredients);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tbRetirerIng = new QToolButton(FenetreAjoutRecette);
        tbRetirerIng->setObjectName(QStringLiteral("tbRetirerIng"));

        horizontalLayout->addWidget(tbRetirerIng);

        tbAjouterIng = new QToolButton(FenetreAjoutRecette);
        tbAjouterIng->setObjectName(QStringLiteral("tbAjouterIng"));

        horizontalLayout->addWidget(tbAjouterIng);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 2, 3, 1, 1);

        cb_type = new QComboBox(FenetreAjoutRecette);
        cb_type->setObjectName(QStringLiteral("cb_type"));

        gridLayout->addWidget(cb_type, 1, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        QWidget::setTabOrder(le_nom, tableIngredients);
        QWidget::setTabOrder(tableIngredients, tbRetirerIng);
        QWidget::setTabOrder(tbRetirerIng, tbAjouterIng);
        QWidget::setTabOrder(tbAjouterIng, le_duree);
        QWidget::setTabOrder(le_duree, te_etapes);
        QWidget::setTabOrder(te_etapes, cb_image);

        retranslateUi(FenetreAjoutRecette);
        QObject::connect(buttonBox, SIGNAL(accepted()), FenetreAjoutRecette, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FenetreAjoutRecette, SLOT(reject()));

        QMetaObject::connectSlotsByName(FenetreAjoutRecette);
    } // setupUi

    void retranslateUi(QDialog *FenetreAjoutRecette)
    {
        FenetreAjoutRecette->setWindowTitle(QApplication::translate("FenetreAjoutRecette", "Dialog", 0));
        label_6->setText(QApplication::translate("FenetreAjoutRecette", "Dur\303\251e de pr\303\251paration :", 0));
        label_2->setText(QApplication::translate("FenetreAjoutRecette", "Type de recette :", 0));
        label_4->setText(QApplication::translate("FenetreAjoutRecette", "Etapes de pr\303\251paration :", 0));
        label_3->setText(QApplication::translate("FenetreAjoutRecette", "Ingr\303\251dients", 0));
        label_5->setText(QApplication::translate("FenetreAjoutRecette", "Image :", 0));
        label->setText(QApplication::translate("FenetreAjoutRecette", "Nom :", 0));
        QTableWidgetItem *___qtablewidgetitem = tableIngredients->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("FenetreAjoutRecette", "Ingr\303\251dients", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableIngredients->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("FenetreAjoutRecette", "Quantit\303\251s", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableIngredients->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("FenetreAjoutRecette", "Unit\303\251", 0));
        tbRetirerIng->setText(QApplication::translate("FenetreAjoutRecette", " - ", 0));
        tbAjouterIng->setText(QApplication::translate("FenetreAjoutRecette", " + ", 0));
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
