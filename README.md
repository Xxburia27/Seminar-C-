# C ++ Seminar - CV 03
## Ukázka z třídy Complex.
###.c
```cpp
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
```
###.h
```cpp
class Complex
{
	double real, imag;

public:
	void setr(double r);
	void seti(double i);
	double getr();
	double geti();
	double modul(void);
	double faze(void);
	void tisk(void);
	

};
```
