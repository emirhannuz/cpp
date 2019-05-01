#include <iostream>
#include "Dikdortgen.h"
using namespace std;
int main(int argc, char** argv) {
	Dikdortgen d;
	int en,boy,x,y;
	int secim;
	cout<<"1. set en ve boy\n";
	cout<<"2. set x ve y\n";
	cout<<"3. kenarlari çiz\n";
	cout<<"4. icini doldur\n";
	cout<<"5. tasi\n";
	cout<<"6. cikis\n";
	cout<<"secim? ";
	cin>>secim;
	
	
	while (secim>0 && secim<6)
	switch(secim){
		case 1:
			cout<<"en: ";
			cin>>en;
			cout<<"boy: ";
			cin>>boy;
			d.setEn(en);
			d.setBoy(boy);
			cout<<"secim?: ";
			cin>>secim;
			break;
		case 2:
			cout<<"x: ";
			cin>>x;
			cout<<"y: ";
			cin>>y;
			d.setX(x);
			d.setY(y);
			cout<<"secim?: ";
			cin>>secim;
			break;
		case 3:
			d.kenarCiz();
			cout<<"secim?: ";
			cin>>secim;
			break;
		case 4:
			d.iciniDoldur();
			cout<<"secim?: ";
			cin>>secim;
			break;
		case 5:
			d.tasiCiz();
			cout<<"secim?: ";
			cin>>secim;
			break;
	}
	return 0;
}
