#pragma once

class Circle {
private:
	double radius = 2.0;

public:
	Circle()=default;
	Circle(double radius_);
	double getRadius();
	void setRadius(double radius_);
	double getArea();
};