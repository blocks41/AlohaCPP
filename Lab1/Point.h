#pragma once

class point {
private:
	int x;
	int y;
public:
	point();
	point(int x_, int y_);
	void set_x(int x_);
	void set_y(int y_);
	int get_x();
	int get_y();
};
