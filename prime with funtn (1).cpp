#include<stdio.h>
int isprime(int n);
main()
{
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	int x=isprime(n);
	if(x==1)
	{
		printf(" prime\n");
	 } 
	 else
	 {
	 	printf("not prime\n");
	 }
}
int isprime(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
