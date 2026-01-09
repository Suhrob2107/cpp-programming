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

    int getX()const;
    int getY()const;

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
int main()
{
    Nokta n1(1,10,10);
    const Nokta n2(2,25,100);

    cout << n1.getX() << " " << n1.getY() << endl;
    n1.setX(500);
    cout << n1.getX() << " " << n1.getY() << endl;
    // n2.setX(0);
    // cout << n2.getX() << " " << n2.getX() << endl;
    return 0;
}

