#include <graphics.h> //����EGE��ͷ�ļ�
#include "Enviroment.h"
#include "Circle.h"
#include "Color.h"

int main()
{
	enviroment_controler graphyic1;
	Circle c1;

	graphyic1.init_enviroment();
	c1.paint();

	getch();							//��ͣ���ȴ����̰���

	graphyic1.close_graphic();

	return 0;
}
