#pragma once
#include "Polygon.h"
class Circle :
	public Polygon
{
	float _r;

public:
	Circle(float = 1);
	virtual void oblicz_pole();
};

