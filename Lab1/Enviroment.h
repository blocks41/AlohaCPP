#pragma once
#include "Color.h"

//这个类将负责初始化图形环境、破坏环境、设置图形窗口的尺寸等
class enviroment_controler {   
private:
	int Width;  //窗口宽度
	int Height;  //窗口高度
	LPCSTR caption;  //窗口标题
	color bk_color;  //窗口的背景色
	color paint_color;  //设置绘图颜色
	color fill_color; //设置填充色

public:
	//默认构造函数
	enviroment_controler();
	//带参构造函数
	enviroment_controler(int Width_, int Height_, LPCSTR caption_, color bk_color_, color paint_color, color fill_color_);

	void set_Width(int Width_);  //设置默认宽度
	void set_Height(int Height_);  //设置默认高度
	void set_caption(LPCSTR caption_);  //设置默认标题
	void set_bk_color(color bk_color_);  //设置默认背景色
	void set_paint_color(color paint_color_); //设置默认绘画颜色
	void set_fill_color(color fill_color_); //设置默认填充颜色
	void init_enviroment();  //创建窗口
	void close_graphic();  //关闭窗口
};

