#pragma once
#include "Punkt.h"
#include <iostream>

using namespace std;
class Kolo :
	public Punkt
{
	string _name;
protected:
	float _r;

public:
	Kolo(string = "brak", string = "brak", float = 0, float = 0, float = 1);
	void wyswietl();
	void promien();
};

