QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Formlar/ListeFormlari/biletlisteformu.cpp \
    Formlar/ListeFormlari/calisanlisteformu.cpp \
    Formlar/ListeFormlari/isletmelisteformu.cpp \
    Formlar/ListeFormlari/otobuslisteformu.cpp \
    Formlar/ListeFormlari/seyahatlisteformu.cpp \
    Formlar/ListeFormlari/yolculisteformu.cpp \
    Formlar/biletformu.cpp \
    Formlar/calisanformu.cpp \
    Formlar/isletmeformu.cpp \
    Formlar/otobusformu.cpp \
    Formlar/seyahatformu.cpp \
    Formlar/yolcuformu.cpp \
    Islemler/VeriGirisi/biletgirisislemi.cpp \
    Islemler/VeriGirisi/calisangirisislemi.cpp \
    Islemler/VeriGirisi/isletmegirisislemi.cpp \
    Islemler/VeriGirisi/otobusgirisislemi.cpp \
    Islemler/VeriGirisi/seyahatgirisislemi.cpp \
    Islemler/VeriGirisi/yolcugirisislemi.cpp \
    Islemler/VeriListeleme/biletlistesiislemi.cpp \
    Islemler/VeriListeleme/calisanlistesiislemi.cpp \
    Islemler/VeriListeleme/isletmelistesiislemi.cpp \
    Islemler/VeriListeleme/otobuslistesiislemi.cpp \
    Islemler/VeriListeleme/seyahatlistesiislemi.cpp \
    Islemler/VeriListeleme/yolculistesiislemi.cpp \
    Islemler/islemdeposu.cpp \
    Veri/Ayarlar/ayarlar.cpp \
    Veri/VeriDepolari/biletbsdeposu.cpp \
    Veri/VeriDepolari/calisanbsdeposu.cpp \
    Veri/VeriDepolari/isletmebsdeposu.cpp \
    Veri/VeriDepolari/otobusbsdeposu.cpp \
    Veri/VeriDepolari/seyahatbsdeposu.cpp \
    Veri/VeriDepolari/yolcubsdeposu.cpp \
    Veri/VeriSiniflari/biletbs.cpp \
    Veri/VeriSiniflari/calisanbs.cpp \
    Veri/VeriSiniflari/insan.cpp \
    Veri/VeriSiniflari/isletmebs.cpp \
    Veri/VeriSiniflari/otobusbs.cpp \
    Veri/VeriSiniflari/seyahatbs.cpp \
    Veri/VeriSiniflari/temelverisinifi.cpp \
    Veri/VeriSiniflari/yolcubs.cpp \
    Veri/data.cpp \
    main.cpp \
    otobusyonetimsistemi.cpp

HEADERS += \
    Formlar/ListeFormlari/biletlisteformu.h \
    Formlar/ListeFormlari/calisanlisteformu.h \
    Formlar/ListeFormlari/isletmelisteformu.h \
    Formlar/ListeFormlari/otobuslisteformu.h \
    Formlar/ListeFormlari/seyahatlisteformu.h \
    Formlar/ListeFormlari/yolculisteformu.h \
    Formlar/TemelVeriFormu.h \
    Formlar/biletformu.h \
    Formlar/calisanformu.h \
    Formlar/isletmeformu.h \
    Formlar/otobusformu.h \
    Formlar/seyahatformu.h \
    Formlar/yolcuformu.h \
    Islemler/TemelKullaniciIslemi.h \
    Islemler/VeriGirisi/biletgirisislemi.h \
    Islemler/VeriGirisi/calisangirisislemi.h \
    Islemler/VeriGirisi/isletmegirisislemi.h \
    Islemler/VeriGirisi/otobusgirisislemi.h \
    Islemler/VeriGirisi/seyahatgirisislemi.h \
    Islemler/VeriGirisi/yolcugirisislemi.h \
    Islemler/VeriListeleme/biletlistesiislemi.h \
    Islemler/VeriListeleme/calisanlistesiislemi.h \
    Islemler/VeriListeleme/isletmelistesiislemi.h \
    Islemler/VeriListeleme/otobuslistesiislemi.h \
    Islemler/VeriListeleme/seyahatlistesiislemi.h \
    Islemler/VeriListeleme/yolculistesiislemi.h \
    Islemler/islemdeposu.h \
    Veri/Ayarlar/ayarlar.h \
    Veri/VeriDepolari/TemelVeriDeposu.h \
    Veri/VeriDepolari/biletbsdeposu.h \
    Veri/VeriDepolari/calisanbsdeposu.h \
    Veri/VeriDepolari/isletmebsdeposu.h \
    Veri/VeriDepolari/otobusbsdeposu.h \
    Veri/VeriDepolari/seyahatbsdeposu.h \
    Veri/VeriDepolari/yolcubsdeposu.h \
    Veri/VeriSiniflari/biletbs.h \
    Veri/VeriSiniflari/calisanbs.h \
    Veri/VeriSiniflari/insan.h \
    Veri/VeriSiniflari/isletmebs.h \
    Veri/VeriSiniflari/otobusbs.h \
    Veri/VeriSiniflari/seyahatbs.h \
    Veri/VeriSiniflari/temelverisinifi.h \
    Veri/VeriSiniflari/yolcubs.h \
    Veri/data.h \
    Veri/tanimlar.h \
    otobusyonetimsistemi.h

FORMS += \
    Formlar/ListeFormlari/biletlisteformu.ui \
    Formlar/ListeFormlari/calisanlisteformu.ui \
    Formlar/ListeFormlari/isletmelisteformu.ui \
    Formlar/ListeFormlari/otobuslisteformu.ui \
    Formlar/ListeFormlari/seyahatlisteformu.ui \
    Formlar/ListeFormlari/yolculisteformu.ui \
    Formlar/biletformu.ui \
    Formlar/calisanformu.ui \
    Formlar/isletmeformu.ui \
    Formlar/otobusformu.ui \
    Formlar/seyahatformu.ui \
    Formlar/yolcuformu.ui \
    otobusyonetimsistemi.ui

TRANSLATIONS += \
    OtobusYonetimSistemi_tr_TR.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Kaynaklar.qrc
