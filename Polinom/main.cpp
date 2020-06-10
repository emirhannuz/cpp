#include <iostream>
#include "Polinom.h"
using namespace std;

int main(int argc, char** argv) {
	
	int A, B, C, x;
	
	cout<<"A katsayisini giriniz: ";
	cin>>A;
	
	cout<<"B katsayisini giriniz: ";
	cin>>B;
	
	cout<<"C katsayisini giriniz: ";
	cin>>C;
	
	cout<<"X i giriniz: ";
	cin>>x;
	
		
	
	cout<<"-----------TEST1-----------"<<endl;
	Polinom p;
	p.KatsayilaraDegerAta(A,B,C);
	cout<<"hesaplanan deger: ";
	int a = p.DegerHesapla(x);
	cout<<a<<endl;
	cout<<"Hesaplanan Kokler : ";
	p.KokleriHesapla();
	
	
	
	cout<<"-----------TEST2-----------"<<endl;
	Polinom p1;
	p1.KatsayilaraDegerAta(2,4,-8);
	cout<<"hesaplanan deger: ";
	int b = p1.DegerHesapla(3);
	cout<<b<<endl;
	cout<<"Hesaplanan Kokler : ";
	p1.KokleriHesapla();
	
	
	cout<<"-----------TEST3-----------"<<endl;
	Polinom p2;
	cout<<"hesaplanan deger: ";
	int c = p2.DegerHesapla(3);
	cout<<c<<endl;
	cout<<"Hesaplanan Kokler : ";
	p2.KokleriHesapla();
	
	return 0;
}
