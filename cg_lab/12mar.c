#include<graphics.h>
#include<math.h>
void multiply(int A[3][3], int B[3][3], int C[3][3]) 
{ 
	int i, j, k;
    for (i = 0; i < 3; i++) 
    { 
        for (j = 0; j < 3; j++) 
        { 
            C[i][j] = 0; 
            for (k = 0; k < 3; k++) 
            { 
                C[i][j] += A[i][k]*B[k][j]; 
            } 
        } 
    } 
} 
void main(){
	int gd=DETECT, gm, type, trans, tx, ty, angle, sx, sy, valid=1, x1, y1, x2, y2, rad, row, col;
	int t_mat[3][3]={0}, data[3][3]={0}, result[3][3]={0};
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");
	printf("1 :Line\n2 :Rectangle\n3 :Circle\nEnter : ");
	scanf("%d", &type);
	cleardevice();
	if(type==1){
		printf("Enter x1 y1 ");
		scanf("%d%d", &x1, &y1);
		printf("Enter x2 y2 ");
		scanf("%d%d", &x2, &y2);
		cleardevice();
		line(x1, y1, x2, y2);
		data[0][0] = x1;
		data[1][0] = y1;
		data[2][0] = 1;
		data[0][1] = x2;
		data[1][1] = y2;
		data[2][1] = 1;
	}else if(type==2){
		printf("Enter x1 y1 ");
		scanf("%d%d", &x1, &y1);
		printf("Enter x2 y2 ");
		scanf("%d%d", &x2, &y2);
		cleardevice();
		rectangle(x1, y1, x2, y2);
		data[0][0] = x1;
		data[1][0] = y1;
		data[2][0] = 1;
		data[0][1] = x2;
		data[1][1] = y2;
		data[2][1] = 1;
	}else if(type==3){
		printf("Enter x, y and radius : ");
		scanf("%d%d", &x1, &y1, &rad);
		cleardevice();
		circle(x1, y1, rad);
		data[0][0] = x1;
		data[1][0] = y1;
		data[2][0] = 1;
	}else{
		printf("Invalid Input\n");
		valid = 0;
	}
	if(valid){
		printf("1 :Scaling\n2 :Rotation\n3 :Translation\nEnter : ");
		scanf("%d", &trans);
		cleardevice();
		if(trans==1){
			printf("Enter Sx and Sy ");
			scanf("%d%d", &sx, &sy);
			t_mat[0][0] = sx;
			t_mat[1][1] = sy;
			t_mat[2][2] = 1;
		}else if(trans==2){
			printf("Enter Angle : ");
			scanf("%d", &angle);
		}else if(trans==3){
			printf("Enter Tx and Sy : ");
			scanf("%d%d", &tx, &ty);
			t_mat[0][0] = 1;
			t_mat[1][1] = 1;
			t_mat[0][2] = tx;
			t_mat[1][2] = ty;
			t_mat[2][2] = 1;
		}else{
			printf("Invalid Input\n");
		}
	}
	multiply(t_mat, data, result);
	if(type==1){
		line(result[0][0], result[1][0], result[0][1], result[1][1]);
	}else if(type==2){
		rectangle(result[0][0], result[1][0], result[0][1], result[1][1]);
	}else if(type==3){
		circle(result[0][0], result[1][0], rad);
	}else{
		printf("Invalid Input\n");
	}
	getch();
	closegraph();
}
