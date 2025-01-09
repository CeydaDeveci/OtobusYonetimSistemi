/********************************************************************************
** Form generated from reading UI file 'seyahatformu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEYAHATFORMU_H
#define UI_SEYAHATFORMU_H

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

class Ui_SeyahatFormu
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *lblpng;
    QLabel *lblbaslik;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QLabel *lblvarisyer;
    QLineEdit *lekalkis;
    QLabel *lblkalkisyer;
    QDateTimeEdit *dtekalkis;
    QLabel *lblkalkistarih;
    QSpacerItem *horizontalSpacer;
    QLabel *lblvaristarih;
    QDateTimeEdit *dtevaris;
    QLineEdit *levaris;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbkaydet;
    QPushButton *pbiptal;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SeyahatFormu)
    {
        if (SeyahatFormu->objectName().isEmpty())
            SeyahatFormu->setObjectName(QString::fromUtf8("SeyahatFormu"));
        SeyahatFormu->resize(685, 667);
        widget = new QWidget(SeyahatFormu);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 40, 236, 24));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lblpng = new QLabel(widget);
        lblpng->setObjectName(QString::fromUtf8("lblpng"));
        lblpng->setPixmap(QPixmap(QString::fromUtf8(":/Resimler/Seyahat.png")));

        horizontalLayout->addWidget(lblpng);

        lblbaslik = new QLabel(widget);
        lblbaslik->setObjectName(QString::fromUtf8("lblbaslik"));
        lblbaslik->setStyleSheet(QString::fromUtf8("font: 700 italic 12pt \"Segoe UI\";"));

        horizontalLayout->addWidget(lblbaslik);

        widget1 = new QWidget(SeyahatFormu);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(50, 80, 381, 211));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lblvarisyer = new QLabel(widget1);
        lblvarisyer->setObjectName(QString::fromUtf8("lblvarisyer"));
        lblvarisyer->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));

        gridLayout->addWidget(lblvarisyer, 1, 0, 1, 1);

        lekalkis = new QLineEdit(widget1);
        lekalkis->setObjectName(QString::fromUtf8("lekalkis"));

        gridLayout->addWidget(lekalkis, 0, 1, 1, 1);

        lblkalkisyer = new QLabel(widget1);
        lblkalkisyer->setObjectName(QString::fromUtf8("lblkalkisyer"));
        lblkalkisyer->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));

        gridLayout->addWidget(lblkalkisyer, 0, 0, 1, 1);

        dtekalkis = new QDateTimeEdit(widget1);
        dtekalkis->setObjectName(QString::fromUtf8("dtekalkis"));

        gridLayout->addWidget(dtekalkis, 2, 1, 1, 1);

        lblkalkistarih = new QLabel(widget1);
        lblkalkistarih->setObjectName(QString::fromUtf8("lblkalkistarih"));
        lblkalkistarih->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));

        gridLayout->addWidget(lblkalkistarih, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 0, 1, 1);

        lblvaristarih = new QLabel(widget1);
        lblvaristarih->setObjectName(QString::fromUtf8("lblvaristarih"));
        lblvaristarih->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));

        gridLayout->addWidget(lblvaristarih, 3, 0, 1, 1);

        dtevaris = new QDateTimeEdit(widget1);
        dtevaris->setObjectName(QString::fromUtf8("dtevaris"));

        gridLayout->addWidget(dtevaris, 3, 1, 1, 1);

        levaris = new QLineEdit(widget1);
        levaris->setObjectName(QString::fromUtf8("levaris"));

        gridLayout->addWidget(levaris, 1, 1, 1, 1);

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


        gridLayout->addLayout(horizontalLayout_2, 4, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 2, 5, 1);


        retranslateUi(SeyahatFormu);

        QMetaObject::connectSlotsByName(SeyahatFormu);
    } // setupUi

    void retranslateUi(QWidget *SeyahatFormu)
    {
        SeyahatFormu->setWindowTitle(QCoreApplication::translate("SeyahatFormu", "Form", nullptr));
        lblpng->setText(QString());
        lblbaslik->setText(QCoreApplication::translate("SeyahatFormu", "SEYAHAT VER\304\260 G\304\260R\304\260\305\236 S\304\260STEM\304\260", nullptr));
        lblvarisyer->setText(QCoreApplication::translate("SeyahatFormu", "VARI\305\236 YER\304\260:", nullptr));
        lblkalkisyer->setText(QCoreApplication::translate("SeyahatFormu", "KALKI\305\236 YER\304\260:", nullptr));
        lblkalkistarih->setText(QCoreApplication::translate("SeyahatFormu", "KALKI\305\236 TAR\304\260H\304\260:", nullptr));
        lblvaristarih->setText(QCoreApplication::translate("SeyahatFormu", "VARI\305\236 TAR\304\260H\304\260:", nullptr));
        pbkaydet->setText(QCoreApplication::translate("SeyahatFormu", "kaydet", nullptr));
        pbiptal->setText(QCoreApplication::translate("SeyahatFormu", "iptal", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeyahatFormu: public Ui_SeyahatFormu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEYAHATFORMU_H
