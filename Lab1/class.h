#pragma once
#include<iostream>

//这个类将负责初始化图形环境、破坏环境、设置图形窗口的尺寸等
class enviroment_controler {   
private:
	int Width;  //窗口宽度
	int Height;  //窗口高度
	std::string caption;  //窗口标题
	color bk_color;  //窗口的背景色

public:
	//默认构造函数
	enviroment_controler() {
		Width = 640;
		Height = 480;
		caption = "default";
		bk_color;
	}
	//带参构造函数
	enviroment_controler(int Width_, int Height_, std::string caption_, color bk_color_) {
		this->Width = Width_;
		this->Height = Height_;
		this->caption = caption_;
		this->bk_color = bk_color_;
	}

	void set_size();
	void set_caption();
	void set_color();

};

//这个类表示一个点的二维坐标
class point {   

};

//该类表示可在图形化环境中使用的颜色
class color {   

};

//一个圆类,在这个类中至少有3个成员:中心的坐标，半径和颜色。
class circle {  

};

//一个矩形类,在这个类中必须至少有两类成员:决定矩形位置和大小的坐标，颜色
class rectangle {   

};

//一个三角形类
class triangle {

};


//未来可能要添加的类
class future {

};