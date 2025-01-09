/********************************************************************************
** Form generated from reading UI file 'biletlisteformu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BILETLISTEFORMU_H
#define UI_BILETLISTEFORMU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BiletListeFormu
{
public:
    QTableWidget *tblbiletliste;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QGroupBox *grparama;
    QGridLayout *gridLayout;
    QRadioButton *radioButton;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QWidget *BiletListeFormu)
    {
        if (BiletListeFormu->objectName().isEmpty())
            BiletListeFormu->setObjectName(QString::fromUtf8("BiletListeFormu"));
        BiletListeFormu->resize(676, 635);
        tblbiletliste = new QTableWidget(BiletListeFormu);
        tblbiletliste->setObjectName(QString::fromUtf8("tblbiletliste"));
        tblbiletliste->setGeometry(QRect(20, 140, 541, 401));
        widget = new QWidget(BiletListeFormu);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 50, 304, 82));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        grparama = new QGroupBox(widget);
        grparama->setObjectName(QString::fromUtf8("grparama"));
        gridLayout = new QGridLayout(grparama);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        radioButton = new QRadioButton(grparama);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        gridLayout->addWidget(radioButton, 0, 0, 1, 1);


        gridLayout_2->addWidget(grparama, 0, 0, 1, 1);

        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(1, QFormLayout::LabelRole, lineEdit);


        gridLayout_2->addWidget(groupBox, 0, 1, 1, 1);


        retranslateUi(BiletListeFormu);

        QMetaObject::connectSlotsByName(BiletListeFormu);
    } // setupUi

    void retranslateUi(QWidget *BiletListeFormu)
    {
        BiletListeFormu->setWindowTitle(QCoreApplication::translate("BiletListeFormu", "Form", nullptr));
        grparama->setTitle(QCoreApplication::translate("BiletListeFormu", "Arama T\303\274r\303\274", nullptr));
        radioButton->setText(QCoreApplication::translate("BiletListeFormu", "Sefer Tarihi", nullptr));
        groupBox->setTitle(QCoreApplication::translate("BiletListeFormu", "Genel Arama", nullptr));
        label->setText(QCoreApplication::translate("BiletListeFormu", "Aramak istedi\304\237iniz bilgiyi giriniz.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BiletListeFormu: public Ui_BiletListeFormu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BILETLISTEFORMU_H
