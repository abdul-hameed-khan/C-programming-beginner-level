#include<stdio.h>
int pow(int b,int exp);
main()
{
	int a,b;
	printf("enter a number you want to find its power \n");
	scanf("%d",&a);
	printf("enter the number's exponent\n");
	scanf("%d",&b);
	int x=pow(a,b);
	printf("result is %d",x);
		
}
int pow(int b,int exp)
{
	int p=1;
	for(int i=1;i<=exp;i++)
	{
		p=p*b;
	}
	return p;
}
