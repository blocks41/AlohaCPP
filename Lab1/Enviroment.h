#pragma once
#include "Color.h"

//����ཫ�����ʼ��ͼ�λ������ƻ�����������ͼ�δ��ڵĳߴ��
class enviroment_controler {   
private:
	int Width;  //���ڿ��
	int Height;  //���ڸ߶�
	LPCSTR caption;  //���ڱ���
	color bk_color;  //���ڵı���ɫ
	color paint_color;  //���û�ͼ��ɫ
	color fill_color; //�������ɫ

public:
	//Ĭ�Ϲ��캯��
	enviroment_controler();
	//���ι��캯��
	enviroment_controler(int Width_, int Height_, LPCSTR caption_, color bk_color_, color paint_color, color fill_color_);

	void set_Width(int Width_);  //����Ĭ�Ͽ��
	void set_Height(int Height_);  //����Ĭ�ϸ߶�
	void set_caption(LPCSTR caption_);  //����Ĭ�ϱ���
	void set_bk_color(color bk_color_);  //����Ĭ�ϱ���ɫ
	void set_paint_color(color paint_color_); //����Ĭ�ϻ滭��ɫ
	void set_fill_color(color fill_color_); //����Ĭ�������ɫ
	void init_enviroment();  //��������
	void close_graphic();  //�رմ���
};

