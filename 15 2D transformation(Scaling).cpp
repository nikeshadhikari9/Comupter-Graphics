#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int gd=DETECT,gm;

	float x1,y1,x2,y2,tx,ty;
	printf("Enter two end points: ");
	scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
	initgraph(&gd,&gm,(char*)"");
	line(x1,y1,x2,y2);
	outtextxy(x2+5,y2,"Pogammer");
	printf("Enter the two translation vector(sx,sy):");
	scanf("%f%f",&tx,&ty);
	float x3,y3,x4,y4;
	x3=x1*tx;
	y3=y1*ty;
	x4=x2*tx;
	y4=y2*ty;
	line(x3,y3,x4,y4);
	outtextxy(x4+5,y4,"hecker");	
	getch();
}
