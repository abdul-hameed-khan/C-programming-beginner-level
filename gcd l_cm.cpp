#include<stdio.h>
main()
{
	int n1,n2,n,d,gcd,r,lcm;
	printf("enter any two no.\n");
	scanf("%d \n %d",&n1,&n2);
	if(n1>n2)
	{
		n=n1;
		d=n2;
	}
	else
	{
		n=n2;
		d=n1;
	}
	do
	{
	 	r=n%d;
		n=d;
		d=r;
	}
	while(r>0);
	gcd=n;
	int m=n1*n2;
	lcm=m/gcd;
	printf("lcm is %d",lcm);
}
