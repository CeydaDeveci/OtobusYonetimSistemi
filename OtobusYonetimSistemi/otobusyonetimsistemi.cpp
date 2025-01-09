#include "otobusyonetimsistemi.h"
#include "ui_otobusyonetimsistemi.h"

#include <Islemler/islemdeposu.h>

OtobusYonetimSistemi::OtobusYonetimSistemi(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::OtobusYonetimSistemi)
{
    ui->setupUi(this);

    ui->menuVeri_Giri_lemler->addAction(IslemDeposu::yellow().getAction(IslemDeposu::IslemIsletmeGiris));
    ui->menuVeri_Giri_lemler->addAction(IslemDeposu::yellow().getAction(IslemDeposu::IslemBiletGiris));
    ui->menuVeri_Giri_lemler->addAction(IslemDeposu::yellow().getAction(IslemDeposu::IslemCalisanGiris));
    ui->menuVeri_Giri_lemler->addAction(IslemDeposu::yellow().getAction(IslemDeposu::IslemOtobusGiris));
    ui->menuVeri_Giri_lemler->addAction(IslemDeposu::yellow().getAction(IslemDeposu::IslemYolcuGiris));
    ui->menuVeri_Giri_lemler->addAction(IslemDeposu::yellow().getAction(IslemDeposu::IslemSeyahatGiris));


    ui->verigiristoolbar->addAction(
                IslemDeposu::yellow().getAction(IslemDeposu::IslemIsletmeGiris));
    ui->verigiristoolbar->addAction(
                IslemDeposu::yellow().getAction(IslemDeposu::IslemBiletGiris));
    ui->verigiristoolbar->addAction(
                IslemDeposu::yellow().getAction(IslemDeposu::IslemCalisanGiris));
    ui->verigiristoolbar->addAction(
                IslemDeposu::yellow().getAction(IslemDeposu::IslemOtobusGiris));
    ui->verigiristoolbar->addAction(
                IslemDeposu::yellow().getAction(IslemDeposu::IslemYolcuGiris));
    ui->verigiristoolbar->addAction(
                IslemDeposu::yellow().getAction(IslemDeposu::IslemSeyahatGiris));

    ui->menuVeri_Giri_lemler->addAction(
                IslemDeposu::yellow().getAction(IslemDeposu::IslemIsletmeListesi));
    ui->menuVeri_Giri_lemler->addAction(
                IslemDeposu::yellow().getAction(IslemDeposu::IslemBiletListesi));
    ui->menuVeri_Giri_lemler->addAction(
                IslemDeposu::yellow().getAction(IslemDeposu::IslemCalisanListesi));
    ui->menuVeri_Giri_lemler->addAction(
                IslemDeposu::yellow().getAction(IslemDeposu::IslemOtobusListesi));
    ui->menuVeri_Giri_lemler->addAction(
                IslemDeposu::yellow().getAction(IslemDeposu::IslemYolcuListesi));
    ui->menuVeri_Giri_lemler->addAction(
                IslemDeposu::yellow().getAction(IslemDeposu::IslemSeyahatListesi));

}

OtobusYonetimSistemi::~OtobusYonetimSistemi()
{
    delete ui;
}

