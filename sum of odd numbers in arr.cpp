#include<stdio.h>
main()
{
	int n=5;
	int sum=0;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		printf("enter a number\n");
		scanf("%d",&arr[i]);
	}
	for(int j=0;j<n;j++)
	{
		if(arr[j]%2!=0)
		{
		sum=sum+arr[j];
		}
	}
	printf("sum of odd numbers in array is %d ",sum);
}
