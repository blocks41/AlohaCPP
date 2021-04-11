#pragma once
#include <graphics.h>

//该类表示可在图形化环境中使用的颜色
class color {
private:
	color_t _color;

public:
	color();
	color(color_t color_);

	void set_color(color_t color_);
	color_t get_color();
};
