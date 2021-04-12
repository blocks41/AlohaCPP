#include "Rectangle.h"

Rectan::Rectan() {
	this->top.set_x(100);
	this->top.set_y(100);
	this->bottom.set_x(300);
	this->bottom.set_y(300);
	this->edg_color = 0xE6E6FA;
	this->fill_color = 0x9370DB;
}

Rectan::Rectan(int x1, int y1, int x2, int y2, color edg_color_, color fill_color_) {
	this->top.set_x(x1);
	this->top.set_y(y1);
	this->bottom.set_x(x2);
	this->bottom.set_y(y2);
	this->edg_color = edg_color_;
	this->fill_color = fill_color_;
}

void Rectan::set_top(int x_, int y_) {
	this->top.set_x(x_);
	this->top.set_y(y_);
}
void Rectan::set_bottom(int x_, int y_) {
	this->bottom.set_x(x_);
	this->bottom.set_y(y_);
}
void Rectan::set_edg_color(color edg_color_) {
	this->edg_color = edg_color_;
}
void Rectan::set_fill_color(color fill_cilor_) {
	this->fill_color = fill_cilor_;
}
std::string Rectan::get_top() {
	return (std::to_string(this->top.get_x()), std::to_string(this->top.get_y()));
}
std::string Rectan::get_bottom() {
	return (std::to_string(this->top.get_x()), std::to_string(this->top.get_y()));
}

color_t Rectan::get_edg_color() {
	return this->edg_color.get_color();
}
color_t Rectan::get_fill_color() {
	return this->fill_color.get_color();
}

void Rectan::paint() {
	setcolor(edg_color.get_color());
	setfillcolor(fill_color.get_color());
	rectangle(top.get_x(), top.get_y(), bottom.get_x(), bottom.get_y());
}