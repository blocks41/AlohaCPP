#pragma once
#include"shape.h"
//创建Ranctangle类，从Shape类继承

class Rectangle :public Shape{
private:
	double width{ 1.0 };
	double height{ 1.0 };
public:
	Rectangle();
	Rectangle(double w, double h, Color color_, bool filled_);

	double getWidth() const;
	double getHeight() const;
	void setWidth(double w);
	void setHeight(double h);

	double getArea() ;
	string toString();
};