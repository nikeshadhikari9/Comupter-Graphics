#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main(){
	int gd=DETECT,gm;
	float xc,yc,r,p,x,y;
	printf("Enter two center points of circle:");
	scanf("%f%f",&xc,&yc);
	printf("Enter the radius of circle:");
	scanf("%f",&r);
	p=1-r;
	x=0;
	y=r;
	initgraph(&gd,&gm,(char*)"");
	while(x<=y){
		putpixel(x+xc,y+yc,WHITE);
		putpixel(-x+xc,y+yc,WHITE);
		putpixel(x+xc,-y+yc,WHITE);
		putpixel(-x+xc,-y+yc,WHITE);
		putpixel(y+xc,x+yc,WHITE);
		putpixel(-y+xc,x+yc,WHITE);
		putpixel(y+xc,-x+yc,WHITE);
		putpixel(-y+xc,-x+yc,WHITE);
		if(p<0){
			x=x+1;
			y=y;
			p=p+2*x+3;
		}else{
		    x=x+1;
		    y=y-1;
		    p=p+2*(x-y)+5;
		}
	}
	getch();
	return 0;
}
