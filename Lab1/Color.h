#pragma once
#include <graphics.h>

//�����ʾ����ͼ�λ�������ʹ�õ���ɫ
class color {
private:
	color_t _color;

public:
	color();
	color(color_t color_);

	void set_color(color_t color_);
	color_t get_color();
};
