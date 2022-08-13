#include<stdio.h>
# include <conio.h>
main()
{
	for(int n=0;n<5;n++)
	{
		for(int j=5;j>=n;j--)
		{
			printf(" ");
		}
		for(int k=0;k<=n;k++)
		{
			int num=1;
			for(int i=n;i>=1;i--)
			{
				num=num*i;
			}
			int d1=1;
			for(int i=k;i>=1;i--)
			{
				d1=d1*i;
			}
			int x=n-k;
			int d2=1;
			for(int i=x;i>=1;i--)
			{
				d2=d2*i;
			}
				int r=num/(d1*d2);
		
		
			printf("%d ",r);
		}
		printf("\n");
	}
}



