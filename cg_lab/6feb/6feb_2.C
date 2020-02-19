#include<graphics.h>
#include<math.h>
#include<stdio.h>
int sign(int n){
  if(n<0){
    return -1;
  }
  return 1;
}
void bres_line(int x1, int y1, int x2, int y2){
  int x,y,dx,dy,s1,s2,inter,d,dt,i,ds;
  x=x1;
  y=y1;
  dx=abs(x2-x1);
  dy=abs(y2-y1);
  s1=sign(x2-x1);
  s2=sign(y2-y1);
  if(dy>dx){
    dx = (dx+dy)-(dy=dx);
    inter=1;
  }else{
    inter=0;
  }
  d=2*dy-dx;
  ds=2*dy;
  dt=2*(dy-dx);
  putpixel(x,y,WHITE);
  for(i=1;i<=dx;i++){
    if(d<0){
      if(inter==1){
	      y+=s2;
      }else{
	      x+=s1;
      }
      d+=ds;
    }else{
      y+=s2;
      x+=s1;
      d+=dt;
    }
    putpixel(x,y,WHITE);
  }
}
void main(){
  int gd=DETECT, gm;
  initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
  cleardevice();
  bres_line(100, 100, 200, 300);
  getch();
  closegraph();
}