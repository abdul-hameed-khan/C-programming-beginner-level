#include<stdio.h>
main()
{
	int gcd,a,r,b;
	int n,d;
	printf("enter any two number\n");
	scanf("%d\n %d",&a,&b);
	if(a>b)
	{
		n=a;
		d=b;
	}
		else
		{
			n=b;
			d=a;
		}
		do
		{
			 r=n%d;
			n=d;
			d=r;
		}
		while(r>0);
		gcd=n;
		printf("gcd is %d",gcd);
	}

