#include <graphics.h>					//����EGE��ͷ�ļ�

int main()
{
	initgraph(640, 480);				//��ʼ��ͼ�ν���

	setcolor(EGERGB(0xFF, 0x0, 0x0));	//���û滭��ɫΪ��ɫ

	setbkcolor(WHITE);					//���ñ�����ɫΪ��ɫ

	circle(320, 240, 100);				//��Բ

	setcolor(EGERGB(0xFF, 0x0, 0x0));	//���û滭��ɫΪ��ɫ
	circle(300, 220, 100);				//��Բ

	getch();							//��ͣ���ȴ����̰���

	closegraph();						//�ر�ͼ�ν���

	return 0;
}
