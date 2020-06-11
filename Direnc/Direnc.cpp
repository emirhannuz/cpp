#include "Direnc.h"

Direnc::Direnc(){
	this->R=-1;
}

void Direnc::DegerAta(int r){
	this->R = r;
}

double Direnc::AkimHesapla(int v){
	if(this->R != -1){
		double akim = (double)v / this->R;
		return akim;
	}
	return -1;
}

int Direnc::GerilimHesapla(int i){
	if(this->R != -1){
		int gerilim = i * this->R;
		return gerilim;
	}
	return -1;
}