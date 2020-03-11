#include<graphics.h>
#include<stdlib.h>
int **mat_mul(int **A, int r1, int c1, int **B, int r2, int c2){
	int **result, sum, i, j, k;
	result = calloc(r1, sizeof(int *));
	for(i=0; i<r1;i++){
		result[i]=calloc(c2, sizeof(int));
	}
	
	for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            for (int k = 0; k < c1; ++k) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
	return result;
}
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