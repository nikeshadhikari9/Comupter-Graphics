#include <stdio.h>
#include <graphics.h>

void drawCar() {
    setcolor(YELLOW);
    rectangle(100, 200, 300, 250);
    setcolor(YELLOW); 
    rectangle(120, 180, 200, 200);
    rectangle(210, 180, 280, 200);
    setcolor(YELLOW);
    circle(140, 250, 20);
    circle(260, 250, 20);
    setcolor(YELLOW); 
    circle(140, 250, 10);
    circle(260, 250, 10);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    drawCar();
    getch();
    closegraph();
    return 0;
}

