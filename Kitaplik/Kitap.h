#ifndef  KITAP_H
#define  KITAP_H
#include <iostream>
using namespace std;

class Kitap {
	private:
	    string ad;
	    string yazar;
	    string tur;
	    string yayinEvi;
	    string isbnNo;
	    int    sayfaSayisi;
	    int    baskiSayisi;
	    int    baskiYili;
	    double fiyat;
	public:
	    void setAd(string);
	    void setYazar(string);
	    void setTur(string);
	    void setYayinEvi(string);
	    void setIsbnNo(string);
	    void setSayfaSayisi(int);
	    void setBaskiSayisi(int);
	    void setBaskiYili(int);
	    void setFiyat(double);
	    
	    string getAd();
		string getYazar();
		string getTur();
		string getYayinEvi();
		string getIsbnNo();
		int getSayfaSayisi();
		int getBaskiSayisi();
		int getBaskiYili();
		double getFiyat();
};
#endif //




