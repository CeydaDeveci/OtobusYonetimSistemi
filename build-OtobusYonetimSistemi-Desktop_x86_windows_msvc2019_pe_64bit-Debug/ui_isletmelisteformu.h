/********************************************************************************
** Form generated from reading UI file 'isletmelisteformu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ISLETMELISTEFORMU_H
#define UI_ISLETMELISTEFORMU_H

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

class Ui_IsletmeListeFormu
{
public:
    QGroupBox *grparama;
    QGridLayout *gridLayout;
    QRadioButton *radioButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QTableWidget *tblIsletmeListesi;

    void setupUi(QWidget *IsletmeListeFormu)
    {
        if (IsletmeListeFormu->objectName().isEmpty())
            IsletmeListeFormu->setObjectName(QString::fromUtf8("IsletmeListeFormu"));
        IsletmeListeFormu->resize(772, 623);
        grparama = new QGroupBox(IsletmeListeFormu);
        grparama->setObjectName(QString::fromUtf8("grparama"));
        grparama->setGeometry(QRect(80, 10, 131, 81));
        gridLayout = new QGridLayout(grparama);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        radioButton = new QRadioButton(grparama);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        gridLayout->addWidget(radioButton, 0, 0, 1, 1);

        groupBox = new QGroupBox(IsletmeListeFormu);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(210, 10, 186, 80));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 1, 0, 1, 1);

        tblIsletmeListesi = new QTableWidget(IsletmeListeFormu);
        tblIsletmeListesi->setObjectName(QString::fromUtf8("tblIsletmeListesi"));
        tblIsletmeListesi->setGeometry(QRect(80, 90, 542, 487));

        retranslateUi(IsletmeListeFormu);

        QMetaObject::connectSlotsByName(IsletmeListeFormu);
    } // setupUi

    void retranslateUi(QWidget *IsletmeListeFormu)
    {
        IsletmeListeFormu->setWindowTitle(QCoreApplication::translate("IsletmeListeFormu", "Form", nullptr));
        grparama->setTitle(QCoreApplication::translate("IsletmeListeFormu", "Arama t\303\274r\303\274", nullptr));
        radioButton->setText(QCoreApplication::translate("IsletmeListeFormu", "Otobus Plakas\304\261", nullptr));
        groupBox->setTitle(QCoreApplication::translate("IsletmeListeFormu", "Genel Arama", nullptr));
        label->setText(QCoreApplication::translate("IsletmeListeFormu", "Aramak istedi\304\237iniz veriyi giriniz.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IsletmeListeFormu: public Ui_IsletmeListeFormu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ISLETMELISTEFORMU_H
