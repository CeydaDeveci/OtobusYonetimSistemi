#ifndef TEMELKULLANICIISLEMI_H
#define TEMELKULLANICIISLEMI_H

#include <QAction>

class TemelKullaniciIslemi {
public:
    virtual void main()=0;
    virtual QAction *islem()=0;

};

#endif // TEMELKULLANICIISLEMI_H
