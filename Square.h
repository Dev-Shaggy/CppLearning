#pragma once
#include "Polygon.h"
class Square :
	public Polygon
{
	float _a;
public:
	Square(float = 1);
	virtual void oblicz_pole();
};

