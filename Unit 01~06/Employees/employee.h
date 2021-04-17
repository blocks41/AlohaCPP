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
	~Employee();       //  �������������������Ĭ�Ͽ�������Ĭ�Ͽ�������ʱ��birthday�ᱻdelete����
	                   //һ�����Լ�����ģ�һ�β�֪����ɶ��
	Employee(const Employee& a);      //������Լ������Ŀ������캯��ȡ��


	void setName(std::string name);
	void setGender(Gender gender);
	void setBirthday(Date birthday);
	std::string getName();
	Gender getGender();
	Date getbirthday();
	std::string tostring();
};