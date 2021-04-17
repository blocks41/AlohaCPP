#include "Circle.h"

Circle::Circle() {
	this->start.set_x(100);
	this->start.set_y(100);
	this->radius = 20;
	this->edg_color = 0xE6E6FA;
	this->fill_color = 0x9370DB;
}

Circle::Circle(int x_, int y_, int radius_, color edg_color_, color fill_color_) {
	this->start.set_x(x_);
	this->start.set_y(y_);
	this->radius = radius_;
	this->edg_color = edg_color_;
	this->fill_color = fill_color_;
}

void Circle::set_point(int x_, int y_) {
	this->start.set_x(x_);
	this->start.set_y(y_);
}
void Circle::set_radius(int radius_) {
	this->radius = radius_;
}
void Circle::set_edg_color(color edg_color_) {
	this->edg_color = edg_color_;
}
void Circle::set_fill_color(color fill_cilor_) {
	this->fill_color = fill_cilor_;
}
std::string Circle::get_point() {
	return (std::to_string(this->start.get_x()), std::to_string(this->start.get_y()));
}

int Circle::get_radius() {
	return this->radius;
}
color_t Circle::get_edg_color() {
	return this->edg_color.get_color();
}
color_t Circle::get_fill_color() {
	return this->fill_color.get_color();
}

void Circle::paint() {
	setcolor(edg_color.get_color());
	setfillcolor(fill_color.get_color());
	circle(start.get_x(), start.get_y(), radius);
}