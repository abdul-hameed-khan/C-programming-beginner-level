#include<stdio.h>
main()
{
	int rem,no,i=1;
	long int bin=0;
	printf("Enter an integer:");
	scanf("%d",&no);
	while(no>0)
	{
		rem=no%2;
		no=no/2;
		bin=bin+(rem*i);
		i=i*10;
	}
	printf("%d",bin);
	 
}

