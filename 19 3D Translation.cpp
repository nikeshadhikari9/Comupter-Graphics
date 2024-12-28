#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main() {
    float x1, x2, y1, y2, z1, z2, tx, ty, tz;
    
    printf("This is a demonstration of 3D Translation of a 3D line.\n");
    
    // Input for 3D line coordinates
    printf("Enter the points for the line (x1, y1, z1) and (x2, y2, z2):\n");
    scanf("%f %f %f %f %f %f", &x1, &y1, &z1, &x2, &y2, &z2);
    
    // Input for translation vector
    printf("Enter the translation vector (tx, ty, tz):\n");
    scanf("%f %f %f", &tx, &ty, &tz);
    
    // Calculate translated coordinates
    float x3 = x1 + tx, y3 = y1 + ty, z3 = z1 + tz;
    float x4 = x2 + tx, y4 = y2 + ty, z4 = z2 + tz;
    
    // Output translated coordinates
    printf("Original Line: A(%.2f, %.2f, %.2f) -> B(%.2f, %.2f, %.2f)\n", x1, y1, z1, x2, y2, z2);
    printf("Translated Line: A'(%.2f, %.2f, %.2f) -> B'(%.2f, %.2f, %.2f)\n", x3, y3, z3, x4, y4, z4);

    // Visualization using graphics (2D projection of 3D)
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Draw the original line (project z-axis as depth)
    line(x1 + z1, y1 + z1, x2 + z2, y2 + z2);

    // Draw the translated line
    setcolor(RED); // Change color for distinction
    line(x3 + z3, y3 + z3, x4 + z4, y4 + z4);

    // Wait for user input
    getch();
    closegraph();

    return 0;
}

