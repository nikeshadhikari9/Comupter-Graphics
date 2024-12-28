#include <stdio.h>
#include <graphics.h>

void drawFish() {
    setcolor(CYAN);
    ellipse(200, 200, 0, 360, 100, 50);
    line(100, 200, 50, 150);
    line(100, 200, 50, 250);
    line(50, 150, 50, 250);
    
    line(175, 160, 175, 120);
    line(225, 160, 225, 120);
    line(225, 120, 175, 120);

    line(175, 240, 175, 280);
    line(225, 240, 225, 280);
    line(175, 280, 225, 280);

    setcolor(WHITE);
    circle(250, 180, 10);
    setcolor(BLACK);
    circle(250, 180, 5);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    drawFish();

    getch();
    closegraph();
    return 0;
}

