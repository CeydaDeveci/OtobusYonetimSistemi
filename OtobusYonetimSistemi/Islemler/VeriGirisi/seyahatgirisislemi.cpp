#include "seyahatgirisislemi.h"
#include <Veri/data.h>
#include <Formlar/seyahatformu.h>

SeyahatGirisIslemi::SeyahatGirisIslemi(QObject *parent)
    : QObject{parent}
{
    _islem=new QAction();
    _islem->setText(tr("Seyahat Veri Giriş Sistemi"));
    _islem->setIcon(QIcon(":/Resimler/Seyahat.png"));
    connect(_islem, &QAction::triggered, this, &SeyahatGirisIslemi::main);
}


void SeyahatGirisIslemi::main()
{
    auto veri = Data::yellow().seyahat().yeniNesne();
    SeyahatFormu *form = new SeyahatFormu();
    connect(form, &SeyahatFormu::veriKaydet,this,&SeyahatGirisIslemi::depoEkle);
    form->setVeri(veri);

    form->setAttribute(Qt::WA_DeleteOnClose);
    form->setWindowModality(Qt::ApplicationModal);

    form->show();
}
void SeyahatGirisIslemi::depoEkle() {
    SeyahatFormu *frmx =
            dynamic_cast<SeyahatFormu *>(sender()) ;
    auto veri=frmx->veri();
    Data::yellow().seyahat().nesneEkle(veri);
    frmx->close();
}

QAction *SeyahatGirisIslemi::islem()
{
    return _islem;
}
