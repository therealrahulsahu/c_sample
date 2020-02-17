#include <iostream>
#include <graphics.h>
using namespace std;
int main(){
    int gd=DETECT, gm;
    char st[] = "C:\\TurboC3\\BGI";
    initgraph(&gd, &gm, st);
    circle(100, 100, 50);
    getch();
    closegraph();
}