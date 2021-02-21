#include <iostream>
#include "Complex.h"
#include "Math.h"

using namespace std;

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
	cout << "Modul je: " << modul() << endl;
	cout << "Faze je: " << faze() << endl;
}

