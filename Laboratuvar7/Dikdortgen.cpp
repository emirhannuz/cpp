#include <iostream>
#include "Dikdortgen.h"
using namespace std;

void Dikdortgen::kenarCiz(){
	for (int i=0;i<Sekil::getBoy();i++){
		for(int j=0;j<Sekil::getEn();j++){
			if(i==0 || j==0 || i==(Sekil::getBoy()-1) || j==(Sekil::getEn()-1)){
				cout<<"*";
			}
			else cout<<" ";
		}
		cout<<endl;	
	}
	
}
void Dikdortgen::iciniDoldur(){
		for (int i=0;i<Sekil::getBoy();i++){
			for(int j=0;j<Sekil::getEn();j++){
			cout<<"*";
		}
		cout<<endl;	
	}
}
void Dikdortgen::tasiCiz(){
	for(int i=0;i<getX();i++){
		cout<<endl;
	}
	for(int j=0;j<getBoy();j++){
		for(int k=0;k<getEn()+getY();k++){
			if (k>=getY()) cout<<"*";
			else cout<<" ";
		}
		cout<<endl;
	}
}
