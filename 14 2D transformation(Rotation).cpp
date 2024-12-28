#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main()
{
	int gd=DETECT,gm;
	float x1,y1,x2,y2,tx,ty,angle;
	printf("Enter two end points: ");
	scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
	initgraph(&gd,&gm,(char*)"");
	line(x1,y1,x2,y2);
	outtextxy(x2+5,y2,"Pogammer");
	printf("Enter the angle of rotation(in degrees):");
	scanf("%f",&angle);
	float radian = angle * (M_PI / 180.0);
	float x3,y3,x4,y4;
	x3=x1*cos(radian)-y1*sin(radian);
	y3=x1*sin(radian)+y1*cos(radian);
	x4=x2*cos(radian)-y2*sin(radian);
	y4=x2*sin(radian)+y2*cos(radian);
	line(x3,y3,x4,y4);
	outtextxy(x4+5,y4,"Hecker");	
	getch();
	closegraph();
}
