#include <graphics.h> //����EGE��ͷ�ļ�
#include "Enviroment.h"
#include "Circle.h"
#include "Color.h"
#include "Rectangle.h"

int main()
{
	enviroment_controler graphyic1;  //��ʼ��
	Circle c1;
	Rectan r1;

	c1.set_edg_color(0xDC143C);
	c1.set_fill_color(0x48D1CC);

	graphyic1.init_enviroment();
	c1.paint();
	r1.paint();

	getch();							//��ͣ���ȴ����̰���

	graphyic1.close_graphic();

	return 0;
}
