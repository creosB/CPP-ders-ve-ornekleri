#include <iostream>


int toplama(int sayi1, int sayi2) {
    int islem;
    islem = sayi1 + sayi2;
    return islem;
}
int cikarma(int sayi1, int sayi2) {
    int islem;
    islem = sayi1 - sayi2;
    return islem;
}
int carpma(int sayi1, int sayi2) {
    int islem;
    islem = sayi1 * sayi2;
    return islem;
}
int bolme(int sayi1, int sayi2) {
    int islem;
    islem = sayi1 / sayi2;
    return islem;
}
int karekok(int sayi1) {
    int islem;
    islem = sqrt(sayi1);
    return sayi1;
}
using namespace std;
int main()
{
    int tuslanan,
        girilen1,
        girilen2,
        islem;
    cout << " ****** Hesap Makinesi Ornegine Hosgeldiniz ******\n";
    cout << " Toplama islemi icin (1)\n Cikarma islemi icin (2)\n Bolme islemi icin (3)\n Carpma islemi icin (4)\n Karekok islemi icin (5)";
    cin >> tuslanan;
    
    cout << " Islem icin ilk sayiyi giriniz.\n";
    cin >> girilen1;
    cout << " Islem icin ikinci sayiyi giriniz\n";
    cin >> girilen2;
  
    switch (tuslanan)
    {
    case 1:
        islem = toplama(girilen1, girilen2);
        break;
    case 2:
        islem = cikarma(girilen1, girilen2);
        break;
    case 3:
        islem = bolme(girilen1, girilen2);
        break;
    case 4:
        islem = carpma(girilen1, girilen2);
        break;
    case 5:
        islem = karekok(girilen1);
    default:
        cout << "Dogru tuslayiniz";
        break;
    }
    cout << " ****** Islem Sonucu: " << islem << " ******";
}

