#pragma once
#include <graphics.h>
#include "Color.h"
#include "Point.h"
#include <string>

class Rectan {
private:
	point top;
	point bottom;
	color edg_color;
	color fill_color;
public:
	Rectan();
	Rectan(int x1, int y1, int x2, int y2, color edg_color_, color fill_color_);
	void set_top(int x_, int y_);
	void set_bottom(int x_, int y_);
	void set_edg_color(color edg_color_);
	void set_fill_color(color fill_cilor_);
	std::string get_top();
	std::string get_bottom();
	color_t get_edg_color();
	color_t get_fill_color();
	void paint();
};