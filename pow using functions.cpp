#include<stdio.h>
#include<wel.h>
int pow(int b,int exp)
{
	int p=1;
	for(int i=1;i<=exp;i++)
	{
		p=p*b;
	}
	return p;
}
main()
{
	wel();
	int a=3,b=5;
	int x1=pow(a,b);
	printf("%d\n",x1);
	int x2=pow(b,a);
	printf("%d\n",x2);
	gdby();
}
