#include "otobusgirisislemi.h"
#include <Veri/data.h>
#include <Formlar/otobusformu.h>

OtobusGirisIslemi::OtobusGirisIslemi(QObject *parent)
    : QObject{parent}
{
_islem=new QAction();
_islem->setText(tr("Otobüs Veri Giriş Sistemi"));
_islem->setIcon(QIcon(":/Resimler/Otobus.png"));
connect(_islem, &QAction::triggered, this, &OtobusGirisIslemi::main);
}


void OtobusGirisIslemi::main()
{
    auto veri = Data::yellow().otobus().yeniNesne();
    OtobusFormu *form = new OtobusFormu();
    connect(form, &OtobusFormu::veriKaydet,this,&OtobusGirisIslemi::depoEkle);
    form->setVeri(veri);

    form->setAttribute(Qt::WA_DeleteOnClose);
    form->setWindowModality(Qt::ApplicationModal);


    form->show();
}

void OtobusGirisIslemi::depoEkle() {
    OtobusFormu *frmx =
            dynamic_cast<OtobusFormu *>(sender()) ;
    auto veri=frmx->veri();
    Data::yellow().otobus().nesneEkle(veri);
    frmx->close();
}

QAction *OtobusGirisIslemi::islem()
{
    return _islem;
}
