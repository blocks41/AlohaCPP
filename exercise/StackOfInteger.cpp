#include"StackOfInteger.h"

StackOfIntegers::StackOfIntegers()
{
	for (int& i: elements )
	{
		i = 0;
	}
}

bool StackOfIntegers::empty()
{
	return (size == 0 ? true : false);
}

int StackOfIntegers::peek()
{
	return elements[size - 1];
}

int StackOfIntegers::push(int value)
{
	elements[size] = value;
	size++;

	return value;
}

int StackOfIntegers::pop()
{
	int i = elements[size - 1];
	elements[size - 1] = 0;
	size--;

	return i;
}

int StackOfIntegers::getSize()
{
	return size;
}