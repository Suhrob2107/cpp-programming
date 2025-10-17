#include <iostream>  // Giriş/çıkış işlemleri için iostream kütüphanesini ekliyoruz
using namespace std; // std namespace'ini kullanarak kod yazmayı kolaylaştırıyoruz

// Nokta sınıfı tanımı
class Nokta
{
private:
    int x; // x koordinatını tutan private üye değişken
    int y; // y koordinatını tutan private üye değişken

public:
    Nokta(); // Parametresiz kurucu fonksiyon bildirimi
    Nokta(int,int); // Parametreli kurucu fonksiyon bildirimi (ikinci parametre varsayılan değer alacak)

    int getX(); // x değerini döndüren getter fonksiyon bildirimi
    int getY(); // y değerini döndüren getter fonksiyon bildirimi

    void setX(int); // x değerini ayarlayan setter fonksiyon bildirimi
    void setY(int); // y değerini ayarlayan setter fonksiyon bildirimi
};

// x değerini döndüren getter fonksiyon tanımı
int Nokta::getX()
{
    return x; // private x değişkenini döndürür
}

// y değerini döndüren getter fonksiyon tanımı
int Nokta::getY()
{
    return y; // private y değişkenini döndürür
}

// x değerini ayarlayan setter fonksiyon tanımı
void Nokta::setX(int x)
{
    this->x = x; // this pointer kullanarak parametre ile üye değişkeni ayırt ediyoruz
}

// y değerini ayarlayan setter fonksiyon tanımı
void Nokta::setY(int _y)
{
    if(_y > 5) // Eğer verilen değer 5'ten büyükse
        y = _y; // y değerini parametre olarak ayarla
    else        // Değilse
        y = 2;  // y değerini 2 olarak ayarla (varsayılan değer)
}

// Parametreli kurucu fonksiyon tanımı (y parametresi varsayılan değer 8 alır)
Nokta::Nokta(int x,int y = 8) // eger x'e deger vermezsek var olan deger yok oldugu icin hata verir
{
    cout << "Parametreli kurucu " << endl; // Kurucunun çağrıldığını belirten mesaj
    this->x = x; // Parametre olarak gelen x değerini üye değişkene ata
    this->y = y; // Parametre olarak gelen y değerini üye değişkene ata
}

// Parametresiz kurucu fonksiyon tanımı
Nokta::Nokta()
{
    cout << "Parametresiz kurucu" << endl; // Kurucunun çağrıldığını belirten mesaj
    x = 0; // x değerini 0 olarak başlat
    y = 0; // y değerini 0 olarak başlat
}

// Ana fonksiyon
int main()
{
    //Nokta dizi[5]; // boyle olursa be kere parametresiz kurucu dondurur

    // Nokta nesnelerinden oluşan dizi oluşturma
    Nokta dizi[5] = {{1,2},{3},{4,5}}; // 3 tane parametreli 2 tane parametresiz kurucu olacak.
    // {1,2} -> Parametreli kurucu (x=1, y=2)
    // {3}   -> Parametreli kurucu (x=3, y=8 [varsayılan])
    // {4,5} -> Parametreli kurucu (x=4, y=5)
    // Son 2 eleman -> Parametresiz kurucu (x=0, y=0)

    // Dizideki tüm noktaları yazdırma
    for(int i = 0;i < 5;i++)
    {
        cout << dizi[i].getX() << " " << dizi[i].getY() << endl; // Her noktanın x ve y değerlerini yazdır
    }

    // Dinamik bellek ile Nokta nesnesi oluşturma
    Nokta* ptr = new Nokta(2,7); // parametreli kurucu (x=2, y=7)

    return 0; // Programı başarıyla sonlandır
}
