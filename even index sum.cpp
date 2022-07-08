#include<stdio.h>
main()
{
	int n;
	printf("enter no.of array elements\n");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		printf("enter a number\n");
		scanf("%d",&arr[i]);
	}
	int index=0;
		int sum=0;
	for(int j=0;j<n;j++)
	{
		if(j%2==0)
		{
		sum=sum+arr[j];
		}
	}
	printf("sum of even indexes in array is %d ",sum);
}
