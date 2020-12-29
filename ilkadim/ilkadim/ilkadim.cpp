#include <iostream>
#include <ctime>

void Bilgilendirme(int Zorluk) {
	//cout = Character Output
	// << = insertion operator
	std::cout << "\n Odaya girmek icin dogru sayiyi bulmalisin. Oda: #" << Zorluk;
	// \n ile boşluk bırakılabilir isteğe bağlı olarak std::cout << std::endl; de kullanılabilir.
	// const değerin herhangi bir noktada değişmeyeceği anlamına gelir.
	// int değeri tam sayılar için kullanılır.
}

bool OyunuBaslat(int Zorluk) {
	
	Bilgilendirme(Zorluk);

	// rasgele sayı üretmek için
	const int Sayi1 = rand() % Zorluk + Zorluk,
		Sayi2 = rand() % Zorluk + Zorluk,
		Sayi3 = rand() % Zorluk + Zorluk;
	const int Topla = Sayi1 + Sayi2 + Sayi3;
	const int Carp = Sayi1 * Sayi2 * Sayi3;

	std::cout << std::endl;
	std::cout << " Toplami: " << Topla << std::endl;
	std::cout << " Carpimi: " << Carp << std::endl;
	std::cout << " Yukaridaki islemin cevabini bulduracak 3 sayi giriniz.\n";

	int Giris1,
		Giris2,
		Giris3;

	std::cout << std::endl;
	// cin = Character Input
	// cin >> komutu ile kullanıcıdan veri girişi alabiliyoruz.
	std::cout << " ";
	std::cin >> Giris1 >> Giris2 >> Giris3;
	std::cout << " Girdiginiz sayi: ";
	std::cout << Giris1 << " " << Giris2 << " " << Giris3 << std::endl;

	int GirisTopla = Giris1 + Giris2 + Giris3,
		GirisCarp = Giris1 * Giris2 * Giris3;

	if (Topla == GirisTopla && Carp == GirisCarp) {
		std::cout << " Odaya giris kabul edildi.\n";
		return true;
	}
	else {
		std::cout << " Yanlis cevap.\n Giridiginiz sayilar:\n " << Giris1 << " " << Giris2 << " "<< Giris3 <<std::endl;
		return false;
	}
}


int main()
{	
	// rasgele sayıyı çeşitlendirmek için
	srand(time(NULL)); 

	int SoruZorlugu = 1;
	int const MaxZorluk = 5;

	while (SoruZorlugu <= MaxZorluk)
	{
		bool DogruMu = OyunuBaslat(SoruZorlugu);
		std::cin.clear();
		std::cin.ignore();

		if (DogruMu)
		{
			// Soru zorluğunu arttır.
			++SoruZorlugu;
		}
	}
	std::cout << "\n ***** Tebrikler !! ******";
	return 0;
}
