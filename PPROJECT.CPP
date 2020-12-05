//Class_11_Project #PTECHOFFICIAL
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>
#include<graphics.h>
#include<math.h>
struct eqn
{
	float a3;
	float a2;
	float a1;
	float a0;
};
void graph(int a3,int a2,int a1,int a0)
{
	cleardevice();
	eqn second;
	second.a3=a3;
	second.a2=a2;
	second.a1=a1;
	second.a0=a0;
	setbkcolor(0);
	setcolor(8);
	for(int k=19;k<638;k+=20)                    //GRID
	{
		line(k,0,k,479);
	}
	for(int l=19;l<478;l+=20)
	{
		line(0,l,638,l);
	}
	setcolor(10);
	line(319,0,319,478);	  //Y_AXIS
		line(319,0,323,6);
		line(319,0,315,6);
		line(319,478,323,472);
		line(319,478,315,472);
	line(0,239,638,239);  		//X_AXIS
		line(0,239,6,235);
		line(0,239,6,243);
		line(638,239,632,235);
		line(638,239,632,243);
	for(int i=19;i<638;i+=20)                    //Dots
	{
		pieslice(i,239,0,360,2);
	}
	for(int j=19;j<479;j+=20)
	{
		pieslice(319,j,0,360,2);
	}
	double x1,x2,x3,x4;
	double y1,y2,y3,y4;
	double x1co,x2co,x3co,x4co;
	double y1co,y2co,y3co,y4co;
	setcolor(14);
 /*	for(x1=0,x2=0;x2>-15 && x1<15;x1+=0.05,x2-=0.05)          //ONLY THE DOTS
	{
		y1=((second.a3*pow(x1,3))+(second.a2*pow(x1,2))+(second.a1*x1)+second.a0);
		y2=((second.a3*pow(x2,3))+(second.a2*pow(x2,2))+(second.a1*x2)+second.a0);
		x1co=(x1*20)+319;
		x2co=(x2*20)+319;
		y1co=(-1*y1*20)+239;
		y2co=(-1*y2*20)+239;
		pieslice(x1co,y1co,0,360,1);
		pieslice(x2co,y2co,0,360,1);
		delay(10);
	} */
	for(x1=0,x2=0;x2>-15 && x1<16;x1+=0.05,x2-=0.05)         //LINES
	{
		x3=x1-1;
		x4=x2-1;
		y1=((second.a3*pow(x1,3))+(second.a2*pow(x1,2))+(second.a1*x1)+second.a0);
		y2=((second.a3*pow(x2,3))+(second.a2*pow(x2,2))+(second.a1*x2)+second.a0);
		y3=((second.a3*pow(x3,3))+(second.a2*pow(x3,2))+(second.a1*x3)+second.a0);
		y4=((second.a3*pow(x4,3))+(second.a2*pow(x4,2))+(second.a1*x4)+second.a0);
		x1co=(x1*20)+319;
		x2co=(x2*20)+319;
		x3co=(x3*20)+319;
		x4co=(x4*20)+319;
		y1co=(-1*y1*20)+239;
		y2co=(-1*y2*20)+239;
		y3co=(-1*y3*20)+239;
		y4co=(-1*y4*20)+239;
		if((y3co<0||y3co>490)&&(y4co<0 || y4co>490))
		{
			continue;
		}
		line(x1co,y1co,x3co,y3co);
		line(x2co,y2co,x4co,y4co);
		delay(15);

	}
	gotoxy(45,20);              //best at 1-9-8-0
	cout<<"Entered Equation is   \n ";
	gotoxy(45,21);
	cout<<"y = "<<second.a3<<"* x^3 + "<<second.a2<<"* x^2 + "<<second.a1<<"* x^1 +"<<second.a0;
	getch();
}
void loading()
{
	cleardevice();
	gotoxy(319,239);
	cout<<"LOADING";

	for(int i=0;i<4;i++)
	{
		delay(150);
		cout<<" .";
	}
}
void main()
{
clrscr();
	eqn first;
	int gdriver=DETECT,gmode;
	initgraph(&gdriver,&gmode,"..//bgi");
	setbkcolor(0);
	setcolor(8);
	settextstyle(0,HORIZ_DIR,4);
	outtextxy(80,20,"GRAPH SIMULATOR");
	setcolor(8);
	for(int i=5; i<633;i+=5)
	{
		pieslice(i,5,0,360,1);
		delay(5);
	}
	for(i=5;i<473;i+=5)
	{
		pieslice(633,i,0,360,1);
		delay(5);
	}
	for(i=633;i>0;i-=5)
	{
		pieslice(i,473,0,360,1);
		delay(5);
	}
	for(i=473;i>0;i-=5)
	{
		pieslice(5,i,0,360,1);
		delay(5);
	}
	gotoxy(10,10);
	cout<<"Enter the equation : \n";
	cout<<"  x^3    ";
		cin>>first.a3;
	cout<<"  x^2    ";
		cin>>first.a2;
	cout<<"  x^1    ";
		cin>>first.a1;
	cout<<"  x^0    ";
		cin>>first.a0;
	cout<<endl;
	setcolor(15);
	cout<<"\n\n\n\tEntered Equation is   \n ";
	cout<<"\ty = "<<first.a3<<"* x^3 + "<<first.a2<<"* x^2 + "<<first.a1<<"* x^1 +"<<first.a0;
	rectangle(50,280,330,330);
	settextstyle(39,HORIZ_DIR,1);
	outtextxy(10,350,"Press Any Key To Continue ");
	getch();
	loading();
	graph(first.a3,first.a2,first.a1,first.a0);
getch();
}

