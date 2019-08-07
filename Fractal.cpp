#include "Fractal.h"
#include <iostream>
using namespace std;


void Fractal::wczytaj()
{
	cout << "Podaj licznik: ";
	cin >> _licznik;
	do {
		cout << "Podaj mianownik: ";
		cin >> _mianownik;
	} while (_mianownik == 0);
}

void Fractal::oblicz()
{
	cout << _licznik / _mianownik << endl;
}

float Fractal::zwroc()
{
	return _licznik / _mianownik;
}
