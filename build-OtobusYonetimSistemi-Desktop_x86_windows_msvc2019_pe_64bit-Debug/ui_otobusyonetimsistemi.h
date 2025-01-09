/********************************************************************************
** Form generated from reading UI file 'otobusyonetimsistemi.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OTOBUSYONETIMSISTEMI_H
#define UI_OTOBUSYONETIMSISTEMI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OtobusYonetimSistemi
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuVeri_Giri_lemler;
    QStatusBar *statusbar;
    QToolBar *verigiristoolbar;

    void setupUi(QMainWindow *OtobusYonetimSistemi)
    {
        if (OtobusYonetimSistemi->objectName().isEmpty())
            OtobusYonetimSistemi->setObjectName(QString::fromUtf8("OtobusYonetimSistemi"));
        OtobusYonetimSistemi->resize(800, 600);
        centralwidget = new QWidget(OtobusYonetimSistemi);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        OtobusYonetimSistemi->setCentralWidget(centralwidget);
        menubar = new QMenuBar(OtobusYonetimSistemi);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuVeri_Giri_lemler = new QMenu(menubar);
        menuVeri_Giri_lemler->setObjectName(QString::fromUtf8("menuVeri_Giri_lemler"));
        OtobusYonetimSistemi->setMenuBar(menubar);
        statusbar = new QStatusBar(OtobusYonetimSistemi);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        OtobusYonetimSistemi->setStatusBar(statusbar);
        verigiristoolbar = new QToolBar(OtobusYonetimSistemi);
        verigiristoolbar->setObjectName(QString::fromUtf8("verigiristoolbar"));
        OtobusYonetimSistemi->addToolBar(Qt::TopToolBarArea, verigiristoolbar);

        menubar->addAction(menuVeri_Giri_lemler->menuAction());
        menuVeri_Giri_lemler->addSeparator();

        retranslateUi(OtobusYonetimSistemi);

        QMetaObject::connectSlotsByName(OtobusYonetimSistemi);
    } // setupUi

    void retranslateUi(QMainWindow *OtobusYonetimSistemi)
    {
        OtobusYonetimSistemi->setWindowTitle(QCoreApplication::translate("OtobusYonetimSistemi", "OtobusYonetimSistemi", nullptr));
        menuVeri_Giri_lemler->setTitle(QCoreApplication::translate("OtobusYonetimSistemi", "Veri Giri\305\237 \304\260\305\237lemleri", nullptr));
        verigiristoolbar->setWindowTitle(QCoreApplication::translate("OtobusYonetimSistemi", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OtobusYonetimSistemi: public Ui_OtobusYonetimSistemi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OTOBUSYONETIMSISTEMI_H
