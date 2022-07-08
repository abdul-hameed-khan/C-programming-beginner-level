#include<graphics.h>
#include<conio.h>
main()
{
	initwindow(800,800);
	setcolor(4);
	int x=50,y=50,z=50;
	for(int i=50;i<800;i+=50)
	{
		circle(x,y,z);
	}
	getch();
}
