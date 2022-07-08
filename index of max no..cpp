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
	int index=0;
	int l=arr[0];
	for(int m=1;m<n;m++)
	{
		if(l<arr[m])
		{
			l=arr[m];
			index=m;
		}
	}
	printf("max no is %d and index is %d",l,index);
}
