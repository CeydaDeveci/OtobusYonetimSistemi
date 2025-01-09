/********************************************************************************
** Form generated from reading UI file 'seyahatlisteformu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEYAHATLISTEFORMU_H
#define UI_SEYAHATLISTEFORMU_H

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

class Ui_SeyahatListeFormu
{
public:
    QGroupBox *grparama;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QTableWidget *tblseyahatliste;

    void setupUi(QWidget *SeyahatListeFormu)
    {
        if (SeyahatListeFormu->objectName().isEmpty())
            SeyahatListeFormu->setObjectName(QString::fromUtf8("SeyahatListeFormu"));
        SeyahatListeFormu->resize(818, 659);
        grparama = new QGroupBox(SeyahatListeFormu);
        grparama->setObjectName(QString::fromUtf8("grparama"));
        grparama->setGeometry(QRect(10, 30, 361, 80));
        gridLayout = new QGridLayout(grparama);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(grparama);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(grparama);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 0, 1, 1);

        tblseyahatliste = new QTableWidget(SeyahatListeFormu);
        tblseyahatliste->setObjectName(QString::fromUtf8("tblseyahatliste"));
        tblseyahatliste->setGeometry(QRect(10, 140, 561, 381));

        retranslateUi(SeyahatListeFormu);

        QMetaObject::connectSlotsByName(SeyahatListeFormu);
    } // setupUi

    void retranslateUi(QWidget *SeyahatListeFormu)
    {
        SeyahatListeFormu->setWindowTitle(QCoreApplication::translate("SeyahatListeFormu", "Form", nullptr));
        grparama->setTitle(QCoreApplication::translate("SeyahatListeFormu", "Genel Arama", nullptr));
        label->setText(QCoreApplication::translate("SeyahatListeFormu", "Aramak istedi\304\237iniz bilgiyi giriniz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeyahatListeFormu: public Ui_SeyahatListeFormu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEYAHATLISTEFORMU_H
