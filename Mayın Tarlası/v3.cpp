/* 
	X -> Bomba
	T-> Temiz
	O->Kullanýcýnýn seçtiði yer	
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

/*Fonksiyon prototipleri*/
void MayinDose(char[][5]);
int RastgeleSayiUret();
void YolYazdir(char[][5]);

int main()
{
	setlocale(LC_ALL, "Turkish");//Türkçe Karakter Çýktýsý Ýçin 

	srand((unsigned)time(NULL)); //Rastgele sayý üretmek için þuanki zaman ile seedliyoruz.
	char yol[6][5]; //6x5 Matrix tanýmlýyoruz.
	int mayin;
	while (true) //Döngü oluþturuyoruz
	{
		//Oyunun tekrar oynanabilmesi için while döngüsü içine kodlarýmýzý yazacaðýz
		MayinDose(yol);
		int kaybetti = 0;
		//Oyunun kaybedilip kaybedilmediðini denetliyoruz.
		for (int i = 0; i < 6; i++)
		{
			int sayi = 0;
			while (true)
			{
				cout << "1 ile 5 Arasýnda sayý giriniz:\n";
				//Girilen sayýnýn 1 ile 5 arasýnda olup olmadýðýný kontrol ediyoruz.
				cin >> sayi;
				if ((sayi < 1) || (sayi > 5)) {
					cout << "Lütfen geçerli bir deðer giriniz!\n";
				}
				else {
					// 1 ile 5 arasýndaysa iþleme devam ediyoruz.
					break;
				}
			}
			//Matrix elemanlarý 0 dan baþladýðý için, girilen sayýyý 1 azaltýyoruz.
			sayi--;
			if (yol[i][sayi] != 'X') {
				//Eðer mayýna basýlmamýþsa bölgeyi O ile iþaretliyoruz
				yol[i][sayi] = 'O';
				if (i + 2 < 7)cout << i + 2 << ". satýra geçtiniz." << endl;
			}
			else {
				//Mayýna basýlýrsa oyunu bitiriyoruz.
				cout << "Mayýn patladý.Üzgünüm, maalesef kaybettiniz." << endl;
				kaybetti = 1;
				break;
			}
		}
		//Oyun normal þekilde bittiyse kazandýnýz mesajý yazdýrýyoruz.
		if (kaybetti == 0)cout << "Tebrikler! Kazandýnýz." << endl;
		//Oyun bittikten sonra döngü ile yollarý ekrana yazdýrýyoruz.
		YolYazdir(yol);
		char cevap;
		//Ve kullanýcýya yeniden oynamak isteyip istemediðini soruyoruz.
		//Evet ise programýn baþýnda tanýttýðýmýz while döngüsü tekrarlanýyor. Hayýr ise döngüden çýkýlýyor
		//ve oyun bitiyor.
		cout << "Yeniden oynamak ister misiniz ? E/e Evet, H/h Hayir:" << endl;
		cin >> cevap;
		if (cevap == 'H' || cevap == 'h')
		{
			cout << "Hoþçakal!";
			break;
		}
	}

}

void MayinDose(char dizi[][5])
{
	int mayin;
	for (int i = 0; i < 6; i++)
		{
			mayin = RastgeleSayiUret();
			//Mayýnlarýn koyulacaðý bölgeleri rastgele sayý ile belirliyoruz
			for (int j = 0; j < 5; j++)
			{
				//Mayýn bölgesini X diðer bölgleri T ile iþaretliyoruz.
				if (mayin == j)
				{
					dizi[i][j] = 'X';
				}
				else
				{
					dizi[i][j] = 'T';
				}
			}
		}
}

int RastgeleSayiUret()
{
	return rand() % 5;
}

void YolYazdir(char dizi[][5])
{
	for (int i = 0; i < 6; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				cout << dizi[i][j] << "  ";
			}
			cout << endl;
		}
}
