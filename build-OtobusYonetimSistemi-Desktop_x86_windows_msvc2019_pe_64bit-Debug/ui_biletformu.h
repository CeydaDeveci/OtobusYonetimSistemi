/********************************************************************************
** Form generated from reading UI file 'biletformu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BILETFORMU_H
#define UI_BILETFORMU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BiletFormu
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *lblpng;
    QLabel *lblbaslik;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QLabel *lblbiletfiyati;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbkaydet;
    QPushButton *pbiptal;
    QLabel *lblsefertarihi;
    QLineEdit *lebiletfiyati;
    QLineEdit *leseferyeri;
    QLabel *lblseferyeri;
    QDateTimeEdit *dtesefertarihi;
    QLineEdit *lekoltukno;
    QLabel *lblkoltukno;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *BiletFormu)
    {
        if (BiletFormu->objectName().isEmpty())
            BiletFormu->setObjectName(QString::fromUtf8("BiletFormu"));
        BiletFormu->resize(774, 661);
        widget = new QWidget(BiletFormu);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 60, 218, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lblpng = new QLabel(widget);
        lblpng->setObjectName(QString::fromUtf8("lblpng"));
        lblpng->setPixmap(QPixmap(QString::fromUtf8(":/Resimler/Bilet.png")));

        horizontalLayout->addWidget(lblpng);

        lblbaslik = new QLabel(widget);
        lblbaslik->setObjectName(QString::fromUtf8("lblbaslik"));
        lblbaslik->setStyleSheet(QString::fromUtf8("font: 700 italic 12pt \"Segoe UI\";"));

        horizontalLayout->addWidget(lblbaslik);

        widget1 = new QWidget(BiletFormu);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(50, 130, 317, 166));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lblbiletfiyati = new QLabel(widget1);
        lblbiletfiyati->setObjectName(QString::fromUtf8("lblbiletfiyati"));
        lblbiletfiyati->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));

        gridLayout->addWidget(lblbiletfiyati, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pbkaydet = new QPushButton(widget1);
        pbkaydet->setObjectName(QString::fromUtf8("pbkaydet"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resimler/Kaydet.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbkaydet->setIcon(icon);

        horizontalLayout_2->addWidget(pbkaydet);

        pbiptal = new QPushButton(widget1);
        pbiptal->setObjectName(QString::fromUtf8("pbiptal"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resimler/Iptal.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbiptal->setIcon(icon1);

        horizontalLayout_2->addWidget(pbiptal);


        gridLayout->addLayout(horizontalLayout_2, 5, 1, 1, 1);

        lblsefertarihi = new QLabel(widget1);
        lblsefertarihi->setObjectName(QString::fromUtf8("lblsefertarihi"));
        lblsefertarihi->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));

        gridLayout->addWidget(lblsefertarihi, 3, 0, 1, 1);

        lebiletfiyati = new QLineEdit(widget1);
        lebiletfiyati->setObjectName(QString::fromUtf8("lebiletfiyati"));

        gridLayout->addWidget(lebiletfiyati, 0, 1, 1, 1);

        leseferyeri = new QLineEdit(widget1);
        leseferyeri->setObjectName(QString::fromUtf8("leseferyeri"));

        gridLayout->addWidget(leseferyeri, 2, 1, 1, 1);

        lblseferyeri = new QLabel(widget1);
        lblseferyeri->setObjectName(QString::fromUtf8("lblseferyeri"));
        lblseferyeri->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));

        gridLayout->addWidget(lblseferyeri, 2, 0, 1, 1);

        dtesefertarihi = new QDateTimeEdit(widget1);
        dtesefertarihi->setObjectName(QString::fromUtf8("dtesefertarihi"));

        gridLayout->addWidget(dtesefertarihi, 3, 1, 1, 1);

        lekoltukno = new QLineEdit(widget1);
        lekoltukno->setObjectName(QString::fromUtf8("lekoltukno"));

        gridLayout->addWidget(lekoltukno, 1, 1, 1, 1);

        lblkoltukno = new QLabel(widget1);
        lblkoltukno->setObjectName(QString::fromUtf8("lblkoltukno"));
        lblkoltukno->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));

        gridLayout->addWidget(lblkoltukno, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 2, 6, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 0, 1, 2);


        retranslateUi(BiletFormu);

        QMetaObject::connectSlotsByName(BiletFormu);
    } // setupUi

    void retranslateUi(QWidget *BiletFormu)
    {
        BiletFormu->setWindowTitle(QCoreApplication::translate("BiletFormu", "Form", nullptr));
        lblpng->setText(QString());
        lblbaslik->setText(QCoreApplication::translate("BiletFormu", "B\304\260LET VER\304\260 G\304\260R\304\260\305\236 S\304\260STEM\304\260", nullptr));
        lblbiletfiyati->setText(QCoreApplication::translate("BiletFormu", "B\304\260LET F\304\260YATI:", nullptr));
        pbkaydet->setText(QCoreApplication::translate("BiletFormu", "kaydet", nullptr));
        pbiptal->setText(QCoreApplication::translate("BiletFormu", "iptal", nullptr));
        lblsefertarihi->setText(QCoreApplication::translate("BiletFormu", "SEFER TAR\304\260H\304\260:", nullptr));
        lblseferyeri->setText(QCoreApplication::translate("BiletFormu", "SEFER YER\304\260:", nullptr));
        lblkoltukno->setText(QCoreApplication::translate("BiletFormu", "KOLTUK NUMARASI:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BiletFormu: public Ui_BiletFormu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BILETFORMU_H
