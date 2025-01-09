/********************************************************************************
** Form generated from reading UI file 'otobuslisteformu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OTOBUSLISTEFORMU_H
#define UI_OTOBUSLISTEFORMU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OtobusListeFormu
{
public:
    QGroupBox *grparama;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QTableWidget *tblotobusliste;

    void setupUi(QWidget *OtobusListeFormu)
    {
        if (OtobusListeFormu->objectName().isEmpty())
            OtobusListeFormu->setObjectName(QString::fromUtf8("OtobusListeFormu"));
        OtobusListeFormu->resize(851, 669);
        grparama = new QGroupBox(OtobusListeFormu);
        grparama->setObjectName(QString::fromUtf8("grparama"));
        grparama->setGeometry(QRect(30, 40, 371, 91));
        gridLayout = new QGridLayout(grparama);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(grparama);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(grparama);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 0, 1, 1);

        tblotobusliste = new QTableWidget(OtobusListeFormu);
        tblotobusliste->setObjectName(QString::fromUtf8("tblotobusliste"));
        tblotobusliste->setGeometry(QRect(30, 140, 531, 371));

        retranslateUi(OtobusListeFormu);

        QMetaObject::connectSlotsByName(OtobusListeFormu);
    } // setupUi

    void retranslateUi(QWidget *OtobusListeFormu)
    {
        OtobusListeFormu->setWindowTitle(QCoreApplication::translate("OtobusListeFormu", "Form", nullptr));
        grparama->setTitle(QCoreApplication::translate("OtobusListeFormu", "Genel Arama", nullptr));
        label->setText(QCoreApplication::translate("OtobusListeFormu", "Aramak istedi\304\237iniz bilgiyi giriniz.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OtobusListeFormu: public Ui_OtobusListeFormu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OTOBUSLISTEFORMU_H
