/********************************************************************************
** Form generated from reading UI file 'isletmeformu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ISLETMEFORMU_H
#define UI_ISLETMEFORMU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IsletmeFormu
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *lbltelefon;
    QLineEdit *leisletmeadi;
    QLabel *lbladres;
    QLabel *lblruhsatno;
    QLineEdit *leruhsatno;
    QLabel *lblisletmeadi;
    QPlainTextEdit *pteadres;
    QLineEdit *letelefon;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbkaydet;
    QPushButton *pbiptal;
    QSpacerItem *verticalSpacer;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *lblresim;
    QLabel *lblbaslik;

    void setupUi(QWidget *IsletmeFormu)
    {
        if (IsletmeFormu->objectName().isEmpty())
            IsletmeFormu->setObjectName(QString::fromUtf8("IsletmeFormu"));
        IsletmeFormu->resize(903, 656);
        layoutWidget = new QWidget(IsletmeFormu);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 70, 471, 391));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lbltelefon = new QLabel(layoutWidget);
        lbltelefon->setObjectName(QString::fromUtf8("lbltelefon"));
        lbltelefon->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));

        gridLayout->addWidget(lbltelefon, 4, 0, 1, 1);

        leisletmeadi = new QLineEdit(layoutWidget);
        leisletmeadi->setObjectName(QString::fromUtf8("leisletmeadi"));

        gridLayout->addWidget(leisletmeadi, 0, 1, 1, 1);

        lbladres = new QLabel(layoutWidget);
        lbladres->setObjectName(QString::fromUtf8("lbladres"));
        lbladres->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));

        gridLayout->addWidget(lbladres, 3, 0, 1, 1);

        lblruhsatno = new QLabel(layoutWidget);
        lblruhsatno->setObjectName(QString::fromUtf8("lblruhsatno"));
        lblruhsatno->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));

        gridLayout->addWidget(lblruhsatno, 2, 0, 1, 1);

        leruhsatno = new QLineEdit(layoutWidget);
        leruhsatno->setObjectName(QString::fromUtf8("leruhsatno"));

        gridLayout->addWidget(leruhsatno, 2, 1, 1, 1);

        lblisletmeadi = new QLabel(layoutWidget);
        lblisletmeadi->setObjectName(QString::fromUtf8("lblisletmeadi"));
        lblisletmeadi->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));

        gridLayout->addWidget(lblisletmeadi, 0, 0, 1, 1);

        pteadres = new QPlainTextEdit(layoutWidget);
        pteadres->setObjectName(QString::fromUtf8("pteadres"));

        gridLayout->addWidget(pteadres, 3, 1, 1, 1);

        letelefon = new QLineEdit(layoutWidget);
        letelefon->setObjectName(QString::fromUtf8("letelefon"));

        gridLayout->addWidget(letelefon, 4, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 5, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pbkaydet = new QPushButton(layoutWidget);
        pbkaydet->setObjectName(QString::fromUtf8("pbkaydet"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resimler/Kaydet.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbkaydet->setIcon(icon);

        horizontalLayout_2->addWidget(pbkaydet);

        pbiptal = new QPushButton(layoutWidget);
        pbiptal->setObjectName(QString::fromUtf8("pbiptal"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resimler/Iptal.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbiptal->setIcon(icon1);

        horizontalLayout_2->addWidget(pbiptal);


        gridLayout->addLayout(horizontalLayout_2, 6, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 2, 5, 1);

        layoutWidget1 = new QWidget(IsletmeFormu);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 30, 239, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lblresim = new QLabel(layoutWidget1);
        lblresim->setObjectName(QString::fromUtf8("lblresim"));
        lblresim->setPixmap(QPixmap(QString::fromUtf8(":/Resimler/Isletme.png")));

        horizontalLayout->addWidget(lblresim);

        lblbaslik = new QLabel(layoutWidget1);
        lblbaslik->setObjectName(QString::fromUtf8("lblbaslik"));
        lblbaslik->setStyleSheet(QString::fromUtf8("font: 700 italic 12pt \"Segoe UI\";"));

        horizontalLayout->addWidget(lblbaslik);


        retranslateUi(IsletmeFormu);
        QObject::connect(pbiptal, &QPushButton::clicked, IsletmeFormu, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(IsletmeFormu);
    } // setupUi

    void retranslateUi(QWidget *IsletmeFormu)
    {
        IsletmeFormu->setWindowTitle(QCoreApplication::translate("IsletmeFormu", "Form", nullptr));
        lbltelefon->setText(QCoreApplication::translate("IsletmeFormu", "TELEFON:", nullptr));
        lbladres->setText(QCoreApplication::translate("IsletmeFormu", "ADRES:", nullptr));
        lblruhsatno->setText(QCoreApplication::translate("IsletmeFormu", "RUHSAT NUMARASI:", nullptr));
        lblisletmeadi->setText(QCoreApplication::translate("IsletmeFormu", "\304\260\305\236LETME ADI:", nullptr));
        pbkaydet->setText(QCoreApplication::translate("IsletmeFormu", "kaydet", nullptr));
        pbiptal->setText(QCoreApplication::translate("IsletmeFormu", "iptal", nullptr));
        lblresim->setText(QString());
        lblbaslik->setText(QCoreApplication::translate("IsletmeFormu", "\304\260\305\236LETME VER\304\260 G\304\260R\304\260\305\236 S\304\260STEM\304\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IsletmeFormu: public Ui_IsletmeFormu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ISLETMEFORMU_H
