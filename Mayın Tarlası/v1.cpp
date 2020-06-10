/* 
	X -> Bomba
	T-> Temix
	O->Kullanýcýnýn seçtiði yer	
*/

#include <iostream>
#include <stdlib.h> /* random */
#include <time.h>       /* time */
using namespace std;

/*Function Prototypes*/
void createArray(char[][5]);
void printArray(char[][5]);
void setBomb(char[][5]);
bool isThereBomb(char[][5], int, int);
void setUserSelectedIndex(char[][5], int, int);
void bombExplode(char[][5], int, int);


int main(int argc, char** argv) {
	/* Deðiþken Tanýmlamalarý */
	char oyunMat[6][5];
	char userInput='E';
	int userColumnInput;
	/************************/
	
	
	while(userInput=='E' || userInput=='e'){/* Kullanýcý e veya E girdiði Sürece döngü dönecek*/
		
		srand(time(0)); /* Her seferinde Farklý Rastgele Sayýlar Üretmek için*/
	
		createArray(oyunMat);
		setBomb(oyunMat);
		
		int satir;
		for (satir=0; satir < 6; satir++){
			cout<< satir+1 <<". satira gectiniz."<<endl;
			cout<<"1 ile 5 arasinda bir sayi giriniz: ";
			cin >>userColumnInput; /* kullanýcýnýn girdiði deðer okundu*/
			/* 5 ten büyük veya 1 den küçük bir deðer girildiðinde kullanýcýdan deðer yeniden isteniyor*/
			while(userColumnInput > 5 || userColumnInput < 1){
				cout<<"Gecersiz bir deger girdiniz. Tekrar giriniz: ";
				cin >>userColumnInput;
			}
			
			bool bomb = isThereBomb(oyunMat,satir,userColumnInput); /* seçilen konumda bomba var mý diye kontrol etmek için fonksiyonumuza matrisle birlikte satir ve kullanýcýnýn girdiði deðeri yolluyoruz*/
			if (bomb) /*dönen deðer true ise yani bomba var ise kullanýcý  oyunu kaybetti mesajý yazdýrýp oyunu */
			{
				cout<< endl << "Mayin Patladi. Uzgunum Kaybettiniz!"<<endl;
				bombExplode(oyunMat, satir, userColumnInput); /*seçilen konumda bomba var ise konumdaki harf deðiþtirildi*/
				printArray(oyunMat); /*oyun bitti. matrisi yazdýrdýk*/
				break; /* for döngüsü sonlandýrýldý*/
			}
			setUserSelectedIndex(oyunMat, satir, userColumnInput); /* Kullanýcýnýn seçtiði index i O harfi ile dolduran fonksiyon çaðýrýldý ve o anki satir ve kullancinin yazdýðý deðer fonksiyona gönderildi*/
		}
		if(satir==6 /* döngü 6 kez dönmüþse kullanýcý oyunu kazanmýstýr*/){
			cout<<"Tebrikler Kazandiniz!"<<endl<<endl;
			printArray(oyunMat); /* oyun matrisini ekrana yazdýrdýk*/
		}
		
		cout<<"Yeniden Oynamak Ister misiniz? (Evet icin e/E, Hayýr icin h/H giriniz.): "<<endl;
		cin>>userInput; /*kullanýcýnýn cevabý alýndý*/
	}
	
	return 0;
}

/* oyunMat ýn içini T Harfleri ile Dolduruyoruz */
void createArray(char mat[][5])
{
	for (int satir = 0 ; satir < 6 ; satir++)
	{
		for(int sutun = 0 ; sutun < 5 ; sutun++)
		{
			mat[satir][sutun]='T';
		}
	}
}

/* Dizimizi Ekrana Yazdýracak Fonksiyon */
void printArray(char mat[][5])
{
	for (int satir = 0 ; satir < 6 ; satir++)
	{
		for(int sutun = 0 ; sutun <5 ;sutun++)
		{
			cout << mat[satir][sutun]<< "  ";
		}
		cout << endl ;
	}
}

/* Bombalar Rastgele Konumlara Atanýyor */
void setBomb(char mat[][5])
{
	int randomNumber;
	for(int satir = 0 ; satir < 6 ; satir++)
	{
		randomNumber = rand() % 5;
		mat[satir][randomNumber] = 'X';
	}
	
}

/* 
	Kullanýcýnýn girdiði indiste bomba var mý diye kontrol eden fonksiyon 
	bomba var ise true deðeri döndürüyor yok ise false
*/
bool isThereBomb(char mat[][5], int row, int column)
{
	return mat[row][column-1]=='X' ? true :false ;
}

/*
	Kullanicinin Seçtiði indisler O harfi ile deðiþtiriliyor.
*/
void setUserSelectedIndex(char mat[][5], int row, int column)
{
	mat[row][column-1]='O';
}

/*
	Kullanýcýnýn Seçtiði indiste bomba var ise o indise P harfi ile deðiþtiriliyor
*/
void bombExplode(char mat[][5], int row, int column)
{
	mat[row][column-1]='P';
}

