//Author:Syed Shafkatul Hassan
//Date:2/10/2023
#include <graphics.h>
int main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "");
	line(100, 200, 110, 350);//x1,y1,x2,y2
	getch();//It will hold screen
	closegraph();
}
