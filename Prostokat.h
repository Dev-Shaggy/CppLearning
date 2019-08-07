#pragma once
#include <iostream>

class Punkt;
using namespace std;
class Prostokat
{
	string _name;
	float _x, _y, _width, _height;
	
public:
	Prostokat(string = "brak", float = 0, float = 0, float = 1, float = 1);
	void wczytaj();
	
	friend void sedzia(Punkt pkt, Prostokat p);
};

