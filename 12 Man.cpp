#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main() {
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	circle(200,100,50);
	line(200,150,200,300);
	line(200,200,150,250);
	line(200,200,250,250);
	line(200,300,150,350);
	line(200,300,250,350);
	getch();

}
