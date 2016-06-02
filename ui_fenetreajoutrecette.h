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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_FenetreAjoutRecette
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QTextEdit *te_etapes;
    QLineEdit *le_type;
    QComboBox *cb_image;
    QLabel *label_4;
    QDialogButtonBox *buttonBox;
    QLabel *label_3;
    QLineEdit *le_nom;
    QLabel *label_5;
    QLabel *label;
    QTableWidget *tableWidget;
    QLabel *label_6;
    QLineEdit *le_duree;

    void setupUi(QDialog *FenetreAjoutRecette)
    {
        if (FenetreAjoutRecette->objectName().isEmpty())
            FenetreAjoutRecette->setObjectName(QStringLiteral("FenetreAjoutRecette"));
        FenetreAjoutRecette->resize(423, 580);
        gridLayout_2 = new QGridLayout(FenetreAjoutRecette);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(15);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(10, 10, 10, 10);
        label_2 = new QLabel(FenetreAjoutRecette);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        te_etapes = new QTextEdit(FenetreAjoutRecette);
        te_etapes->setObjectName(QStringLiteral("te_etapes"));

        gridLayout->addWidget(te_etapes, 4, 3, 1, 1);

        le_type = new QLineEdit(FenetreAjoutRecette);
        le_type->setObjectName(QStringLiteral("le_type"));

        gridLayout->addWidget(le_type, 1, 3, 1, 1);

        cb_image = new QComboBox(FenetreAjoutRecette);
        cb_image->setObjectName(QStringLiteral("cb_image"));

        gridLayout->addWidget(cb_image, 5, 3, 1, 1);

        label_4 = new QLabel(FenetreAjoutRecette);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 1, 1, 1);

        buttonBox = new QDialogButtonBox(FenetreAjoutRecette);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 6, 3, 1, 1);

        label_3 = new QLabel(FenetreAjoutRecette);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        le_nom = new QLineEdit(FenetreAjoutRecette);
        le_nom->setObjectName(QStringLiteral("le_nom"));

        gridLayout->addWidget(le_nom, 0, 3, 1, 1);

        label_5 = new QLabel(FenetreAjoutRecette);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 5, 1, 1, 1);

        label = new QLabel(FenetreAjoutRecette);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        tableWidget = new QTableWidget(FenetreAjoutRecette);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget->rowCount() < 3)
            tableWidget->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem10);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setFrameShape(QFrame::StyledPanel);

        gridLayout->addWidget(tableWidget, 2, 3, 1, 1);

        label_6 = new QLabel(FenetreAjoutRecette);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 3, 1, 1, 1);

        le_duree = new QLineEdit(FenetreAjoutRecette);
        le_duree->setObjectName(QStringLiteral("le_duree"));

        gridLayout->addWidget(le_duree, 3, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(FenetreAjoutRecette);
        QObject::connect(buttonBox, SIGNAL(accepted()), FenetreAjoutRecette, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FenetreAjoutRecette, SLOT(reject()));

        QMetaObject::connectSlotsByName(FenetreAjoutRecette);
    } // setupUi

    void retranslateUi(QDialog *FenetreAjoutRecette)
    {
        FenetreAjoutRecette->setWindowTitle(QApplication::translate("FenetreAjoutRecette", "Dialog", 0));
        label_2->setText(QApplication::translate("FenetreAjoutRecette", "Type de recette :", 0));
        label_4->setText(QApplication::translate("FenetreAjoutRecette", "Etapes de pr\303\251paration :", 0));
        label_3->setText(QApplication::translate("FenetreAjoutRecette", "Ingr\303\251dients", 0));
        label_5->setText(QApplication::translate("FenetreAjoutRecette", "Image :", 0));
        label->setText(QApplication::translate("FenetreAjoutRecette", "Nom :", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("FenetreAjoutRecette", "Ingr\303\251dients", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("FenetreAjoutRecette", "Quantit\303\251s", 0));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->item(0, 0);
        ___qtablewidgetitem2->setText(QApplication::translate("FenetreAjoutRecette", "Tomates", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->item(0, 1);
        ___qtablewidgetitem3->setText(QApplication::translate("FenetreAjoutRecette", "3", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->item(1, 0);
        ___qtablewidgetitem4->setText(QApplication::translate("FenetreAjoutRecette", "Beurre ", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->item(1, 1);
        ___qtablewidgetitem5->setText(QApplication::translate("FenetreAjoutRecette", "200 g", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->item(2, 0);
        ___qtablewidgetitem6->setText(QApplication::translate("FenetreAjoutRecette", "Sucre", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(2, 1);
        ___qtablewidgetitem7->setText(QApplication::translate("FenetreAjoutRecette", "600 kg", 0));
        tableWidget->setSortingEnabled(__sortingEnabled);

        label_6->setText(QApplication::translate("FenetreAjoutRecette", "Dur\303\251e de pr\303\251paration :", 0));
    } // retranslateUi

};

namespace Ui {
    class FenetreAjoutRecette: public Ui_FenetreAjoutRecette {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETREAJOUTRECETTE_H
