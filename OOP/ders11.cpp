#include <iostream>
using namespace std;
class Nokta{
private:
    int x;
    int y;
public:
    Nokta();
    Nokta(int,int);

    int getX();
    int getY();

    void setX(int);
    void setY(int);

    void ekranaYaz();

    bool baslangictaMi();
};
Nokta::Nokta()
{
    cout << "Parametresiz kurucu" << endl;
    x = 0;
    y = 0;
}
Nokta::Nokta(int x, int y = 8)
{
    cout << "Parametreli kurucu" << endl;
    this -> x = x;
    this -> y = y;
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
    // Nokta dizi[5];
    Nokta dizi[5] = {{1,2},{1},{2,3}}; // 3 tane parametreli kurucu 2 tane parametresiz kurucu
    for(int i = 0;i < 5;i++)
        cout << dizi[i].getX() << " " << dizi[i].getY() << endl;
    Nokta* ptr = new Nokta(2,7); // kurucu tipii gosterir
    return 0;
}




















