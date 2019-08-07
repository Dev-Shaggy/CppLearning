#pragma once
#include <iostream>

class Prostokat;
using namespace std;
class Punkt
{
	float _x, _y;
	string _name;

public:
	Punkt(string = "A", float = 0, float = 0);
	void wczytaj();
	void wyswietl();

	friend void sedzia(Punkt pkt, Prostokat p);
};

