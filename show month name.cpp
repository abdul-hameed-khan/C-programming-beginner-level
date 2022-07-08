#include<stdio.h>
#include<string.h>
main()
{
 char  str[]={'january','february','march','april','may','june','july','august','september','october','november','december'};
	int n;
	printf("enter a number to show the month name\n");
	scanf("%d",&n);
	printf("the month is %s",str[n-1]);
}
