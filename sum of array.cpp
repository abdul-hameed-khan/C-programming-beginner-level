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
		sum=sum+arr[i];
	}
	/*for(int j=0;j<n;j++)
	{
		sum=sum+arr[j];
	}*/
	printf("sum of array is %d ",sum);
}
