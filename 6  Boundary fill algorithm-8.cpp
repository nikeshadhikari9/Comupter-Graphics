#include <stdio.h>
#include <graphics.h>
void boundaryFill8(int x, int y, int fillColor, int boundaryColor) {
   ;
    if (getpixel(x, y) != boundaryColor && getpixel(x, y) != fillColor) {
        putpixel(x, y, fillColor);
        boundaryFill8(x + 1, y, fillColor, boundaryColor); 
        boundaryFill8(x - 1, y, fillColor, boundaryColor);
        boundaryFill8(x, y + 1, fillColor, boundaryColor); 
        boundaryFill8(x, y - 1, fillColor, boundaryColor); 
        boundaryFill8(x + 1, y + 1, fillColor, boundaryColor); 
        boundaryFill8(x - 1, y - 1, fillColor, boundaryColor); 
        boundaryFill8(x + 1, y - 1, fillColor, boundaryColor); 
        boundaryFill8(x - 1, y + 1, fillColor, boundaryColor); 
    }
}

int main() {
    int gd = DETECT, gm;
    int x, y;
    int fillColor = RED;      
    int boundaryColor = BLUE;  
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    setcolor(boundaryColor);
    rectangle(100, 100, 200, 200);
    printf("Enter a point (x,y) inside the rectangle to fill: ");
    scanf("%d%d", &x, &y);
    boundaryFill8(x, y, fillColor, boundaryColor);
    getch(); 
    closegraph();
    return 0;
}

