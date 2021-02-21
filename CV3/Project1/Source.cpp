#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
	double real = 0, imag = 0;
	Complex *C = new Complex;
	C->setr(3);
	C->seti(4);
	cout << "STATICKE ZADANI: Pro r = " << C->getr() << " pro i = " << C->geti() << endl;
	C->tisk();
	system("pause");
	system("cls");
	cout << "Zadej realnou cast: " << endl;
	cin >> real;
	cout << "Zadej imaginarni cast: " << endl;
	cin >> imag;
	system("cls");
	C->setr(real);
	C->seti(imag);
	system("cls");
	cout << "DYNAMICKE ZADANI: Pro r = " << C->getr() << " pro i = " << C->geti() << endl;
	C->tisk();
	return 0;
}