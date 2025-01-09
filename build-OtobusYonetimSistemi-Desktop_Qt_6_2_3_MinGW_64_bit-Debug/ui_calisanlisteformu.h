/********************************************************************************
** Form generated from reading UI file 'calisanlisteformu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALISANLISTEFORMU_H
#define UI_CALISANLISTEFORMU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalisanListeFormu
{
public:
    QGroupBox *grbarama;
    QGridLayout *gridLayout_2;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton;
    QTableWidget *tblcalisanlistesi;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QWidget *CalisanListeFormu)
    {
        if (CalisanListeFormu->objectName().isEmpty())
            CalisanListeFormu->setObjectName(QString::fromUtf8("CalisanListeFormu"));
        CalisanListeFormu->resize(788, 651);
        grbarama = new QGroupBox(CalisanListeFormu);
        grbarama->setObjectName(QString::fromUtf8("grbarama"));
        grbarama->setGeometry(QRect(70, 50, 129, 108));
        gridLayout_2 = new QGridLayout(grbarama);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        radioButton_2 = new QRadioButton(grbarama);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        gridLayout_2->addWidget(radioButton_2, 2, 0, 1, 1);

        radioButton_3 = new QRadioButton(grbarama);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        gridLayout_2->addWidget(radioButton_3, 3, 0, 1, 1);

        radioButton = new QRadioButton(grbarama);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        gridLayout_2->addWidget(radioButton, 1, 0, 1, 1);

        tblcalisanlistesi = new QTableWidget(CalisanListeFormu);
        tblcalisanlistesi->setObjectName(QString::fromUtf8("tblcalisanlistesi"));
        tblcalisanlistesi->setGeometry(QRect(70, 170, 611, 391));
        groupBox = new QGroupBox(CalisanListeFormu);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(230, 50, 311, 111));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 0, 1, 1);


        retranslateUi(CalisanListeFormu);

        QMetaObject::connectSlotsByName(CalisanListeFormu);
    } // setupUi

    void retranslateUi(QWidget *CalisanListeFormu)
    {
        CalisanListeFormu->setWindowTitle(QCoreApplication::translate("CalisanListeFormu", "Form", nullptr));
        grbarama->setTitle(QCoreApplication::translate("CalisanListeFormu", "Arama t\303\274r\303\274", nullptr));
        radioButton_2->setText(QCoreApplication::translate("CalisanListeFormu", "Muavin", nullptr));
        radioButton_3->setText(QCoreApplication::translate("CalisanListeFormu", "\305\236ube Sorumlusu", nullptr));
        radioButton->setText(QCoreApplication::translate("CalisanListeFormu", "\305\236of\303\266r", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CalisanListeFormu", "Genel Arama", nullptr));
        label->setText(QCoreApplication::translate("CalisanListeFormu", "Aramak istedi\304\237iniz \303\266zelli\304\237i giriniz.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalisanListeFormu: public Ui_CalisanListeFormu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALISANLISTEFORMU_H
