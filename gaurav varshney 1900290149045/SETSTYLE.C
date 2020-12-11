#include<stdio.h>
#include<graphics.h>
int main(){
   int gdriver = DETECT,gmode,i;
   initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
    for(i=1; i<10; i++)
    {
     setcolor(i);
     settextstyle(i,0,i);
     outtextxy(100,20*i,"computer graphics");
     delay(1000);
    }

   return 0;
}