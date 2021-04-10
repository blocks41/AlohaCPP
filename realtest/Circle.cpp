#include<iostream>
#include"Circle.h"

Circle::Circle(double radius_)
{
	this->radius = radius_;
}

double Circle::getRadius()
{
	return radius;
}
void Circle::setRadius(double radius_)
{
	this->radius = radius_;
}
double Circle::getArea()
{
	return radius * radius * 3.14;
}