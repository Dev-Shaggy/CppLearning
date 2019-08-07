#pragma once

#include <iostream>
using namespace std;

class Pytanie
{
public:
	string tresc;
	string a, b, c, d;
	int nr_pytania;
	string poprawna;
	string odpowiedz;
	int punkt;

	void wczytaj();//Wczytuje pytanie z pliku
	void zadaj();//Zadaje pytanie
	void sprawdz();
};

