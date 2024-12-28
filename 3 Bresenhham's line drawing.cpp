#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main(){
	float x1,x2,y1,y2,x,y;
	int gd=DETECT,gm;
	printf("Enter two end points: ");
	scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
	initgraph(&gd,&gm,(char*)"");
	float dx,dy,p;
	dx=x2-x1;
	dy=y2-y1;
	p=2*dy-dx;
	int i=0;.0o
	x=x1;
	y=y1;
	while(i<=dx){
		putpixel(x,y,WHITE);
		if(p<0){
			x=x+1;
			y=y;
			p=p+2*dy;
		}else{
			x=x+1;
			y=y+1;
			p=p+2*dy-2*dx;
		}
		i++;
	}
	getch();
	return 0;
	
}
