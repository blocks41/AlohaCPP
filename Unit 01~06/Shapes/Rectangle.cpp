#include"Rectangle.h"

Rectangle::Rectangle() = default;
Rectangle::Rectangle(double w, double h, Color color_, bool filled_) :Shape(color_, filled_){
	width = w;
	height = h;
}

double Rectangle::getWidth() const {
	return width;
}

double Rectangle::getHeight() const {
	return height;
}

void Rectangle::setWidth(double w) {
	width = w;
}

void Rectangle::setHeight(double h) {
	height = h;
}

double Rectangle::getArea()  {
	return width * height;
}

string Rectangle::toString()
{
	return ("Rectangle: width " + std::to_string(width) + ", height "\
		+std::to_string(height) + ", "+ colorToSting() + " " + filledTostring());
}