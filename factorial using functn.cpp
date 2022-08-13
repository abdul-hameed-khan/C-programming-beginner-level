#include<stdio.h>
int factorial(int n)
	{
		int fact=1;
		for(int i=n;i>=1;i--)
		{
			fact=fact*i;
		}
		return fact;
	}
	main()
	{
int s,o;

	printf("enter a number\n");
	scanf("%d \n %d",&s,&o);
	int  w=factorial(s);
	int f=factorial(o);
	printf("fact is %d \n %d",w,f);	
	}

