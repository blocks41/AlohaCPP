#pragma once
#include <iostream>

/*
-elements:int[100]      存放栈元素的数组
-size:int               栈内元素数量

+Stack()      空栈的构造函数
+empty():bool           判断栈空否
+peek():int             读取栈顶元素而不移除
+push(value:int):int    将一个数据压栈
+pop():int              弹出一个数据
+getSize():int          返回栈内数量
*/

template<typename T>
class Stack {
private:
	T elements[100];
	int size{ 0 };

public:
	Stack();
	bool empty();
	T peek();
	T push(T value);
	T pop();
	int getSize();
};

template<typename T>
Stack<T>::Stack(){
	for (auto& i : elements)
	{
		i = 0;
	}
}
template<typename T>
bool Stack<T>::empty(){
	return (size == 0 ? true : false);
}
template<typename T>
T Stack<T>::peek(){
	return elements[size - 1];
}
template<typename T>
T Stack<T>::push(T value){
	elements[size] = value;
	size++;

	return value;
}
template<typename T>
T Stack<T>::pop(){
	int i = elements[size - 1];
	elements[size - 1] = 0;
	size--;

	return i;
}
