#include "Event.h"
#include <iostream>
using namespace std;

Event::Event(string name, int day, int month, int year, int hour, int minutes)
{
	_name = name;
	_day = day;
	_month = month;
	_year = year;
	_hour = hour;
	_minutes = minutes;
}

Event::~Event()
{
	cout << "Usuwam obiekt!";
}

void Event::load()
{
	cout << endl<<"Nazwa wydarzenia: ";
	cin >> _name;
	cout << "Dzien: ";
	cin >> _day;
	cout << "Miesiac: ";
	cin >> _month;
	cout << "Rok: ";
	cin >> _year;
	cout << "Godzina: ";
	cin >> _hour;
	cout << "Minuta: ";
	cin >> _minutes;
}

void Event::show()
{
	cout << endl << _name << " " << _day << "." << _month << "." << _year << " " << _hour << ":" << _minutes << endl;
}
