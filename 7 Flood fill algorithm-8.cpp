#include <stdio.h>
#include <graphics.h>
void floodFill8(int x, int y, int fillColor, int borderColor) {
    int currentColor = getpixel(x, y);
    if (currentColor != borderColor && currentColor != fillColor) {
        putpixel(x, y, fillColor);
        floodFill8(x + 1, y, fillColor, borderColor); 
        floodFill8(x - 1, y, fillColor, borderColor); 
        floodFill8(x, y + 1, fillColor, borderColor); 
        floodFill8(x, y - 1, fillColor, borderColor);
        floodFill8(x + 1, y + 1, fillColor, borderColor); 
        floodFill8(x - 1, y - 1, fillColor, borderColor); 
        floodFill8(x + 1, y - 1, fillColor, borderColor); 
        floodFill8(x - 1, y + 1, fillColor, borderColor); 
    }
}

int main() {
    int gd = DETECT, gm;
    int x, y;
    int fillColor = RED;       
    int borderColor = WHITE;  
    printf("Enter a point (x, y) inside the rectangle to fill: ");
    scanf("%d%d", &x, &y);
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    setcolor(borderColor);
    rectangle(100, 100, 200, 200);
    floodFill8(x, y, fillColor, borderColor);
    getch();
    closegraph();
    return 0;
}

