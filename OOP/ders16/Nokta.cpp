#ifndef _NOKTA_
#define _NOKTA_
#include "Nokta.h"

Nokta::Nokta() : t(0)
{
    x = 0;
    y = 0;
    z = new int(5);
    // t = 0; hatali
    cout << "Parametresiz kurucu -> " << x << " " << y << endl;
}
Nokta::Nokta(int x, int y = 8,int t = 0) : t(t)
{
    this -> x = x;
    this -> y = y;
    // this -> t = t; hatali
    cout << "Parametreli kurucu -> "<< x << " " << y << endl;
    z = new int(6);
}
Nokta::Nokta(const Nokta& n) : t(n.t)
{
    x = n.x;
    y = n.y;
    z = new int(*n.z);
    cout << "Kopyalama kurucusu -> "<< x << " " << y  << endl;
}

Nokta::~Nokta()
{
    cout << "Yikici calisti -> "<< x << " " << y << endl;
    delete z;
}


int Nokta::getX()const
{
    return x;
}
int Nokta::getY()const
{
    return y;
}
void Nokta::setX(int x)
{
    this -> x = x;
}

void Nokta::setY(int _y)
{
    if(_y>5)
        y = _y;
    else
        y = 2;
}
#endif // _NOKTA_

