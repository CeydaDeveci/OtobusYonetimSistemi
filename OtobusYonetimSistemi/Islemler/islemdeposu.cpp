#include "islemdeposu.h"
#include <Islemler/VeriGirisi/isletmegirisislemi.h>
#include <Islemler/VeriGirisi/biletgirisislemi.h>
#include <Islemler/VeriGirisi/calisangirisislemi.h>
#include <Islemler/VeriGirisi/otobusgirisislemi.h>
#include <Islemler/VeriGirisi/seyahatgirisislemi.h>
#include <Islemler/VeriGirisi/yolcugirisislemi.h>

#include <Islemler/VeriListeleme/isletmelistesiislemi.h>
#include <Islemler/VeriListeleme/biletlistesiislemi.h>
#include <Islemler/VeriListeleme/calisanlistesiislemi.h>
#include <Islemler/VeriListeleme/otobuslistesiislemi.h>
#include <Islemler/VeriListeleme/seyahatlistesiislemi.h>
#include <Islemler/VeriListeleme/yolculistesiislemi.h>


IslemDeposu &IslemDeposu::yellow()
{
static IslemDeposu red;
return red;
}

QAction *IslemDeposu::getAction(IslemSirasi x)
{

    return _islemler[x]->islem();
}

void IslemDeposu::calistir(IslemSirasi y)
{
    _islemler[y]->main();
};

IslemDeposu::IslemDeposu(QObject *parent)
    : QObject{parent} {
    _islemler.append(std::make_shared<IsletmeGirisIslemi>());
    _islemler.append(std::make_shared<OtobusGirisIslemi>());
    _islemler.append(std::make_shared<CalisanGirisIslemi>());
    _islemler.append(std::make_shared<YolcuGirisIslemi>());
    _islemler.append(std::make_shared<BiletGirisIslemi>());
    _islemler.append(std::make_shared<SeyahatGirisIslemi>());

    _islemler.append(std::make_shared<IsletmeListesiIslemi>());
    _islemler.append(std::make_shared<BiletListesiIslemi>());
    _islemler.append(std::make_shared<CalisanListesiIslemi>());
    _islemler.append(std::make_shared<OtobusListesiIslemi>());
    _islemler.append(std::make_shared<SeyahatListesiIslemi>());
    _islemler.append(std::make_shared<YolcuListesiIslemi>());

}
