#include<stdio.h> 
#include<conio.h>
#include<graphics.h> 
int main()
{
int gd=DETECT,gm,error;
int x1,x2,x3,x4,y1,y2,y3,y4; 
clrscr();
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
scanf("%d%d",&x1,&y1);
scanf("%d%d",&x2,&y2);
scanf("%d%d",&x3,&y3);
scanf("%d%d",&x4,&y4);
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x4,y4);
line(x4,y4,x1,y1); 
x1=x1+70; 
y1=y1+20; 
x2=x2+70; 
y2=y2+20; 
x3=x3+70; 
y3=y3+20; 
x4=x4+70; 
y4=y4+20;
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x4,y4);
line(x4,y4,x1,y1); getch(); closegraph(); return 0;
}

