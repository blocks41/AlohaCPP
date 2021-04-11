#include <graphics.h> //包含EGE的头文件
#include "Enviroment.h"
#include "Circle.h"
#include "Color.h"

int main()
{
	enviroment_controler graphyic1;
	Circle c1;

	graphyic1.init_enviroment();
	c1.paint();

	getch();							//暂停，等待键盘按键

	graphyic1.close_graphic();

	return 0;
}
