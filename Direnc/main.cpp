#include <iostream>
#include "Direnc.h"

using namespace std;

int main(int argc, char** argv) {
	int V, I, R;
	
	cout<<"R direnç parametresinin deðerini tam sayi olarak giriniz: ";
	cin>>R;
	
	cout<<"V gerilim paramatresinin degeri olarak bir tam sayi giriniz: ";
	cin>>V;
	
	cout<<"i akim paramatresinin degerini tam sayi olarka giriniz: ";
	cin>>I;
	
	
	cout<<"------------TEST1------------"<<endl;
	Direnc d;
	d.DegerAta(R);
	cout<<"hesaplanan akim: "<<d.AkimHesapla(V)<<endl;
	cout<<"hesaplanan gerilim: "<<d.GerilimHesapla(I)<<endl;
	
	cout<<"------------TEST2------------"<<endl;
	Direnc d1;
	d1.DegerAta(2);
	cout<<"hesaplanan akim: "<<d1.AkimHesapla(7)<<endl;
	cout<<"hesaplanan gerilim: "<<d1.GerilimHesapla(3)<<endl;
	
	cout<<"------------TEST3------------"<<endl;
	//	R deðiþkenine Deðer Atamadan iþlem yapan fonksiyonlar çaðýrýldý.
	//	Burda beklediðimiz sonuc default olarak yapýcýmýzýn R deðiþkenine atadýðý -1 deðerini görmek	
	Direnc d2;
	cout<<"hesaplanan akim: "<<d2.AkimHesapla(2)<<endl;
	cout<<"hesaplanan gerilim: "<<d2.GerilimHesapla(3)<<endl;
	
	return 0;
}