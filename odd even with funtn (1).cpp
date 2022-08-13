#include<stdio.h>
int even(int &x)
{
	if(x % 2==0) 
	{
		printf("the number is even\n");
	}
}
int odd(int &y)
{
	if(y%2 !=0)
	{
		printf("the number is odd\n");
	}
}
main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	even(n);
	odd(n);		
}
