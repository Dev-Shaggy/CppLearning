#pragma once
#include <iostream>
using namespace std;
class Fractal
{
private:
	float _licznik, _mianownik;
public:
	void wczytaj();
	void oblicz();
	float zwroc();
};

