#include<graphics.h>
#include<math.h>

void printline(float x1, float y1, float x2, float y2, int type){
  float x, y, dx, dy, length;
  int cn=0,i;
  if(abs(x2-x1)>=abs(y2-y1)){
    length = abs(x2-x1);
  }else{
    length = abs(y2-y1);
  }
  dx = (x2-x1)/length;
  dy = (y2-y1)/length;
  x=x1+0.5;
  y=y1+0.5;
  putpixel(floor(x),floor(y), WHITE);
  for(i=0;i<length;i++){
    x+=dx;
    y+=dy;
    if(type==1){
      if(cn%3==0)
	      putpixel(floor(x),floor(y), WHITE);
    }else if(type==2){
      if(cn%3!=0)
	      putpixel(floor(x),floor(y), WHITE);
    }else{
	      putpixel(floor(x),floor(y), WHITE);
    }
    cn++;
  }
}
void main(){
  int gd=DETECT,gm, type;
  initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
  printf("1 - dotted\n2 - dashed\nelse for Solid\n :: ");
  scanf("%d", &type);
  cleardevice();
  //Rectangle
  printline(50, 50, 50, 100, type);
  printline(50, 100, 150, 100, type);
  printline(150, 100, 150, 100, type);
  printline(150, 50, 50, 50, type);
  //Triangle
  printline(50, 150, 50, 200, type);
  printline(50, 200, 100, 200, type);
  printline(100, 200, 50, 150, type);
  getch();
  closegraph();
}