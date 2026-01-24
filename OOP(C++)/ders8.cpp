#include <iostream>
using namespace std;
//void olunca griye deger dondurmez
class Nokta{
    private:
        int x;
        int y;
    public:

    int getX(); // fonksiyon oldugunu belirtmemiz icin () koyuyoruz donus degeri int olacak
    int getY();

    void setX(int);
    void setY(int);

    void ekranaYaz();
    bool baslangictami();

};

int Nokta::getX()
{
    return x;
}

int Nokta::getY()
{
    return y;
}

void Nokta::setX(int _x)
{
    x = _x;
}
void Nokta::setY(int _y)
{
    if(_y < 5)
        y = _y;
    else
        y = 3;
}


void Nokta::ekranaYaz() // :: skop operatorudur
{
    cout << x << "," << y << endl;
}

bool Nokta::baslangictami()
{
    return x ==0 && y == 0;
}


int main()
{
    Nokta n1;
    n1.setX(11);
    n1.setY(12);
    cout << n1.getX() << " " << n1.getY() << endl;


    return 0;
}

