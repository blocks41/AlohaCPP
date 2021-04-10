#pragma once

#include <iostream>
#include <string>

class Date {
private:
	int year{ 2020 }, month{ 10 }, day{ 22 };

public:
	Date();
	Date(int y, int m, int d);
	

	int getYear();
	int getMonth();
	int getDay();
	void setYear(int y);
	void setMonth(int m);
	void setDay(int d);

	std::string toString();
};
