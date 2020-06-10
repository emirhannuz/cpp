#include "Polinom.h"
#include <cmath>
#include <iostream>

using namespace std;

Polinom::Polinom(){
	this->A = 0;
	this->B = 0;
	this->C = 0;
}

void Polinom::KatsayilaraDegerAta(int a, int b, int c){
	this->A = a;
	this->B = b;
	this->C = c;
}

int Polinom::DegerHesapla(int x){
	return (this->A * pow(x,2)) + (this->B * x) + this->C;
}

void Polinom::KokleriHesapla(){
	
	float delta = pow(this->B,2) - (4 * this->A * this->C);
	float kok1, kok2;
	
	if(this->A==0 && this->B==0 && this->C==0){
		cout<<"Kokleri girmemissiniz."<<endl;
		exit(1);
	}
	
	/*kok hesaplamak için gerekli iþlemler*/
	if(delta < 0){
		cout<<"Sanal Kokler Var."<<endl;
	}
	else if(delta > 0){
		kok1 = ((-this->B) + sqrt(delta)) / (2 * this->A);
		kok2 = ((-this->B) - sqrt(delta)) / (2 * this->A);
		
		cout<<"2 Farkli Kok Var: "<<endl;
		cout<<"x1="<<kok1<<endl<<"x2="<<kok2<<endl;
	}else{
		kok1 = -0.5*this->B/this->A;
		cout<< "esit iki kok var "<<endl;
		cout<<"x1=x2="<<kok1<<endl;
	}
}