#include "isletmegirisislemi.h"
#include <Veri/data.h>
#include <Formlar/isletmeformu.h>

IsletmeGirisIslemi::IsletmeGirisIslemi(QObject *parent)
    : QObject{parent}{

_islem=new QAction();
_islem->setText(tr("İşletme Veri Giriş Sistemi"));
_islem->setIcon(QIcon(":/Resimler/Isletme.png"));
_islem->setShortcut(QKeySequence("F2"));
connect(_islem, &QAction::triggered, this, &IsletmeGirisIslemi::main);

}


void IsletmeGirisIslemi::main() {
    auto veri = Data::yellow().isletme().yeniNesne();
    IsletmeFormu *form= new IsletmeFormu();
    connect(form, &IsletmeFormu::veriKaydet,this,&IsletmeGirisIslemi::depoEkle);
    form->setVeri(veri);

    form->setAttribute(Qt::WA_DeleteOnClose);
    form->setWindowModality(Qt::ApplicationModal);

    form->show();
}

void IsletmeGirisIslemi::depoEkle() {
    IsletmeFormu *frmx =
            dynamic_cast<IsletmeFormu *>(sender()) ;
    auto veri=frmx->veri();
    Data::yellow().isletme().nesneEkle(veri);
    frmx->close();
}

QAction *IsletmeGirisIslemi::islem(){
    return _islem;
}
