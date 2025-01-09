/********************************************************************************
** Form generated from reading UI file 'calisanformu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALISANFORMU_H
#define UI_CALISANFORMU_H

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

class Ui_CalisanFormu
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *lblresim;
    QLabel *lblbaslik;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QLabel *lbltelefon;
    QLineEdit *leheskodu;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbkaydet;
    QPushButton *pbiptal;
    QLabel *lblsoyad;
    QLabel *lbltcno;
    QLabel *lblcinsiyet;
    QLineEdit *lesoyad;
    QLineEdit *lead;
    QRadioButton *rbkadin;
    QSpacerItem *verticalSpacer_2;
    QRadioButton *rberkek;
    QLineEdit *letel;
    QLineEdit *legorevi;
    QLabel *lblgorev;
    QLabel *lblad;
    QLineEdit *letcno;
    QLabel *lblheskodu;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *CalisanFormu)
    {
        if (CalisanFormu->objectName().isEmpty())
            CalisanFormu->setObjectName(QString::fromUtf8("CalisanFormu"));
        CalisanFormu->resize(741, 676);
        layoutWidget = new QWidget(CalisanFormu);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 253, 34));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lblresim = new QLabel(layoutWidget);
        lblresim->setObjectName(QString::fromUtf8("lblresim"));
        lblresim->setPixmap(QPixmap(QString::fromUtf8(":/Resimler/Calisan.png")));

        horizontalLayout->addWidget(lblresim);

        lblbaslik = new QLabel(layoutWidget);
        lblbaslik->setObjectName(QString::fromUtf8("lblbaslik"));
        lblbaslik->setStyleSheet(QString::fromUtf8("font: 700 italic 12pt \"Segoe UI\";"));

        horizontalLayout->addWidget(lblbaslik);

        layoutWidget1 = new QWidget(CalisanFormu);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 80, 421, 341));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lbltelefon = new QLabel(layoutWidget1);
        lbltelefon->setObjectName(QString::fromUtf8("lbltelefon"));
        lbltelefon->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));

        gridLayout->addWidget(lbltelefon, 3, 0, 1, 1);

        leheskodu = new QLineEdit(layoutWidget1);
        leheskodu->setObjectName(QString::fromUtf8("leheskodu"));

        gridLayout->addWidget(leheskodu, 5, 1, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 3, 8, 1);

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


        gridLayout->addLayout(horizontalLayout_2, 7, 1, 1, 2);

        lblsoyad = new QLabel(layoutWidget1);
        lblsoyad->setObjectName(QString::fromUtf8("lblsoyad"));
        lblsoyad->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));

        gridLayout->addWidget(lblsoyad, 1, 0, 1, 1);

        lbltcno = new QLabel(layoutWidget1);
        lbltcno->setObjectName(QString::fromUtf8("lbltcno"));
        lbltcno->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));

        gridLayout->addWidget(lbltcno, 2, 0, 1, 1);

        lblcinsiyet = new QLabel(layoutWidget1);
        lblcinsiyet->setObjectName(QString::fromUtf8("lblcinsiyet"));
        lblcinsiyet->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));

        gridLayout->addWidget(lblcinsiyet, 4, 0, 1, 1);

        lesoyad = new QLineEdit(layoutWidget1);
        lesoyad->setObjectName(QString::fromUtf8("lesoyad"));

        gridLayout->addWidget(lesoyad, 1, 1, 1, 2);

        lead = new QLineEdit(layoutWidget1);
        lead->setObjectName(QString::fromUtf8("lead"));

        gridLayout->addWidget(lead, 0, 1, 1, 2);

        rbkadin = new QRadioButton(layoutWidget1);
        rbkadin->setObjectName(QString::fromUtf8("rbkadin"));

        gridLayout->addWidget(rbkadin, 4, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 7, 0, 1, 1);

        rberkek = new QRadioButton(layoutWidget1);
        rberkek->setObjectName(QString::fromUtf8("rberkek"));

        gridLayout->addWidget(rberkek, 4, 2, 1, 1);

        letel = new QLineEdit(layoutWidget1);
        letel->setObjectName(QString::fromUtf8("letel"));

        gridLayout->addWidget(letel, 3, 1, 1, 2);

        legorevi = new QLineEdit(layoutWidget1);
        legorevi->setObjectName(QString::fromUtf8("legorevi"));

        gridLayout->addWidget(legorevi, 6, 1, 1, 2);

        lblgorev = new QLabel(layoutWidget1);
        lblgorev->setObjectName(QString::fromUtf8("lblgorev"));
        lblgorev->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));

        gridLayout->addWidget(lblgorev, 6, 0, 1, 1);

        lblad = new QLabel(layoutWidget1);
        lblad->setObjectName(QString::fromUtf8("lblad"));
        lblad->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));

        gridLayout->addWidget(lblad, 0, 0, 1, 1);

        letcno = new QLineEdit(layoutWidget1);
        letcno->setObjectName(QString::fromUtf8("letcno"));

        gridLayout->addWidget(letcno, 2, 1, 1, 2);

        lblheskodu = new QLabel(layoutWidget1);
        lblheskodu->setObjectName(QString::fromUtf8("lblheskodu"));
        lblheskodu->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));

        gridLayout->addWidget(lblheskodu, 5, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 8, 0, 1, 4);


        retranslateUi(CalisanFormu);

        QMetaObject::connectSlotsByName(CalisanFormu);
    } // setupUi

    void retranslateUi(QWidget *CalisanFormu)
    {
        CalisanFormu->setWindowTitle(QCoreApplication::translate("CalisanFormu", "Form", nullptr));
        lblresim->setText(QString());
        lblbaslik->setText(QCoreApplication::translate("CalisanFormu", "\303\207ALI\305\236AN VER\304\260 G\304\260R\304\260\305\236 S\304\260STEM\304\260", nullptr));
        lbltelefon->setText(QCoreApplication::translate("CalisanFormu", "TELEFON:", nullptr));
        pbkaydet->setText(QCoreApplication::translate("CalisanFormu", "kaydet", nullptr));
        pbiptal->setText(QCoreApplication::translate("CalisanFormu", "iptal", nullptr));
        lblsoyad->setText(QCoreApplication::translate("CalisanFormu", "SOYADI:", nullptr));
        lbltcno->setText(QCoreApplication::translate("CalisanFormu", "TC NO:", nullptr));
        lblcinsiyet->setText(QCoreApplication::translate("CalisanFormu", "C\304\260NS\304\260YET:", nullptr));
        rbkadin->setText(QCoreApplication::translate("CalisanFormu", "KADIN", nullptr));
        rberkek->setText(QCoreApplication::translate("CalisanFormu", "ERKEK", nullptr));
        lblgorev->setText(QCoreApplication::translate("CalisanFormu", "G\303\226REV\304\260:", nullptr));
        lblad->setText(QCoreApplication::translate("CalisanFormu", "ADI:", nullptr));
        lblheskodu->setText(QCoreApplication::translate("CalisanFormu", "HES KODU:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalisanFormu: public Ui_CalisanFormu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALISANFORMU_H
