#include "Kula.h"
#define _USE_MATH_DEFINES
#include <math.h>
Kula::Kula(string name, float x, float y, float r) :Kolo(name,name,x,y,r)
{
	_name = name;
}

void Kula::wyswietl()
{
	Kolo::wyswietl();
	cout << "Promien: " << _r;
	cout<<"Objetosc: "<<4.0/3.0* M_PI* _r* _r* _r;

}
