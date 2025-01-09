#include "yolcugirisislemi.h"
#include <Veri/data.h>
#include <Formlar/yolcuformu.h>

YolcuGirisIslemi::YolcuGirisIslemi(QObject *parent)
    : QObject{parent}
{
_islem=new QAction();
_islem->setText(tr("Yolcu Veri Giriş Sistemi"));
_islem->setIcon(QIcon(":/Resimler/Yolcu.png"));
connect(_islem, &QAction::triggered, this, &YolcuGirisIslemi::main);

}

void YolcuGirisIslemi::main()
{
    auto veri = Data::yellow().yolcu().yeniNesne();
    YolcuFormu *form = new YolcuFormu();
    connect(form, &YolcuFormu::veriKaydet,this,&YolcuGirisIslemi::depoEkle);
    form->setVeri(veri);

    form->setAttribute(Qt::WA_DeleteOnClose);
    form->setWindowModality(Qt::ApplicationModal);

    form->show();
}
void YolcuGirisIslemi::depoEkle() {
    YolcuFormu *frmx =
            dynamic_cast<YolcuFormu *>(sender()) ;
    auto veri=frmx->veri();
    Data::yellow().yolcu().nesneEkle(veri);
    frmx->close();
}
QAction *YolcuGirisIslemi::islem()
{
    return _islem;
}


