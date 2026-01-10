#ifndef _NOKTA_H_
#define _NOKTA_H_
class Nokta{
private:
    int x;
    int y;
    static int i;
public:
    const int t; // sadece okunabilir
    int* z;
    Nokta();
    Nokta(int,int,int);
    Nokta(const Nokta&);
    ~Nokta();

    int getX()const;
    int getY()const;
    static int getI();

    void setX(int);
    void setY(int);
    static void setI(int);

    void ekranaYaz();

    bool baslangictaMi();
};
#include "Nokta.cpp"
#endif // _NOKTA_H_
