#include<graphics.h>
void way8pix(int x, int y, int xc, int yc, int r){
  putpixel(xc+x,yc+y,15);
  putpixel(xc+y,yc+x,15);
  putpixel(xc+x,yc-y,15);
  putpixel(xc+y,yc-x,15);

  putpixel(xc-y+2*r,yc+x,15);
  putpixel(xc-x+2*r,yc+y,15);
  putpixel(xc-x+2*r,yc-y,15);
  putpixel(xc-y+2*r,yc-x,15);
}
void mid_circle(int xc, int yc, int r){
  int x=0,y=r,d=1-r;
  while(x<=y){
    way8pix(x, y, xc, yc, r);
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
  initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
  mid_circle(150, 150, 50);
  getch();
  closegraph();
}