#include<iostream>
#include"Date.h"
#include"employee.h"

//����1������Employee����e1,��������e2
//����2������ģʽ�۲�e1��e2��birthday��Ա
//����3����ӿ������캯��ʵ�����
//����4������ģʽ�۲�e1��e2��birthday��Ա

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