/********************************************************************************
** Form generated from reading UI file 'yolcuformu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YOLCUFORMU_H
#define UI_YOLCUFORMU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_YolcuFormu
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *lblresim;
    QLabel *lblbaslik;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbkaydet;
    QPushButton *pbiptal;
    QLabel *lblad;
    QLineEdit *leheskodu;
    QLineEdit *lesoyad;
    QRadioButton *rberkek;
    QLabel *lblbiletno;
    QRadioButton *rbkadin;
    QLabel *lbltcno;
    QLineEdit *lebiletno;
    QLabel *lblsoyad;
    QLineEdit *lead;
    QLabel *lblcinsiyet;
    QLineEdit *letcno;
    QLabel *lblheskodu;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *YolcuFormu)
    {
        if (YolcuFormu->objectName().isEmpty())
            YolcuFormu->setObjectName(QString::fromUtf8("YolcuFormu"));
        YolcuFormu->resize(816, 668);
        layoutWidget = new QWidget(YolcuFormu);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 20, 234, 34));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lblresim = new QLabel(layoutWidget);
        lblresim->setObjectName(QString::fromUtf8("lblresim"));
        lblresim->setPixmap(QPixmap(QString::fromUtf8(":/Resimler/Yolcu.png")));

        horizontalLayout->addWidget(lblresim);

        lblbaslik = new QLabel(layoutWidget);
        lblbaslik->setObjectName(QString::fromUtf8("lblbaslik"));
        lblbaslik->setStyleSheet(QString::fromUtf8("font: 700 italic 12pt \"Segoe UI\";"));

        horizontalLayout->addWidget(lblbaslik);

        layoutWidget1 = new QWidget(YolcuFormu);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 70, 321, 246));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 3, 7, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pbkaydet = new QPushButton(layoutWidget1);
        pbkaydet->setObjectName(QString::fromUtf8("pbkaydet"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resimler/Kaydet.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbkaydet->setIcon(icon);

        horizontalLayout_2->addWidget(pbkaydet);

        pbiptal = new QPushButton(layoutWidget1);
        pbiptal->setObjectName(QString::fromUtf8("pbiptal"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resimler/Iptal.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbiptal->setIcon(icon1);

        horizontalLayout_2->addWidget(pbiptal);


        gridLayout->addLayout(horizontalLayout_2, 6, 1, 1, 2);

        lblad = new QLabel(layoutWidget1);
        lblad->setObjectName(QString::fromUtf8("lblad"));
        lblad->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));

        gridLayout->addWidget(lblad, 0, 0, 1, 1);

        leheskodu = new QLineEdit(layoutWidget1);
        leheskodu->setObjectName(QString::fromUtf8("leheskodu"));

        gridLayout->addWidget(leheskodu, 4, 1, 1, 2);

        lesoyad = new QLineEdit(layoutWidget1);
        lesoyad->setObjectName(QString::fromUtf8("lesoyad"));

        gridLayout->addWidget(lesoyad, 1, 1, 1, 2);

        rberkek = new QRadioButton(layoutWidget1);
        rberkek->setObjectName(QString::fromUtf8("rberkek"));

        gridLayout->addWidget(rberkek, 2, 2, 1, 1);

        lblbiletno = new QLabel(layoutWidget1);
        lblbiletno->setObjectName(QString::fromUtf8("lblbiletno"));
        lblbiletno->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));

        gridLayout->addWidget(lblbiletno, 5, 0, 1, 1);

        rbkadin = new QRadioButton(layoutWidget1);
        rbkadin->setObjectName(QString::fromUtf8("rbkadin"));

        gridLayout->addWidget(rbkadin, 2, 1, 1, 1);

        lbltcno = new QLabel(layoutWidget1);
        lbltcno->setObjectName(QString::fromUtf8("lbltcno"));
        lbltcno->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));

        gridLayout->addWidget(lbltcno, 3, 0, 1, 1);

        lebiletno = new QLineEdit(layoutWidget1);
        lebiletno->setObjectName(QString::fromUtf8("lebiletno"));

        gridLayout->addWidget(lebiletno, 5, 1, 1, 2);

        lblsoyad = new QLabel(layoutWidget1);
        lblsoyad->setObjectName(QString::fromUtf8("lblsoyad"));
        lblsoyad->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));

        gridLayout->addWidget(lblsoyad, 1, 0, 1, 1);

        lead = new QLineEdit(layoutWidget1);
        lead->setObjectName(QString::fromUtf8("lead"));

        gridLayout->addWidget(lead, 0, 1, 1, 2);

        lblcinsiyet = new QLabel(layoutWidget1);
        lblcinsiyet->setObjectName(QString::fromUtf8("lblcinsiyet"));
        lblcinsiyet->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));

        gridLayout->addWidget(lblcinsiyet, 2, 0, 1, 1);

        letcno = new QLineEdit(layoutWidget1);
        letcno->setObjectName(QString::fromUtf8("letcno"));

        gridLayout->addWidget(letcno, 3, 1, 1, 2);

        lblheskodu = new QLabel(layoutWidget1);
        lblheskodu->setObjectName(QString::fromUtf8("lblheskodu"));
        lblheskodu->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));

        gridLayout->addWidget(lblheskodu, 4, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 6, 0, 1, 1);


        retranslateUi(YolcuFormu);

        QMetaObject::connectSlotsByName(YolcuFormu);
    } // setupUi

    void retranslateUi(QWidget *YolcuFormu)
    {
        YolcuFormu->setWindowTitle(QCoreApplication::translate("YolcuFormu", "Form", nullptr));
        lblresim->setText(QString());
        lblbaslik->setText(QCoreApplication::translate("YolcuFormu", "YOLCU VER\304\260 G\304\260R\304\260\305\236 FORMU", nullptr));
        pbkaydet->setText(QCoreApplication::translate("YolcuFormu", "kaydet", nullptr));
        pbiptal->setText(QCoreApplication::translate("YolcuFormu", "iptal", nullptr));
        lblad->setText(QCoreApplication::translate("YolcuFormu", "ADI:", nullptr));
        rberkek->setText(QCoreApplication::translate("YolcuFormu", "ERKEK", nullptr));
        lblbiletno->setText(QCoreApplication::translate("YolcuFormu", "B\304\260LET NO:", nullptr));
        rbkadin->setText(QCoreApplication::translate("YolcuFormu", "KADIN", nullptr));
        lbltcno->setText(QCoreApplication::translate("YolcuFormu", "TC NO:", nullptr));
        lblsoyad->setText(QCoreApplication::translate("YolcuFormu", "SOYADI:", nullptr));
        lblcinsiyet->setText(QCoreApplication::translate("YolcuFormu", "C\304\260NS\304\260YET:", nullptr));
        lblheskodu->setText(QCoreApplication::translate("YolcuFormu", "HES KODU:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class YolcuFormu: public Ui_YolcuFormu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YOLCUFORMU_H
