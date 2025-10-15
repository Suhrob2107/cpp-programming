
#include <iostream>
using namespace std;

class Nokta{
private: // boyle olunca disaridaki ler x'e erisemez
    int x;
public:
    int y;
    // void degerAta(int _x,int _y) // bu function
    void degerAta(int,int);
    void ekranaYaz();
    bool baslangictami();
};

void Nokta::degerAta(int _x,int _y)
{
    x = _x;
    y = _y;
}
void Nokta::ekranaYaz()
{
    cout << x << "," << y << endl;
}
bool Nokta::baslangictami(){
    return x == 0 && y == 0;
}

int main()
{
    Nokta n1;
    n1.x = 5;
    n1.y = 6;
    cout << n1.x << endl;
    cout << n1.y << endl;
    system("pause");
    return 0;
}
