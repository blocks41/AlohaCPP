#include<iostream>
#include<string>
#include"Circle.h"
#include"Rectangle.h"
#include"shape.h"
//����shape/Circle/Rectangle����
//�����������û��ຯ��toString

int main() {
	Shape s1{ Color::blue, false };      //���ǲ����Ե�
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