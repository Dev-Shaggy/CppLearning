#include "Kolo.h"
#define _USE_MATH_DEFINES
#include <math.h>

Kolo::Kolo(string kname, string pname, float x, float y, float r) : Punkt(pname, x, y)
{
	_r = r;
	_name = kname;
}

void Kolo::wyswietl()
{
	cout << "Kolo: " << _name << " srodek: ";
	Punkt::wyswietl();
	cout << "Promien: " << _r << endl;
	cout << "Pole: " << M_PI * _r * _r;
}

void Kolo::promien()
{
	cout << _r;
}
