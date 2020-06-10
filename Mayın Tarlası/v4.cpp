
/* 
	X -> Bomba
	T-> Temix
	O->Kullanýcýnýn seçtiði yer	
*/

#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

//fonksiyon prototipleri
short int SutunGirisi(short int);
void MatrisTanimla(char [][5],int ,int );
int RastgeleSayiUret(int , int);
void AtamaYap(char [][5],int, int, char);
void KullaniciGidilenYol(char[][5],int,int );
bool MatrisiKontrolEt(char [][5],int ,int );
void MatrisiYazdir(char [][5],int ,int );

int main(int argc, char** argv) {
	
	srand(time(0));
	
	char oyunMat[6][5], devam='e';
	short int girilenSutun;
	bool kazandiMi;
	
	while(devam=='e' || devam== 'E')
	{
		kazandiMi=true;
		MatrisTanimla(oyunMat,6,5);
		for(int satir=0 ; satir<6 ; satir++){
			girilenSutun = SutunGirisi(satir);
			if(MatrisiKontrolEt(oyunMat,satir,girilenSutun))
			{ /*fonksiyon yardýmýyla girilen konuma bomba varmý diye kontrol ediliyor varise oyun bitiriliyor*/
				cout<<"Mayin Patladi. Uzgunum Maalesef Kaybettiniz!\n";
				MatrisiYazdir(oyunMat,6,5);
				kazandiMi=false; /*kullanýcý oyunu kazanamadý*/
				break;
			}
			KullaniciGidilenYol(oyunMat,satir,girilenSutun);/*kullanýcýnýn seçtiði yer iþaretleniyor*/
		}
		
		if(kazandiMi) /*kullanýcý oyunu kazandý*/
		{
			cout<<"Tebrikler Kazandiniz!\n";
			MatrisiYazdir(oyunMat,6,5);
			cout<<"\n";
		}
		
		cout<<"Tekrar oynamak ister misiniz? (evet ise E/e - hayir ise H/h): ";
		cin>>devam;
		
	}
	
	return 0;
}


short int SutunGirisi(short int satir)
{
	/*kullanýcýdan veri almak için fonsiyon parametre olarak o anki satýr sayýsý alýnýyor*/
	short int deger;
	cout<<satir+1<<". Satira Gectiniz."<<endl;
	cout<<"1 ile 5 arasinda bir deger giriniz: ";
	cin>>deger;
	if(deger<1 || deger >5)
	{
		/*geçersiz bir deðer girerse geçerli bir deðer girene kadar yeni deðer girilir*/
		while(true)
		{
			cout<<"Gecersiz Deger. 1 ile 5 arasinda bir deger giriniz: ";
			cin>>deger;
			if(deger>=1 && deger <=5)
			{
				break;
			}
		}
	}
	
	return deger;	
}

void MatrisTanimla(char matris[][5],int satirBoyutu,int sutunBoyutu)
{
	/*matris ratgele X ve T harfleri ile dolduruluyor*/
	int rastgeleSutun;
	for (int satir=0;satir<satirBoyutu;satir++)
	{
		rastgeleSutun = RastgeleSayiUret(5,0);
		for(int sutun=0;sutun<sutunBoyutu;sutun++)
		{
			if(sutun!=rastgeleSutun)
			{
				/*Belirtilen yeri Temiz olarak iþaretle*/
				AtamaYap(matris,satir,sutun,'T');
			}else
			{	/*Belirlenen konuma Bomba ata*/
				AtamaYap(matris,satir,sutun,'X');
			}
		}
	}
}


int RastgeleSayiUret(int end , int start)
{
	/*rastgele sayý üreten fonksiyon*/
	return rand()%end + start;
}

void AtamaYap(char matris[][5],int satir , int sutun , char karakter)
{
	/*belirtilen konuma belirtilen karakteri atar*/
	matris[satir][sutun] = karakter;
}


bool MatrisiKontrolEt(char matris[][5],int satir,int sutun)
{
	/*girilen konumda bomba varsa true yoksa false döndürür*/
	if(matris[satir][sutun-1] == 'X')
	{
		return true;
	}
	else
	{
		return false;
	}
}

void KullaniciGidilenYol(char matris[][5],int satir,int sutun)
{	
	/*kullanýcýnýn iþaretlediði yollar O harfi ile deðiþtirilir.*/
	matris[satir][sutun-1]='O';	
}

void MatrisiYazdir(char matris[][5],int satirBoyutu,int sutunBoyutu)
{
	
	for(int satir=0; satir<satirBoyutu; satir++)
	{
		for(int sutun=0; sutun<sutunBoyutu; sutun++)
		{
			cout<<matris[satir][sutun]<<" ";
		}
		cout<<"\n";
	}
}
