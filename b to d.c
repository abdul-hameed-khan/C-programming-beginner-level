#include<stdio.h>
#include<math.h>
main()
{
	long num,sum=0;
	int rem,res=0,i=0;
	int temp;
	printf("Enter a binary number:");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rem=num%10;
		num=num/10;
		res=(pow(2,i))*rem;
		sum=sum+res;
		i++;		
	}
	num=temp;
	printf("The Dicimal Value  of    %d   is \t%d",num,sum);
}

