#include<graphics.h>
void main()
{
  int gd=DETECT,gm;
  initgraph(&gd, &gm,"C:\\TurboC3\\BGI");
  line(50, 50, 150, 50);
  line(25, 100, 175, 100);
  line(50, 50, 25, 100);
  line(150, 50, 175, 100);
  line(50, 100, 50, 200);
  line(150, 100, 150, 200);
  line(50, 200, 150, 200);
  line(90, 200, 90, 150);
  line(110, 200, 110, 150);
  line(90, 150, 110, 150);
  line(60, 140, 80, 140);
  line(60, 150, 80, 150);
  line(60, 160, 80, 160);
  line(60, 140, 60, 160);
  line(70, 140, 70, 160);
  line(80, 140, 80, 160);
  line(120, 140, 140, 140);
  line(120, 150, 140, 150);
  line(120, 160, 140, 160);
  line(120, 140, 120, 160);
  line(130, 140, 130, 160);
  line(140, 140, 140, 160);
  getch();
  closegraph();
}