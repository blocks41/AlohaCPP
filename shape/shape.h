#pragma once
#include<string>
#include<array>

using std::string;
using std::array;
using namespace std::string_literals;    //Ϊ��ʹ��""s

enum class Color {      //��ϸ�������ϲ�
	white, black, red, green, blue, yellow
};

class Shape {
private:
	Color color{ Color::black };
	bool filled{ false };
	array<string, 6> colorName{ "white"s, "black"s, "red"s, "green"s, "blue"s, "yellow"s };
public:
	Shape();
	Shape(Color color_, bool filled_);

	Color getColor();
	void setColor(Color color_);
	bool isfilled();
	void setFilled(bool filled_);

	string toString();
	string colorToSting();
	string filledTostring();

//	virtual double getArea() = 0;
};