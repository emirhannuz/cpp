#include <iostream>
#include "Kitaplik.h"

using namespace std;

int main(int argc, char** argv) {
	
	Kitap kitap1,kitap2;
	Kitaplik kitaplik;
	
	
	kitap1.setAd("kitap1");
	kitap1.setYazar("yazar1");
	kitap1.setTur("tur1");
	kitap1.setYayinEvi("yayinevi1");
	kitap1.setIsbnNo("isbnno1");
	kitap1.setSayfaSayisi(1);
	kitap1.setBaskiSayisi(1);
	kitap1.setBaskiYili(1);
	kitap1.setFiyat(1.1);
	
	kitap2.setAd("kitap2");
	kitap2.setYazar("yazar2");
	kitap2.setTur("tur2");
	kitap2.setYayinEvi("yayinevi2");
	kitap2.setIsbnNo("isbnno2");
	kitap2.setSayfaSayisi(2);
	kitap2.setBaskiSayisi(2);
	kitap2.setBaskiYili(2);
	kitap2.setFiyat(2.2);
	
	kitaplik.KitapEkle(kitap1);
	kitaplik.KitapEkle(kitap2);
	
	cout<<"Kitapliktaki Kitap Sayisi: "<<kitaplik.getKitapSayisi()<<endl<<endl;
	
	cout<<"Kitap Bilgileri"<<endl;
	kitaplik.KitapBilgileri();
	
	return 0;
}
