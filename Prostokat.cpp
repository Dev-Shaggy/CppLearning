#include "Prostokat.h"

Prostokat::Prostokat(string name, float x, float y, float width, float height)
{
	_name = name;
	_x = x;
	_y = y;
	_width = width;
	_height = height;
}

void Prostokat::wczytaj()
{
	cout << "Podaj x lewego dolnego wierzcholka: "; cin >> _x;
	cout << "Podaj y lewego dolnego wierzcholka: "; cin >> _y;
	cout << "Podaj wysokosc: "; cin >> _height;
	cout << "Podaj szerokosc: "; cin >> _width;
	cout << "Podaj nazwe: "; cin >> _name;
}
