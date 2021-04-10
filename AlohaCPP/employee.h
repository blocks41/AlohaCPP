#pragma once

#include<iostream>
#include<string>
#include "Date.h"

enum class Gender {
	male,
	female
};

class Employee {
private:
	std::string name;
	Gender gender;
	Date *birthday;
	static int EmployeeNum;

public:
	Employee(std::string name, Gender gender, Date birthday);
	Employee();
	~Employee();       //  如果包含析构函数且用默认拷贝，在默认拷贝构造时，birthday会被delete两次
	                   //一次是自己定义的，一次不知道是啥的
	Employee(const Employee& a);      //因此用自己声明的拷贝构造函数取代


	void setName(std::string name);
	void setGender(Gender gender);
	void setBirthday(Date birthday);
	std::string getName();
	Gender getGender();
	Date getbirthday();
	std::string tostring();
};