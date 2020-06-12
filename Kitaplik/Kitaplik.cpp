#include "Kitaplik.h"

Kitaplik::Kitaplik(){
	this->kitapSayisi = 0;
}
void Kitaplik::KitapEkle(Kitap kitap){
	if(this->kitapSayisi > 9){
		cout<< "Kitaplik Dolu Kitap Ekleyemezsiniz.."<<endl;
	}
	else{
		this->kitaplik[kitapSayisi] = kitap;
		kitapSayisi++;
	}
}

int Kitaplik::getKitapSayisi(){
	return this->kitapSayisi;
}

void Kitaplik::KitapBilgileri(){
	cout<<"Kitap Adi  -  Yazari  -  Tur  -  Yayinevi  -  IsbnNo  -  Sayfa Sayisi  -  Baski Sayisi  -  Baski Yili  -  Fiyati" << endl;
	for(int i=0 ; i < this->kitapSayisi ; i++){
		cout << this->kitaplik[i].getAd() << "  -  " << this->kitaplik[i].getYazar() << "  -  " << this->kitaplik[i].getTur() << "  -  " << this->kitaplik[i].getYayinEvi() << "  -  ";
		cout << this->kitaplik[i].getIsbnNo() << "  -  " << this->kitaplik[i].getSayfaSayisi() << "  -  " << this->kitaplik[i].getBaskiSayisi() << "  -  " << this->kitaplik[i].getBaskiYili() << "  -  ";
		cout<< this->kitaplik[i].getFiyat() <<endl;
	}
}