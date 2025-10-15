#include <iostream>
using namespace std;

class Nokta{
public:
    int x,y;
    void degerAta(int _x,int _y) // bu function
    {
        x = _x;
        y = _y;
    }
    void ekranaYaz()
    {
        cout << x << "," << y << endl;
    }
    bool baslangictami()
    {
        if(x == 0 && y == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    Nokta n1;
    Nokta n2;

    Nokta* n3; //Pointer cinsinden olusturduk
    n3 = &n2; //n2 degerleri n3 e yansittik her halde

    Nokta* n4;
    n4 = new Nokta();

    Nokta array[10];

    Nokta* pArray;
    pArray = new Nokta[10];

    for(int i=0;i<10;i++)
    {
        array[i].degerAta(i,i+2);
        (pArray + sizeof(Nokta) * i)->degerAta(i+5,i+10);
        cout << endl;
    }
    for(int i = 0;i < 10;i++)
    {
        array[i].ekranaYaz();
        (pArray + sizeof(Nokta) * i)->ekranaYaz();
        cout << endl;
    }

//    n.x = 0;
//    n.y = 5;

//    cout << n.x << "," << n.y << endl;

    n1.degerAta(5,4);
    n1.ekranaYaz();

    n2.degerAta(1,0);
    n2.ekranaYaz();

    if(n1.baslangictami())
        cout << "n1 baslangic noktasinda" << endl;

    if(n2.baslangictami())
        cout << "n2 baslangic noktasinda" << endl;

    cout << "n3 pointer ile yazilan degerler" << endl;
    n3 ->ekranaYaz();

    n4 ->degerAta(100,500);
    n4 ->ekranaYaz();

    system("pause");
    return 0;
}
