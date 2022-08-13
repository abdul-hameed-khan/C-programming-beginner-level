#include<stdio.h>
main()
{
	int lcm=1,a,b;
	printf("enter two numbers\n");
	scanf("%d \n %d",&a,&b);
	while(a>1 || b>1)
	{
		int d=2;
		while(a%d!=0 && b%d!=0)
		{
			d++;
		}
		if(a%d==0)
		{
			a=a/d;
		}
		if(b%d==0)
		{
			b=b/d;
		}
		lcm=lcm*d;
	}
	printf("lcm is %d",lcm);
}
