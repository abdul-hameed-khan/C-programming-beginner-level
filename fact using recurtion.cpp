#include<stdio.h>
int fact(int i);
main()
{
	int n=fact(5);
	printf("%d",n);
}
int fact(int i)
{
	if(i>1)
	{
		return i*fact(i--);
	}
}
