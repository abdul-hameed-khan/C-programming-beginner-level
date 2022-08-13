#include<stdio.h>
void pn(int v);
main()
{
	pn(1);
}
 void pn(int v)
{
	printf("hameed\n");
	if(v<20)
	{
		pn(v+1);
	}
	else
	{
		return v;
	}
}
