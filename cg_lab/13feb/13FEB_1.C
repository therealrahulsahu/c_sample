#include<graphics.h>
void way8pix(int x, int y, int xc, int yc){
  putpixel(xc+x,yc+y,8);
  putpixel(xc+y,yc+x,1);
  putpixel(xc+x,yc-y,2);
  putpixel(xc+y,yc-x,3);
  putpixel(xc-y,yc+x,4);
  putpixel(xc-x,yc+y,5);
  putpixel(xc-x,yc-y,6);
  putpixel(xc-y,yc-x,7);
}
void mid_circle(int xc, int yc, int r){
  int x=0,y=r,d=1-r;
  while(x<=y){
    way8pix(x, y, xc, yc);
    if(d<0){
      d=d+2*x+3;
    }else{
      d=d+2*(x-y)+5;
      y--;
    }
    x++;
  }
}
void main(){
  int gd=DETECT, gm;
  initgraph(&gd, &gm, "c:\\turboc3\\bgi");
  mid_circle(150, 150, 50);
  getch();
  closegraph();
}