#include<graphics.h>
#include<math.h>
int abs(int val){
 if(val<0)
   val = -val;
 return val;
}
void printline(int x1, int y1, int x2, int y2){
  int length, x, y, i;
  float dx, dy;
  if(abs(x2-x1)>=abs(y2-y1)){
    length = abs(x2-x1);
  }else{
    length = abs(y2-y1);
  }
  dx = (x2-x1)/length;
  dy = (y2-y1)/length;
  x=((float)x1+0.5);
  y=((float)y1+0.5);
  putpixel(x,y, WHITE);
  for(i=0;i<length;i++){
    x=x+dx;
    y=y+dy;
    putpixel(x,y, WHITE);
  }
}
void main(){
  int gd=DETECT,gm;
  int x1, y1, x2, y2;
  initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
  printf("Enter x1: ");
  scanf("%d", &x1);
  printf("Enter y1: ");
  scanf("%d", &y1);
  printf("Enter x2: ");
  scanf("%d", &x2);
  printf("Enter y2: ");
  scanf("%d", &y2);
  cleardevice();
  printline(x1, y1, x2, y2);
  getch();
  closegraph();
}