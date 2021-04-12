#include "Point.h"

point::point() {
	this->x = 100;
	this->y = 100;
}
point::point(int x_, int y_) {
	this->x = x_;
	this->y = y_;
}
void point::set_x(int x_) {
	this->x = x_;
}
void point::set_y(int y_) {
	this->y = y_;
}
int point::get_x() {
	return x;
}
int point::get_y() {
	return y;
}
