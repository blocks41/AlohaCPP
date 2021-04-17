#pragma once

/*
-elements:int[100]      ���ջԪ�ص�����
-size:int               ջ��Ԫ������

+StackOfIntegers()      ��ջ�Ĺ��캯��
+empty():bool           �ж�ջ�շ�
+peek():int             ��ȡջ��Ԫ�ض����Ƴ�
+push(value:int):int    ��һ������ѹջ
+pop():int              ����һ������
+getSize():int          ����ջ������
*/

class StackOfIntegers {
private:
	int elements[100];
	int size{ 0 };

public:
	StackOfIntegers();
	bool empty();
	int peek();
	int push(int value);
	int pop();
	int getSize();
};