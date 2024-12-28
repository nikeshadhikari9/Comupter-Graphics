#include <stdio.h>
#include <graphics.h>

void drawHouse() {
    setcolor(BROWN);
    rectangle(100, 200, 300, 300);

    setcolor(RED);
    line(100, 200, 200, 100);
    line(300, 200, 200, 100);
    line(100, 200, 300, 200);

    setcolor(YELLOW);
    rectangle(175, 250, 225, 300);

    setcolor(LIGHTBLUE);
    rectangle(130, 220, 170, 260);
    rectangle(230, 220, 270, 260);
}

int main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    drawHouse();

    getch();
    closegraph();

    return 0;
}

