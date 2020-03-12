#include<graphics.h>
void main(){
  int gd=DETECT, gm, x, up, down ,i;
  initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
  x = getmaxx()/2;
  up = 30;
  down = getmaxy()-30;
  for(i=up;i<=down;i++){
   circle(x, i, 30);
   delay(10);
   cleardevice();
  }
  for(i=down;i>=up;i--){
    circle(x, i, 30);
    delay(10);
    cleardevice();
  }
  getch();
  closegraph();
}