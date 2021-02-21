# C ++ Seminar - CV 03
## Třída Complex
### .cpp soubor
```cpp
#include <iostream>
#include "Complex.h"
#include "Math.h"

using namespace std;

Complex::Complex(double r, double i)
{
	this->real = r;
	this->imag = i;
}
void Complex::setr(double r)
{
	real = r;
}
void Complex::seti(double i)
{
	imag = i;
}
double Complex::getr()
{
	return real;
}
double Complex::geti()
{
	return imag;
}
double Complex::modul(void)
{
	float modul;
	modul = sqrt(real * real + imag * imag);
	return modul;
}
double Complex::faze(void)
{
	float faze;
	faze = acos(real / sqrt(real * real + imag * imag));
	return faze;
}
void Complex::tisk(void)
{
	if (imag < 0)
	{
		float temp;
		temp = -1 * imag;
		cout << "Komplexni cislo: " << real << " - " << temp << "j" << endl;
	}
	else {
		cout << "Komeplxni cislo: " << real << " + " << imag << "j" << endl;
	}
	cout << "Modul je: " << modul() << endl;
	cout << "Faze je: " << faze() << endl;
}
```
.h soubor
```cpp
#pragma once
class Complex
{
private:
	double real, imag;

public: 
	Complex(double r, double i);
	void setr(double r);
	void seti(double i);
	double getr();
	double geti();
	double modul(void);
	double faze(void);
	void tisk(void);
};
```
### Source.cpp
```cpp
#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
	double real = 0, imag = 0;
	Complex cislo_stat(3, 4);
	cislo_stat.setr(3);
	cislo_stat.seti(4);
	cout << "STATICKE ZADANI: Pro r = " << cislo_stat.getr() << " pro i = " << cislo_stat.geti() << endl;
	cislo_stat.tisk();
	system("pause");
	system("cls");
	while (1)
	{
		cout << "Zadej realnou cast: ";
		cin >> real;
		if (cin.fail()) {
			cin.clear();
			cin.ignore();
			cout << "Vstup bere pouze cisla!" << endl;
			continue;
		}
		while(1)
		{ 
		cout << "Zadej imaginarni cast: ";
		cin >> imag;
			if (cin.fail()) {
				cin.clear();
				cin.ignore();
				cout << "Vstup bere pouze cisla!" << endl;
				continue;
			}
			break;
		}
		break;
	}
	system("cls");
	Complex* cislo_dyn = new Complex(real, imag);
	cislo_dyn->setr(real);
	cislo_dyn->seti(imag);
	system("cls");
	cout << "DYNAMICKE ZADANI: Pro r = " << cislo_dyn->getr() << " pro i = " << cislo_dyn->geti() << endl;
	cislo_dyn->tisk();
	return 0;
}
```
