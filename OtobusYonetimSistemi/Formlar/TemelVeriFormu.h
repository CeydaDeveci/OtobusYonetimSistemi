#ifndef TEMELVERIFORMU_H
#define TEMELVERIFORMU_H

#include<Veri/tanimlar.h>

template <class Ptr>

class TemelVeriFormu {
protected:
    Ptr _veri;
public:
    Ptr veri() {
        veriGuncelle();
        return _veri;
    }

    void setVeri(Ptr k) {
        _veri = k;
        ekranGuncelle();
    }

    virtual void ekranGuncelle() = 0;

    virtual void veriGuncelle() = 0;
};

#endif // TEMELVERIFORMU_H
