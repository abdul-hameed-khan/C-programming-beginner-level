#include<stdio.h>
swap(int x,int y);

main()
{
	int n,m;
	printf("enter two numbers :\n");
	scanf("%d \n %d",&n,&m);
	printf("before swap n=%d , m=%d\n",n,m);
	swap(n,m);
	printf("now n=%d , m=%d",n,m);
}
swap(int x,int y)
{
	int swap=x+y;
	x=swap-x;
	y=swap-y;
	return swap;	
	
}
