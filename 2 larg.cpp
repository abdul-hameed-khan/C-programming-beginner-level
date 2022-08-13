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
	int l2=arr[1];
	for(int h=1;h<n;h++)
	{
		if(l2<l && l2<arr[h])
		{
			l2=arr[h];
		}
	}
	printf("the 2nd largest is %d",l2);
}
