#include <iostream>
#include "Nokta.h"
using namespace std;

void Nokta::setX(int x){
	this->x=x;
} 
void Nokta::setY(int y){
	this->y=y;
}
int Nokta::getX(){
	return Nokta::x;
}
int Nokta::getY(){
	return Nokta::y;
}
