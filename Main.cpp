//Includy
#include <iostream>

#include "pytanie.h"
#include "Fractal.h"
#include "Event.h"
#include "Punkt.h"
#include "Prostokat.h"
#include "Kolo.h"
#include "Kula.h"
#include "Circle.h"
#include "Square.h"
#include "Polygon.h"

using namespace std;

//Deklaracje funkcji
void licz(Polygon* p);	//Polimorfizm
void sedzia(Punkt pkt, Prostokat p); //Funkcja zaprzyjaŸniona, zajrzeæ do klasy Punkt i Prostok¹t
void quiz();	//Wczytywanie z pliku/
void fractal();	//Konstruktor
void event();	//Konstruktor/Destruktor
void rect();	//Funkcje zaprzyjaznione
void kolo();	//Dziedziczenie
void kula();	//Dziedziczenie
void polimorfizm();	//Polimorfizm

//Main
int main() {
	//quiz();		
	//fractal();	
	//event();		
	//rect();		
	//kolo();		
	//kula();
	//polimorfizm();

	return 0;
}


//Cia³a funkcji
void licz(Polygon* p) {
	p->oblicz_pole();
}
void sedzia(Punkt pkt, Prostokat p)
{
	if (pkt._x >= p._x && pkt._x <= p._x + p._width && pkt._y >= p._y && pkt._y <= p._y + p._height) {
		cout << "Punkt: " << pkt._name << " nalezy do prostokata: " << p._name;
	}
}
void quiz() {

	Pytanie p[5];
	int suma = 0;
	for (int i = 0; i < 5; i++) {
		p[i].nr_pytania = i + 1;
		p[i].wczytaj();
		p[i].zadaj();
		p[i].sprawdz();
		suma += p[i].punkt;
	}
	cout << "Koniec QUIZU! PUNKTY: " << suma;
}
void fractal() {
	Fractal f;
	f.wczytaj();
	f.oblicz();
	float liczba = f.zwroc();
	cout << liczba << endl;
}
void event() {
	//Event e("Apokalipsa zombie", 6, 7, 2045, 8, 15);
	Event e;
	e.show();

	Event e1("Apokalipsa zombie");
	e1.show();
}
void rect() {
	Punkt pkt1("A", 3, 1);
	//pkt1.wczytaj();
	Prostokat p1("Prostokat", 0, 0, 6, 4);
	//p1.wczytaj();
	sedzia(pkt1, p1);
}
void kolo() //Dziedziczenie
{
	Kolo k1("kolko", "srodek", 1, 1, 10);
	k1.wyswietl();
}
void kula() {
	Kula k("Kula", 0, 0, 4);
	k.wyswietl();
}
void polimorfizm() {
	Circle c(5);
	Square s(10);

	Polygon* p;

	p = &c;

	licz(p);
	p = &s;
	licz(p);

}