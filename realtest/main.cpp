#include <iostream>
#include"Circle.h"

using namespace std;

int main()
{
	Circle a;

	cout << a.getRadius();

	a.setRadius(10.0);

	cout << a.getRadius();
}