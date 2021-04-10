#pragma once
#include"shape.h"
#include<string>

class Circle :public Shape{
private:
	double radius;

public:
	Circle();
	Circle(double radius_, Color color_, bool filled_);
	double getArea();
	double getRadius() const;
	void setRadius(double radius);

	string toString();
};
