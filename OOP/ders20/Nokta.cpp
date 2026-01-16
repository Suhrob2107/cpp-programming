#ifndef _NOKTA_
#define _NOKTA_
#include "Nokta.h"

Nokta::Nokta()
{
    x = 0;
    y = 0;
}
Nokta::Nokta(int x, int y = 8)
{
    this -> x = x;
    this -> y = y;
}
Nokta::Nokta(const Nokta& n)
{
    x = n.x;
    y = n.y;
}

Nokta::~Nokta()
{

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
    this -> y = y;
}

Nokta Nokta::topla(const Nokta& n)const
{
    int x = this -> x + n.x;
    int y = this -> y + n.y;
    return Nokta(x,y);
}

double Nokta::uzaklikHesapla(const Nokta& n)const
{
    int xU = pow(n.getX() - x,2);
    int yU = pow(n.getY() - y,2);
    return sqrt(xU + yU);
}
void Nokta::ekranaYaz()const
{
    cout << x << "," << y << endl;
}


bool Nokta::baslangictaMi()
{
    return x ==0 && y == 0;
}

#endif // _NOKTA_

