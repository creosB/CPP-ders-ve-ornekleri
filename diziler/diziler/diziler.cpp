#include <iostream>

using namespace std;

int main()
{

    // [] => adres tanımlar 
    // tipi diziİsmi[elemanSayisi];

    int dizi1[3];

    dizi1[0] = 10;
    dizi1[1] = 20;
    dizi1[2] = 30;

    for (int i = 0; i<3;i++)
    {
        cout << "dizinin " << i << " elemani: " << dizi1[i] << endl;
    }

    // Örnek
    int dizi2[3] = { 1,2,3 };
    int dizi3[3] = { 9,8,7 };
    int dizi4[3];

    cout << "-----\n\n";

    for (int i = 0; i < 3; i++)
    {
        dizi4[i] = dizi2[i];
        dizi2[i] = dizi3[i];
        dizi3[i] = dizi4[i];

        for (int j = 0; j < 1; j++)
        {
            cout << "dizi2[" << dizi2[i] << "] = " << "dizi3["<< dizi3[i] << "]" << endl;
        }
    }
    cout << "-----\n\n";
    for (int i = 0; i < 3; i++)
    {
        dizi4[i] = dizi3[i];
        dizi3[i] = dizi2[i];
        dizi2[i] = dizi4[i];

        for (int j = 0; j < 1; j++)
        {
            cout << "dizi2[" << dizi2[i] << "] = " << "dizi3[" << dizi3[i] << "]" << endl;
        }
    }
}
