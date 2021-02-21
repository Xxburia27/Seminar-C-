# C ++ Seminar - CV 03
## Třída Complex
### .cpp soubor
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
.h soubor
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
### Source.cpp
```cpp
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
```
