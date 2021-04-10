#include"employee.h"

Employee::Employee(std::string name_, Gender gender_, Date birthday_) :name{ name_ }, gender{ gender_ }
{
	EmployeeNum++;
	this->birthday = new Date{ birthday_ };  //虽然在Date类中没有声明，但是系统有默认拷贝构造函数

}

Employee::Employee() :Employee("Alan", Gender::male, Date(2000, 5, 6)) {}

Employee::~Employee()
{
	EmployeeNum--;
	delete birthday;
	birthday = nullptr;
}

Employee::Employee(const Employee& a)   
{
	EmployeeNum++;
	this->name = a.name;
	this->gender = a.gender;
	this->birthday = new Date{ *(a.birthday)};
}

void Employee::setName(std::string name) 
{ 
	this->name = name;
}

void Employee::setGender(Gender gender) 
{
	this->gender = gender; 
}

void Employee::setBirthday(Date birthday) 
{
	*(this->birthday) = birthday; 
}

std::string Employee::getName() 
{
	return name; 
}

Gender Employee::getGender() 
{
	return gender; 
}

Date Employee::getbirthday() 
{
	return *birthday; 
}

std::string Employee::tostring()
{
	return (name + (gender == Gender::male ? std::string(" male ") : std::string(" female ")) +
		birthday->toString());
}
