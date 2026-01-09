#include <iostream>
using namespace std;
class Nokta{
private:
    int x;
    int y;
public:
    const int t; // sadece okunabilir
    int* z;
    Nokta();
    Nokta(int,int,int);
    ~Nokta();

    int getX();
    int getY();

    void setX(int);
    void setY(int);

    void ekranaYaz();

    bool baslangictaMi();
};


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
Nokta::~Nokta()
{
    cout << "Yikici calisti -> "<< x << " " << y << endl;
    delete z;
}


int Nokta::getX()
{
    return x;
}
int Nokta::getY()
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
int main()
{
    Nokta n1(1,10,10);
    Nokta n2(2,25,100);
    cout << n1.t << endl;
    cout << n2.t << endl;
    return 0;
}