#include <iostream>
#include"StackOfInteger.h"

int main() 
{
	StackOfIntegers s1;

	for (int i = 0; i < 50; i++)
	{
		s1.push(i + 1);
	}

	std::cout << "Stack size = " << s1.getSize() << std::endl;
	std::cout << "Top element is : " << s1.peek() << std::endl;
	int size = s1.getSize();
	for (int i = 0; i < size; i++)
	{
		std::cout << s1.pop() << " ";
	}
	std::cout << "\nStack now is empty: " << s1.empty() << std::endl;

}