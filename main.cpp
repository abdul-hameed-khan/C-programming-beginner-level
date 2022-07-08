#include<graphics.h>
#include<conio.h>
main()
{
	initwindow(800,600);
rectangle(10,10,100,100);
floodfill(10,10,RED);

line(50,50,70,50);
line(50,50,50,60);
setcolor(RED);
	setbkcolor(GREEN);
line(50,60,70,60);
line(70,50,70,60);
	setcolor(GREEN);
	

rectangle(100,200,100,200);
	getch();
}
