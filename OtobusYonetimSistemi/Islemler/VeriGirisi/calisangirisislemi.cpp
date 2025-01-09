#include "calisangirisislemi.h"
#include <Veri/data.h>
#include <Formlar/calisanformu.h>

CalisanGirisIslemi::CalisanGirisIslemi(QObject *parent)
    : QObject{parent}
{
    _islem = new QAction;
    _islem->setText(tr("Çalışan Veri Giriş Sistemi"));
    _islem->setIcon(QIcon(":/Resimler/Calisan.png"));
    connect(_islem, &QAction::triggered, this, &CalisanGirisIslemi::main);
}


void CalisanGirisIslemi::main()
{
    auto veri = Data::yellow().calisan().yeniNesne();
    CalisanFormu *form= new CalisanFormu();
    form->setVeri(veri);
    connect(form, &CalisanFormu::veriKaydet,this,&CalisanGirisIslemi::depoEkle);

    form->setAttribute(Qt::WA_DeleteOnClose);
    form->setWindowModality(Qt::ApplicationModal);

    form->show();
}


void CalisanGirisIslemi::depoEkle() {
    CalisanFormu *frmx =
            dynamic_cast<CalisanFormu *>(sender()) ;
    auto veri=frmx->veri();
    Data::yellow().calisan().nesneEkle(veri);
    frmx->close();
}

QAction *CalisanGirisIslemi::islem(){
    return _islem;
}
