#include<stdio.h>
main()
{
	int n=5;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		printf("enter a number\n");
		scanf("%d",&arr[i]);
	}
	int l=arr[0];
	for(int m=1;m<n;m++)
	{
		if(l<arr[m])
		{
			l=arr[m];
		}
	}
	printf("the largest is %d",l);
}
