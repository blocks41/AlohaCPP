#pragma once

class Circle {
private:
	int x; //������
	int y;  //������
	int radius;  //�뾶
public:
	Circle();
	Circle(int x, int y, int radius);
	void set_parameter(int x_, int y_, int radius_);
	void paint();
};