#include "Square.h"
#include <iostream>
using namespace std;
Square::Square(float a)
{
	_a = a;
}

void Square::oblicz_pole()
{
	cout << "Pole kwadratu: " << _a * _a << endl;
}
