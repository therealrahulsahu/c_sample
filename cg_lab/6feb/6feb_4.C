#include<graphics.h>
#include<math.h>
void way4pix(int x, int y, int xc, int yc){
  putpixel(xc+x,yc+y,WHITE);
  putpixel(xc-x,yc+y,WHITE);
  putpixel(xc-x,yc-y,WHITE);
  putpixel(xc+x,yc-y,WHITE);
}
// way4pix(floor(x), floor(y), floor(xc), floor(yc));
void mid_ellipse(float xc, float yc, float rx, float ry)
{ 
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
void main(){
  int gd=DETECT, gm;
  initgraph(&gd, &gm, "c:\\turboc3\\bgi");
  mid_ellipse(150, 150, 100, 50);
  getch();
  closegraph();
}