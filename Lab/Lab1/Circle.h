#pragma once
#include <graphics.h>
#include "Color.h"
#include "Point.h"
#include <string>

class Circle {
private:
	point start;
	int radius;  //°ë¾¶
	color edg_color;
	color fill_color;
public:
	Circle();
	Circle(int x_, int y_, int radius_, color edg_color_, color fill_color_);
	void set_point(int x_, int y_);
	void set_radius(int radius_);
	void set_edg_color(color edg_color_);
	void set_fill_color(color fill_cilor_);
	std::string get_point();
	int get_radius();
	color_t get_edg_color();
	color_t get_fill_color();
	void paint();
};