#include <graphics.h>
#include "Color.h"

color::color() {
	this->_color = 0xFFB6C1;   //初始值为浅粉色
}

color::color(color_t color_) {
	this->_color = color_;
}

void color::set_color(color_t color_) {
	this->_color = color_;
}

color_t color::get_color() {
	return _color;
}