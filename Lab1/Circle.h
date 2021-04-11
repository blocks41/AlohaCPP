#pragma once

class Circle {
private:
	int x; //ºá×ø±ê
	int y;  //×Ý×ø±ê
	int radius;  //°ë¾¶
public:
	Circle();
	Circle(int x, int y, int radius);
	void set_parameter(int x_, int y_, int radius_);
	void paint();
};