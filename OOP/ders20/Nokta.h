#ifndef _NOKTA_H_
#define _NOKTA_H_
#include <math.h>
class Nokta{
private:
    int x;
    int y;
public:
    Nokta();
    Nokta(int,int);
    Nokta(const Nokta&);
    ~Nokta();

    int getX()const;
    int getY()const;
    static int getI();

    void setX(int);
    void setY(int);

    Nokta topla(const Nokta&)const;

    static void setI(int);

    double uzaklikHesapla(const Nokta&)const;

    void ekranaYaz()const;

    bool baslangictaMi();
};
#include "Nokta.cpp"
#endif // _NOKTA_H_
