#include"shape.h"
#include<array>

using std::string;
using  std::array;

Shape::Shape() = default;
	
Shape::Shape(Color color_, bool filled_) {
		color = color_;
		filled = filled_;
	}

Color Shape::getColor() { return color; }
void Shape::setColor(Color color_) { color = color_; }
bool Shape::isfilled() { return filled; }
void Shape::setFilled(bool filled_) { filled = filled_; }

string Shape::toString() {
	return "shape: " + colorToSting() + " " + filledTostring();
}

string Shape::colorToSting()
{
	return colorName[static_cast<int>(color)];
}
string Shape::filledTostring()
{
	return (filled ? "filled"s : "not filled"s);
}