#include "Kitap.h"

using namespace std;

void Kitap::setAd(string GirilecekAd) {
    Kitap::ad = GirilecekAd;
}

void Kitap::setYazar(string girilecekYazar) {
    Kitap::yazar = girilecekYazar;
}

void Kitap::setTur(string GirilecekTur) {
    Kitap::tur = GirilecekTur;
}

void Kitap::setYayinEvi(string girilecekYayinEvi) {
    Kitap::yayinEvi = girilecekYayinEvi;
}

void Kitap::setIsbnNo(string girilecekIsbnNo) {
    Kitap::isbnNo = girilecekIsbnNo;
}

void Kitap::setSayfaSayisi(int girilecekSayfaSayisi) {
    Kitap::sayfaSayisi = girilecekSayfaSayisi;
}

void Kitap::setBaskiSayisi(int girilecekBaskiSayisi) {
    Kitap::baskiSayisi = girilecekBaskiSayisi;
}

void Kitap::setBaskiYili(int girilecekBaskiYili) {
    Kitap::baskiYili = girilecekBaskiYili;
}

void Kitap::setFiyat(double girilecekFiyat) {
    Kitap::fiyat = girilecekFiyat;
}

string Kitap::getAd(){
	return this->ad;
}

string Kitap::getYazar(){
	return this->yazar;
}

string Kitap::getTur(){
	return this->tur;
}

string Kitap::getYayinEvi(){
	return this->yayinEvi;
}

string Kitap::getIsbnNo(){
	return this->isbnNo;
}

int Kitap::getSayfaSayisi(){
	return this->sayfaSayisi;
}

int Kitap::getBaskiSayisi(){
	return this->baskiSayisi;
}

int Kitap::getBaskiYili(){
	return this->baskiYili;
}

double Kitap::getFiyat(){
	return this->fiyat;
}