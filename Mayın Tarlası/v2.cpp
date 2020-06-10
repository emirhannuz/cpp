/* 
	X -> Bomba
	T-> Temiz
	O->Kullanýcýnýn seçtiði yer	
*/

#include <iostream>
#include <iostream>
#include <stdlib.h> 
#include <time.h>

using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void OyunMatOlustur(char [][5]);
int RastgeleSayi(int );
void DiziYazdir(char [][5]);

int main(int argc, char** argv) {
	char tekrarOyun,
		oyunMat[6][5];
		
	int kullaniciSutun;


	
basla://goto deyimi için belirtilmiþ tanýmlayýcý goto basla kullanýldýðýnda program burdan tekrar baþlar
	srand(time(0));
	OyunMatOlustur(oyunMat);
	for(int i=0 ; i<6 ;i++){
		
		cout<<i+1<<". satira gectiniz."<<endl;
		cout<<"1 ile 5 arasinda bir sayi giriniz: ";
		cin>>kullaniciSutun;
		
		while(kullaniciSutun > 5 || kullaniciSutun < 1){
				cout<<"Gecersiz bir deger girdiniz. 1 ile 5 arasinda bir sayi giriniz: ";
				cin >>kullaniciSutun;
		}
		
		if(oyunMat[i][kullaniciSutun-1]=='X'){ // kullanýcýnýn grdiði sutunda bomba var mý diye kontrol ediliyor
			// var ise bomba olan yer P ile iþaretleniyor ekrana mesaj ve dizi yazdýrýlýyor ve döngüden çýkýlýyor 
			oyunMat[i][kullaniciSutun-1]='P'; 
			cout<<"Mayin Patladi. Uzgunum Maalesef Kaybettiniz!\n";
			DiziYazdir(oyunMat);
			break;
		}else{ // bomba yok ise girilen sütünda o sütün iþaretleniyor.
			oyunMat[i][kullaniciSutun-1]='O';
			if(i==6){// dongu son turunda ise ve bombaya denk gelinmemiþse oyunu kazandýðý söyleniyor ve dizi ekrana yazdýrýlýyor
				cout<<"Tebrikler Kazandiniz!\n";
				DiziYazdir(oyunMat);
				break;
			}
		}
		
	}
	// tekrar onayýp oynamamak istediði soruluyor
	cout<<"Tekrar Oynamak Ister misiniz? (E/e evet - H/h hayir): ";
	cin>>tekrarOyun;
	
	// kullanýcý e ve E girdiyse oyununun tekrar baþlamasý için goto deyimi yardýmýyla basla kýsmýna gidiyor.
	if(tekrarOyun=='e' || tekrarOyun=='E'){
		goto basla;
	}
	
	cout<<"Oyun Bitti! \n";
	
	return 0;
}


void OyunMatOlustur(char dizi[][5]){
	/* oyun matrisini T ve X lerle dolduran fonksiyon*/
	for(int satir = 0 ; satir < 6 ; satir++){
		int rastgeleSutun= RastgeleSayi(5);
		for(int sutun = 0 ; sutun < 5 ; sutun++){
			if(sutun == rastgeleSutun){
				dizi[satir][sutun]='X';
			}else{
				dizi[satir][sutun]='T';
			}
		}
	}
	
}
int RastgeleSayi(int n){
	
	return rand() % n;
}

void DiziYazdir(char dizi[][5]){
	// ouynmatrisini ekrana yazdýracak fonksiyon
	for(int i =0 ; i<6 ; i++){
		for (int j=0;j<5;j++){
			cout<<dizi[i][j]<<" ";
		}
		cout<<endl;
	}
}
