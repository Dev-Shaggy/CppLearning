#include "Punkt.h"
#include <iostream>
using namespace std;
Punkt::Punkt(string name, float x, float y)
{
	_name = name;
	_x = x;
	_y = y;
}

void Punkt::wczytaj()
{
	cout << "Podaj x: "; cin >> _x;
	cout << "Podaj y: "; cin >> _y;
	cout << "Podaj nazwe: "; cin >> _name;
}

void Punkt::wyswietl()
{
	cout << _name << "(" << _x << "," << _y << ")" << endl;
}
