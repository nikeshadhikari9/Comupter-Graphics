#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void drawEllipse(int xc, int yc, int rx, int ry) {
    int x = 0;
    int y = ry;
    int dx = 2 * ry * ry * x;
    int dy = 2 * rx * rx * y;
    int p1 = ry * ry - rx * rx * ry + 0.25 * rx * rx;

    while (dx < dy) {
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc - y, WHITE);
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc + y, WHITE);

        if (p1 < 0) {
            x++;
            dx += 2 * ry * ry;
            p1 += dx + ry * ry;
        } else {
            x++;
            y--;
            dx += 2 * ry * ry;
            dy -= 2 * rx * rx;
            p1 += dx - dy + ry * ry;
        }
    }

    int p2 = ry * ry * ((x + 0.5) * (x + 0.5)) + rx * rx * ((y - 1) * (y - 1)) - rx * rx * ry * ry;

    while (y >= 0) {
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc - y, WHITE);
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc + y, WHITE);

        if (p2 > 0) {
            y--;
            dy -= 2 * rx * rx;
            p2 += rx * rx - dy;
        } else {
            x++;
            y--;
            dx += 2 * ry * ry;
            dy -= 2 * rx * rx;
            p2 += dx - dy + rx * rx;
        }
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    int xc, yc, rx, ry;
    printf("Enter center point of the ellipse (xc yc): ");
    scanf("%d %d", &xc, &yc);
    printf("Enter the semi-major axis and semi-minor axis (rx ry): ");
    scanf("%d %d", &rx, &ry);

    drawEllipse(xc, yc, rx, ry);

    getch();
    closegraph();
    return 0;
}

