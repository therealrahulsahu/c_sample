#include<graphics.h>
void t_line(int x1, int y1, int x2, int y2, int tx, int ty){
	line(x1+tx, y1+ty, x2+tx, y2+ty);
}	
void triangle_2(int x1, int y1, int x2, int y2, int x3, int y3, int x_ax, int y_ax){
	t_line(x1, y1, x2, y2, x_ax, y_ax);
	t_line(x2, y2, x3, y3, x_ax, y_ax);
	t_line(x3, y3, x1, y1, x_ax, y_ax);
}
void main(){
	int gd=DETECT, gm, x1, y1, x2, y2, x3, y3, type, x_ax=getmaxx()/2, y_ax=getmaxy()/2;
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");
	printf("Enter x1 y1 :");
	scanf("%d%d", &x1, &y1);
	printf("Enter x2 y2 :");
	scanf("%d%d", &x2, &y2);
	printf("Enter x3 y3 :");
	scanf("%d%d", &x3, &y3);
	cleardevice();
	triangle_2(x1, y1, x2, y2, x3, y3, x_ax, y_ax);
	printf("1 :Reflection x-axis \n2 : Reflection y-axis\nEnter : ");
	scanf("%d", &type);
	cleardevice();
	if(type==1){
		triangle_2(-x1, y1, -x2, y2, -x3, y3, x_ax, y_ax);
	}else if(type==2){
		triangle_2(x1, -y1, x2, -y2, x3, -y3, x_ax, y_ax);
	}else{
		printf("Invalid Input\n");
	}
	getch();
	closegraph();
}
