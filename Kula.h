#pragma once
#include "Kolo.h"
#include <iostream>
using namespace std;
class Kula :
	public Kolo
{
	string _name;
public:
	Kula(string = "Kula", float = 0, float = 0, float = 1);
	void wyswietl();
};

