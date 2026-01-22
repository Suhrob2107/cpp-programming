#include <iostream> //ders isim uzaylari
using namespace std;

// int x = 3; // global degisken

namespace programci1 // isim uzayi her kullanici ayri ayri isim ile ayni degisken kullanrabilir
{
    int x = 15;
    void Boo()
    {
        int x = 7;
        cout << x << endl;
    }
}
namespace programci2
{
    int x = 20;
    void Foo() //yerel degisken fonksiyon
    {
        int x = 5;
        cout << x << endl;
    }
}





int main()
{
    //int x = 10; // iki tane x degisken tanimlamayoruz
    //cout << x << endl;

    //Foo();

    cout << programci1::x << endl;
    cout << programci2::x << endl;
    programci1::Boo();
    programci2::Foo();


    return 0;
}

