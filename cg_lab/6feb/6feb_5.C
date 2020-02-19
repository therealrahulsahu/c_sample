#include<graphics.h>
#include<math.h>
/*
    Read Carefully
    Do Not Write Below Functions
    Write only main()
*/
void way4pix(int x, int y, int xc, int yc){
  putpixel(xc+x,yc+y,WHITE);
  putpixel(xc-x,yc+y,WHITE);
  putpixel(xc-x,yc-y,WHITE);
  putpixel(xc+x,yc-y,WHITE);
}
void mid_ellipse(float xc, float yc, float rx, float ry){ 
    float dx, dy, d1, d2, x, y; 
    x = 0; 
    y = ry; 
  
    d1 = (ry * ry) - (rx * rx * ry) + (0.25 * rx * rx); 
    dx = 2 * ry * ry * x; 
    dy = 2 * rx * rx * y; 
    
    while (dx < dy)  
    { 
        way4pix(floor(x), floor(y), floor(xc), floor(yc));
        if (d1 < 0) 
        { 
            x++; 
            dx = dx + (2 * ry * ry); 
            d1 = d1 + dx + (ry * ry); 
        } 
        else 
        { 
            x++; 
            y--; 
            dx = dx + (2 * ry * ry); 
            dy = dy - (2 * rx * rx); 
            d1 = d1 + dx - dy + (ry * ry); 
        } 
    } 
  
    d2 = ((ry * ry) * ((x + 0.5) * (x + 0.5))) + ((rx * rx) * ((y - 1) * (y - 1))) - (rx * rx * ry * ry); 
  
    while (y >= 0) 
    { 
        way4pix(floor(x), floor(y), floor(xc), floor(yc));
        if (d2 > 0)  
        { 
            y--; 
            dy = dy - (2 * rx * rx); 
            d2 = d2 + (rx * rx) - dy; 
        } 
        else 
        { 
            y--; 
            x++; 
            dx = dx + (2 * ry * ry); 
            dy = dy - (2 * rx * rx); 
            d2 = d2 + dx - dy + (rx * rx); 
        } 
    } 
}
void way8pix(int x, int y, int xc, int yc){
  putpixel(xc+x,yc+y,WHITE);
  putpixel(xc+y,yc+x,WHITE);
  putpixel(xc+x,yc-y,WHITE);
  putpixel(xc+y,yc-x,WHITE);
  putpixel(xc-y,yc+x,WHITE);
  putpixel(xc-x,yc+y,WHITE);
  putpixel(xc-x,yc-y,WHITE);
  putpixel(xc-y,yc-x,WHITE);
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
/*
    Read Carefully
    Do Not Write Above Functions
    Write only main()
*/
void main(){
  int gd=DETECT, gm, ch, x1, y1, x2, y2, r;
  initgraph(&gd, &gm, "c:\\turboc3\\bgi");
  printf("1 - Line By Bresenham Algo\n2 - Circle By Mid-Point Algo\n3 - Ellipse By Mid-Point Algo\nEnter : ");
  scanf("%d", &ch);
  if(ch==1){
    printf("Enter (x1, y1) : ");
    scanf("%d %d", &x1, &y1);
    printf("Enter (x2, y2) : ");
    scanf("%d %d", &x2, &y2);
    cleardevice();
    bres_line(x1, y1, x2, y2);
  }else if(ch==2){
    printf("Center (xc, yc) : ");
    scanf("%d %d", &x1, &y1);
    printf("Radius r : ");
    scanf("%d", &r);
    cleardevice();
    circle(x1, y1, r);
  }else if(ch==3){
    printf("Center (xc, yc) : ");
    scanf("%d %d", &x1, &y1);
    printf("Radius (xr, yr) : ");
    scanf("%d %d", &x2, &y2);
    cleardevice();
    mid_ellipse(x1, y1, x2, y2);
  }else{
    printf("Invalid Input");
  }
  getch();
  closegraph();
}