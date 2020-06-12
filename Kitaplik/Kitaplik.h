#ifndef  KITAPLIK_H
#define  KITAPLIK_H
#include "Kitap.h"
class Kitaplik {
	private:
		Kitap kitaplik[10];
		int kitapSayisi;
	public:
		Kitaplik();
		void KitapEkle(Kitap);
		int getKitapSayisi();
		void KitapBilgileri();
};
#endif




