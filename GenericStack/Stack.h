#pragma once
#include <iostream>

/*
-elements:int[100]      ���ջԪ�ص�����
-size:int               ջ��Ԫ������

+Stack()      ��ջ�Ĺ��캯��
+empty():bool           �ж�ջ�շ�
+peek():int             ��ȡջ��Ԫ�ض����Ƴ�
+push(value:int):int    ��һ������ѹջ
+pop():int              ����һ������
+getSize():int          ����ջ������
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
