#include<graphics.h>
void main(){
  int gd=DETECT, gm;
  initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
  circle(150, 150, 100);
  circle(100, 100, 20);
  circle(200, 100, 20);
  circle(100, 100, 5);
  circle(200, 100, 5);
  line(150, 140, 160, 170);
  line(160, 170, 140, 170);
  line(140, 170, 150, 140);
  arc(150, 155, 195, 345, 50);
  arc(150, 165, 185, 355, 50);
  getch();
  closegraph();
}