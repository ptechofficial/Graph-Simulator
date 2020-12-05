#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
void main()
{
int x,y,i;
int g=DETECT,d;
initgraph(&g,&d,"..\\BGI");
cleardevice();
x=getmaxx()/2;
y=getmaxx()/2;
settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
setbkcolor(rand());
setcolor(4);
int c=150;
for(int e=0;e<15;e++)
{
	for(int i=50;i<150;i++)
	{
		setcolor(3);
		settextstyle(SMALL_FONT,HORIZ_DIR,5);
		outtextxy(x,y,"Please wait");
		cout<<"\n";
		settextstyle(SMALL_FONT,HORIZ_DIR,5);
		outtextxy(x+5,y+5,"directing to payent page...");
		circle(x,y,i);
		circle(x,y,c);
		c--;
		cleardevice();
	}
}
getch();
closegraph();
}