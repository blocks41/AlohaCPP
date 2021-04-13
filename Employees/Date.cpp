#include"Date.h"

Date::Date() = default;

Date::Date(int y, int m, int d) :year{ y }, month{ m }, day{ d }{}

int Date::getYear()
{
	return year; 
}

int Date::getMonth() 
{
	return month; 
}

int Date::getDay() 
{
	return day; 
}

void Date::setYear(int y) 
{
	year = y;
}

void Date::setMonth(int m) 
{
	month = m; 
}

void Date::setDay(int d) 
{
	day = d; 
}

std::string Date::toString()
{
	return (std::to_string(year) + "-" + std::to_string(month) + "-" + std::to_string(day));
}