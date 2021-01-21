#include <iostream>


class Toplama {
    int toplanacak1, toplanacak2;
public:
    Toplama(int, int);
    int topla() {
        return (toplanacak1 + toplanacak2);
    }
};

Toplama::Toplama(int a, int b) {
    toplanacak1 = a;
    toplanacak2 = b;
}

enum Sayilar {
    sayi1,
    sayi2,
    sayi3,
    sayi4 = 10,
    sayi5 = 20,
};

typedef int Tsayi;

#define Dsayi1 10
#define Dsayi2 20

int main()
{
    Tsayi Tsayi1 = 10;
    Tsayi Tsayi2 = 20;

    std::cout << "enum Sayi1 = " << sayi1 << std::endl;
    std::cout << "enum Sayi2 = " << sayi2 << std::endl;
    std::cout << "enum Sayi3 = " << sayi3 << std::endl;
    std::cout << "enum Sayi4 = " << sayi4 << std::endl;
    std::cout << "enum Sayi5 = " << sayi5 << " \n------------" << std::endl;

    std::cout << "TypeDef ile Sayi1 = " << Tsayi1 + Tsayi2 << " \n------------" << std::endl;

    Toplama sayilar1(2, 2);
    Toplama sayilar2(5, 2);

    std::cout << "Class ile sayi toplama1 = " << sayilar1.topla() << std::endl;
    std::cout << "Class ile sayi toplama2 = " << sayilar2.topla() << " \n------------" << std::endl;

    std::cout << "Define ile sayi carpimi = " << Dsayi1 * Dsayi2 << std::endl;
    std::cout << "Define ile sayi toplamı = " << Dsayi1 + Dsayi2 << " \n------------" << std::endl;

    const int b = 100;
    std::cout << "Const degeri = " << b << " \n------------" << std::endl;

    volatile int a = 5;
    std::cout << "Volatile deger1 = " << a << std::endl;   
    a = 10;
    std::cout << "Volatile deger2 = "<< a << " \n------------" << std::endl;


}
