/********************************************************************************
** Form generated from reading UI file 'yolculisteformu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YOLCULISTEFORMU_H
#define UI_YOLCULISTEFORMU_H

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

class Ui_YolcuListeFormu
{
public:
    QGroupBox *grparama;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QTableWidget *tblyolculiste;

    void setupUi(QWidget *YolcuListeFormu)
    {
        if (YolcuListeFormu->objectName().isEmpty())
            YolcuListeFormu->setObjectName(QString::fromUtf8("YolcuListeFormu"));
        YolcuListeFormu->resize(1137, 652);
        grparama = new QGroupBox(YolcuListeFormu);
        grparama->setObjectName(QString::fromUtf8("grparama"));
        grparama->setGeometry(QRect(20, 20, 351, 80));
        gridLayout = new QGridLayout(grparama);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(grparama);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(grparama);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 0, 1, 1);

        tblyolculiste = new QTableWidget(YolcuListeFormu);
        tblyolculiste->setObjectName(QString::fromUtf8("tblyolculiste"));
        tblyolculiste->setGeometry(QRect(20, 130, 1061, 391));

        retranslateUi(YolcuListeFormu);

        QMetaObject::connectSlotsByName(YolcuListeFormu);
    } // setupUi

    void retranslateUi(QWidget *YolcuListeFormu)
    {
        YolcuListeFormu->setWindowTitle(QCoreApplication::translate("YolcuListeFormu", "Form", nullptr));
        grparama->setTitle(QCoreApplication::translate("YolcuListeFormu", "Genel Arama", nullptr));
        label->setText(QCoreApplication::translate("YolcuListeFormu", "Aramak istedi\304\237iniz bilgiyi girniz.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class YolcuListeFormu: public Ui_YolcuListeFormu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YOLCULISTEFORMU_H
