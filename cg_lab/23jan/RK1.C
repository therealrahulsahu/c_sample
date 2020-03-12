#include<graphics.h>
void main(){
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
	setcolor(WHITE);
	rectangle(50, 50, 275, 100);
	setfillstyle(SOLID_FILL, RED);
	floodfill(51,51, WHITE);
	rectangle(50, 100, 275, 150);
	setfillstyle(SOLID_FILL, WHITE);
	floodfill(51, 101, WHITE);
	rectangle(50, 150, 275, 200);
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(51, 151, WHITE);
	setcolor(BLUE);
	circle(162, 125, 22);
	line(162, 103, 162, 147);
	line(140, 125, 184, 125);
	line(50, 50, 50, 400);
	getch();
	closegraph();
}