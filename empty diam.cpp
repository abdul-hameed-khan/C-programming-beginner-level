#include<stdio.h>
main()
{
	int n=1, m=1;
	for(int i=1;i<=7;i++)
	{
		for (int j=n/2;j>=m;j--)
		{
			printf(" ");
		}
		for (int n=1;n<=m*2-1;n++)
		{
			printf("*");
		}
		printf("\n");
		if(i<=n/2)
		{
			m++;
		}
		
		{
			m--;
		}
	}
	
}
