#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
int main(){
	int gd=DETECT,gm;
	float x1,x2,y1,y2,length;
	printf("Enter two end points A(x1,x2) and B(x2,y2):");
	scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
	float dx=x2-x1;
	float dy=y2-y1;
	if (abs(dx)>abs(dy)){
		length=abs(dx);
	}
	else{
		length=abs(dy);
	}
	float x_increment=dx/length;
	float y_increment=dy/length;
	float x,y;
	x=x1;
	y=y1;
	int i=0;
	initgraph(&gd,&gm,(char*)"");
	while(i<=length){
		putpixel(x,y,WHITE);
		x=x+x_increment;
		y=y+y_increment;
		i++;
	}
	getch();
	closegraph();
}
