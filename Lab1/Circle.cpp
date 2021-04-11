#include <graphics.h>
#include "Circle.h"

Circle::Circle() {
	this->x = 100;
	this->y = 100;
	this->radius = 20;
}

Circle::Circle(int x_, int y_, int radius_) {
	this->x = x_;
	this->y = y_;
	this->radius = radius_;
}

void Circle::set_parameter(int x_, int y_, int radius_) {
	this->x = x_;
	this->y = y_;
	this->radius = radius_;
}

void Circle::paint() {
	circle(x, y, radius);
}