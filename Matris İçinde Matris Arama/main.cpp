#include <iostream>
#include <fstream>

using namespace std;
 /*-*//*prototipler*//*_*/
/*_*/				/*-*/
void matrisOku(char[],int [][100],int&,int&);
void sonucYaz(char[],int[][2],int);
int arama(const int [][100],const int[][100],int[][2],int,int,int,int);
 /*-*/			/*_*/
/*_*//*		 *//*-*/
int main(int argc, char** argv) {
	
	
	char anaDosya[]="AnaMatris.txt";
	char arananDosya[]="ArananMatris.txt";
	char sonucD[]="Sonuc.txt";
	
	int anaMatris[100][100];
	int arananMatris[100][100];
	int sonuclar[100][2];
	
	
	int satir,sutun,arananSatir,arananSutun,sonucSayisi;
	
	matrisOku(anaDosya,anaMatris,satir,sutun);
	matrisOku(arananDosya,arananMatris,arananSatir,arananSutun);
	
	sonucSayisi=arama(anaMatris,arananMatris,sonuclar,satir,sutun,arananSatir,arananSutun);	
	cout<<"Islem tamam.";
	
	
	sonucYaz(sonucD,sonuclar,sonucSayisi);
	
	return 0;
}



void matrisOku(char dosyaAdi[],int matris [][100],int &satir,int &sutun){
	
	ifstream oku;
	oku.open(dosyaAdi,ios::app);
	oku>>satir;// ilk önce dosyadaki satýr sayýsýný,
	oku>>sutun;// sutun sayisini alýr.
	for(int i=0;i<satir;i++){ // daha sonra matrisi alýr
		for(int j=0;j<sutun;j++){
			oku>>matris[i][j];
			
			}	
	}	
	oku.close();	
	
}

int arama(const int anaMatris[][100],const int arananMatris[][100],int sonuc[][2],int satir,int sutun,int arananSatir,int arananSutun){
	
	int bulunanEsitMatris=0,sayac;
    
    int i, j, iAna, jAna; // deðiþken tanýmlamalarý
     
    for( arananSatir = arananSatir ; arananSatir > 1 ; arananSatir--) {
        for (iAna = 0; iAna < satir-1; iAna++) { //anamatrisin satir sayisi kadar
            for (jAna = 0; jAna < sutun-1; jAna++) {// anamatrisin sutun sayisi kadar    
            	sayac=0;// esitlik sayacý
                for (i = 0; i < arananSatir; i++) {	//aranan matris satir
                    for (j = 0; j < arananSutun; j++){	//arananmatris sutunlarýnda dolaþmak için
                    	if(anaMatris[i+iAna][j+jAna]==arananMatris[i][j]){//aranan matris ana matrise eþit mi kontrol ediyor.
							sayac++;//esitlik sayaci satir * sutun kadar olmalý.
                        	if(sayac==(arananSatir*arananSutun)){ // aranacak matrisin tüm elemanlarý ayný ise 
								sonuc[bulunanEsitMatris][0]=iAna; // ana matrisin indislerini alýyor 
   								sonuc[bulunanEsitMatris][1]=jAna; //
								bulunanEsitMatris++; // eþit matris sayýsýný buluyor.
								}
                        	}	
                    } 
						
                }
                
            }
        }
        
    }
		return bulunanEsitMatris;
}


void sonucYaz(char dosyaAdi[],int sonuclar[][2],int sonucSayisi){
	
	ofstream yazdir(dosyaAdi, ios::out); //ios::out yazarsan dosya içindekileri silip yeni deðerleri yazdýrýr.
	yazdir<<sonucSayisi<<endl;//önce bulduðu sonuç sayýsýný yazdýrýr.
	for(int i=0;i<sonucSayisi;i++){ //daha sonra dizi içindeki elemanlarý yazdýrýr.
			yazdir <<sonuclar[i][0]<<sonuclar[i][1]<<endl;
	}	
	yazdir.close();// dosyaya yazma iþlemi sonlandirilir
}
