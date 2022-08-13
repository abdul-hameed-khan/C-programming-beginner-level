#include<stdio.h>
int f1(int i);
main()
{
	f1(1);
}
int f1(int i)
{
	if(i<=5)
	{
		printf("%d\n",i);
		f1(i+1);
	}
	
}
