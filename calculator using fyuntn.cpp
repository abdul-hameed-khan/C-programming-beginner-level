#include<stdio.h>
#include<conio.h>
int sum(int a,int b)
{
	int sum=a+b;
}
int sub(int c,int d)
{
	int sub=c-d;
}
int mul(int e,int f)
{
	int mul=e*f;
}
int div(int g,int h)
{
	int div=g/h;
}
int mod(int i,int j)
{
	int mod=i%j;
}
main()
{
	int flag,no=0,res=0;
	char op=0,ch;
	while(ch!='=')
	{
		ch=getche();
		if(ch>=48 && ch<=57)
		{
			no=no*10+(ch-48);
		}
		else if(flag==0)
		{
			flag=1;
			res=0;
			no=0;
			op=ch;
		}
		else
		{
			if(op=='+')
			{
				sum(res,no);
				no=0;
				op=ch;
			}
			else if(op=='-')
			{
				sub(res,no);
				no=0;
				op=ch;
			}
			else if(op=='*')
			{
				mul(res,no);
				no=0;
				op=ch;
			}
			else if(op=='/')
			{
				div(res,no);
				no=0;
				op=ch;
			}
			else if(op=='%')
			{
				mod(res,no);
				no=0;
				op=ch;
			}
			
		}
		
	}
	printf(" res is %d",res);
}
