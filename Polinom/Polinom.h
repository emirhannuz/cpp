#ifndef POLINOM_H
#define POLINOM_H

class Polinom{
	private:
		int A, B, C;
	public:
		Polinom();
		void KatsayilaraDegerAta(int, int, int);
		int DegerHesapla(int);
		void KokleriHesapla();
};
#endif