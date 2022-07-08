#include<stdio.h>
#include<conio.h>
main()
{
int flag,no=0,res=0;
char op=0,ch;
printf("enter the expression \n");

while(ch!='=')
{
	ch=getche();
	if(ch>=48 && ch<=57)
	{
		no=no*10+(ch-48);
	}
	else if (flag==0)
	{
		flag=1;res=no;
		no=0;
		op=ch;
	}
	else if(op=='+')
	{
		res=res+no;
		no=0;
		op=ch;
	}
		else if(op=='-')
	{
		res=res-no;
		no=0;
		op=ch;
	}	else if(op=='*')
	{
		res=res*no;
		no=0;
		op=ch;
	}	else if(op=='/')
	{
		res=res/no;
		no=0;
		op=ch;
	}
		else if(op=='%')
	{
		res=res%no;
		no=0;
		op=ch;
	}
	}	
	printf("%d",res);
}
