#include<graphics.h>
#include<stdio.h>
void main()
{
int gd=DETECT,gm;
int x,y,tx,ty;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("Enter coordinates\n");
scanf("%d%d",&x,&y);
putpixel(x,y,7);
printf("Enter transition coordinates\n");
scanf("%d%d",&tx,&ty);
x=x+tx;
y=y+ty;
putpixel(x,y,7);

getch();
closegraph();
}