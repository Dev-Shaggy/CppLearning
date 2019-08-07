#pragma once
#include <iostream>
using namespace std;
class Event
{
private:
	int _day, _month, _year;
	int _hour, _minutes;
	string _name;

public:
	Event(string = "brak", int = 1, int = 1, int = 2000, int = 0, int = 0);
	~Event();

	void load();
	void show();
};

