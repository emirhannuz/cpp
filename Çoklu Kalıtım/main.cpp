#include "HibritAraba.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	HibritAraba h(65000, 2, 2500, "Toyota");
	cout << "Adi: " << h.adi << endl;
	cout << "Silindir: " << h.silindirHacmi << endl;
	cout << "Batarya Omru: " << h.bataryaOmru << endl;
	cout << "Fiyat: " << h.fiyat << endl;
	cout<<endl;

	HibritAraba h1(75000, 4, 3000, "Honda");
	cout << "Adi: " << h1.adi << endl;
	cout << "Silindir: " << h1.silindirHacmi << endl;
	cout << "Batarya Omru: " << h1.bataryaOmru << endl;
	cout << "Fiyat: " << h1.fiyat << endl;
	return 0;

}
