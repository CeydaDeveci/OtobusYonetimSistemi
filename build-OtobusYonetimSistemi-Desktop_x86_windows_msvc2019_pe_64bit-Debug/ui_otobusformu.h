/********************************************************************************
** Form generated from reading UI file 'otobusformu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OTOBUSFORMU_H
#define UI_OTOBUSFORMU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OtobusFormu
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *lblpng;
    QLabel *lblbaslik;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QLineEdit *leplaka;
    QLabel *lbloks;
    QSpinBox *sboks;
    QLineEdit *levk;
    QSpacerItem *verticalSpacer;
    QLabel *lblplaka;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbkaydet;
    QPushButton *pbiptal;
    QLabel *lblvk;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *OtobusFormu)
    {
        if (OtobusFormu->objectName().isEmpty())
            OtobusFormu->setObjectName(QString::fromUtf8("OtobusFormu"));
        OtobusFormu->resize(735, 673);
        widget = new QWidget(OtobusFormu);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 50, 249, 34));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lblpng = new QLabel(widget);
        lblpng->setObjectName(QString::fromUtf8("lblpng"));
        lblpng->setPixmap(QPixmap(QString::fromUtf8(":/Resimler/Otobus.png")));

        horizontalLayout->addWidget(lblpng);

        lblbaslik = new QLabel(widget);
        lblbaslik->setObjectName(QString::fromUtf8("lblbaslik"));
        lblbaslik->setStyleSheet(QString::fromUtf8("font: 700 italic 12pt \"Segoe UI\";"));

        horizontalLayout->addWidget(lblbaslik);

        widget1 = new QWidget(OtobusFormu);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(40, 110, 342, 138));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        leplaka = new QLineEdit(widget1);
        leplaka->setObjectName(QString::fromUtf8("leplaka"));

        gridLayout->addWidget(leplaka, 0, 1, 1, 1);

        lbloks = new QLabel(widget1);
        lbloks->setObjectName(QString::fromUtf8("lbloks"));
        lbloks->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));

        gridLayout->addWidget(lbloks, 1, 0, 1, 1);

        sboks = new QSpinBox(widget1);
        sboks->setObjectName(QString::fromUtf8("sboks"));

        gridLayout->addWidget(sboks, 1, 1, 1, 1);

        levk = new QLineEdit(widget1);
        levk->setObjectName(QString::fromUtf8("levk"));

        gridLayout->addWidget(levk, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 2, 5, 1);

        lblplaka = new QLabel(widget1);
        lblplaka->setObjectName(QString::fromUtf8("lblplaka"));
        lblplaka->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));

        gridLayout->addWidget(lblplaka, 0, 0, 1, 1);

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

        lblvk = new QLabel(widget1);
        lblvk->setObjectName(QString::fromUtf8("lblvk"));
        lblvk->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));

        gridLayout->addWidget(lblvk, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 0, 1, 1);


        retranslateUi(OtobusFormu);

        QMetaObject::connectSlotsByName(OtobusFormu);
    } // setupUi

    void retranslateUi(QWidget *OtobusFormu)
    {
        OtobusFormu->setWindowTitle(QCoreApplication::translate("OtobusFormu", "Form", nullptr));
        lblpng->setText(QString());
        lblbaslik->setText(QCoreApplication::translate("OtobusFormu", "OTOBUS VER\304\260 G\304\260R\304\260\305\236 S\304\260STEM\304\260", nullptr));
        lbloks->setText(QCoreApplication::translate("OtobusFormu", "OTOBUS KOLTUK SAYISI:", nullptr));
        lblplaka->setText(QCoreApplication::translate("OtobusFormu", "OTOBUS PLAKASI:", nullptr));
        pbkaydet->setText(QCoreApplication::translate("OtobusFormu", "kaydet", nullptr));
        pbiptal->setText(QCoreApplication::translate("OtobusFormu", "iptal", nullptr));
        lblvk->setText(QCoreApplication::translate("OtobusFormu", "VAL\304\260Z KAPAS\304\260TES\304\260:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OtobusFormu: public Ui_OtobusFormu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OTOBUSFORMU_H
