#pragma once
#include<iostream>

//����ཫ�����ʼ��ͼ�λ������ƻ�����������ͼ�δ��ڵĳߴ��
class enviroment_controler {   
private:
	int Width;  //���ڿ��
	int Height;  //���ڸ߶�
	std::string caption;  //���ڱ���
	color bk_color;  //���ڵı���ɫ

public:
	//Ĭ�Ϲ��캯��
	enviroment_controler() {
		Width = 640;
		Height = 480;
		caption = "default";
		bk_color;
	}
	//���ι��캯��
	enviroment_controler(int Width_, int Height_, std::string caption_, color bk_color_) {
		this->Width = Width_;
		this->Height = Height_;
		this->caption = caption_;
		this->bk_color = bk_color_;
	}

	void set_size();
	void set_caption();
	void set_color();

};

//������ʾһ����Ķ�ά����
class point {   

};

//�����ʾ����ͼ�λ�������ʹ�õ���ɫ
class color {   

};

//һ��Բ��,���������������3����Ա:���ĵ����꣬�뾶����ɫ��
class circle {  

};

//һ��������,��������б��������������Ա:��������λ�úʹ�С�����꣬��ɫ
class rectangle {   

};

//һ����������
class triangle {

};


//δ������Ҫ��ӵ���
class future {

};