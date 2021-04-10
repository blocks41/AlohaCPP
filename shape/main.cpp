#include<iostream>
#include<string>
#include"Circle.h"
#include"Rectangle.h"
#include"shape.h"
//创建shape/Circle/Rectangle对象
//用子类对象调用基类函数toString

int main() {
	Shape s1{ Color::blue, false };      //这是不可以的
	Circle c1{ 3.9 , Color::green, true};
	Rectangle r1{ 4.0, 1.0, Color::red, true };

	Shape* p = &c1;

	std::cout << s1.toString()<< std::endl;
	std::cout << c1.toString() << std::endl;
	std::cout << r1.toString() << std::endl;
	std::cout << c1.getArea() << std::endl;
	std::cout << r1.getArea() << std::endl;
//	std::cout << p->getArea() << std::endl;

	return 0;
}