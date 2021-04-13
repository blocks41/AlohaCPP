#include<iostream>
#include"Date.h"
#include"employee.h"

//任务1：构造Employee对象e1,拷贝构造e2
//任务2：调试模式观察e1和e2的birthday成员
//任务3：添加拷贝构造函数实现深拷贝
//任务4：调试模式观察e1和e2的birthday成员

int Employee::EmployeeNum = 0;

int main()
{
	Employee e1;
	Employee e2{ e1 };
	Employee e3{ "zou", Gender::male, Date(1999, 6, 17) };

	std::cout << e1.tostring()<< std::endl;
	std::cout << e2.tostring() << std::endl;
	std::cout << e3.tostring() << std::endl;

	return 0;
}