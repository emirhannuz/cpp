#include <iostream>
#include <cmath>
#include "Nokta3D.h"

using namespace std;

double NoktalarArasiUzaklik(Nokta3D, Nokta3D);

int main(int argc, char** argv) {
	
	Nokta3D n, n1;
	string koordinatlar[] = {"x1", "y1", "z1", "x2", "y2", "z2"};
	int koordinatDegerleri[6];
	
	for(int i=0; i<6; i++){
		cout<<koordinatlar[i]<<" degerini giriniz: ";
		cin>>koordinatDegerleri[i];
		cout<<endl;
	}
	
	n.setX(koordinatDegerleri[0]);
	n.setY(koordinatDegerleri[1]);
	n.setZ(koordinatDegerleri[2]);
	
	n1.setX(koordinatDegerleri[3]);
	n1.setY(koordinatDegerleri[4]);
	n1.setZ(koordinatDegerleri[5]);
	
	
	cout<<"iki nokta arasi uzaklik: "<<NoktalarArasiUzaklik(n, n1);
	return 0;
}

double NoktalarArasiUzaklik(Nokta3D A, Nokta3D B){
	double uzaklik = sqrt(pow(A.getX() - B.getX(),2) + pow(A.getY() - B.getY(),2) + pow(A.getY() - B.getY(),2));
	return uzaklik;
}