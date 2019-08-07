#include "Circle.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
using namespace std;

Circle::Circle(float radius)
{
	_r = radius;
}

void Circle::oblicz_pole()
{
	cout << "Pole kola: " << M_PI * _r * _r << endl;
}
