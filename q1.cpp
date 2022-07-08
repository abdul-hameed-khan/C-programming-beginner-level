/*
 ******************************************************
 *** Program: calculates the total expenses         ***
 *** Author:  ABDUL HAMEED KHAN            			***
 *** Course:  ICT                           		***
 ***                                           		***
 *** Description: While purchasing certain items,   ***
 *** a discount of 10% is offered if the quantity   ***
 *** purchased is more than 1000. If quantity and   ***
 *** the price per item are input through keyboard, ***
 *** a program that calculates the total expenses.  ***
 ******************************************************
 */

#include<stdio.h>
#include<conio.h>
int main()
{ /* main */
    /*
    ******************************** 
    *** Execution Section (body) ***
    ********************************
	*/
	int qi;
	float pi, tb, discount, m_con, te;
	float dooa;
	// Greeting
	printf("Hello user!\n");
	printf("welcome to item's discount menu\n");
	// Input price
	printf("input price per item : \n");
	scanf("%f", &pi);
	// input quantity
	printf("input quantity of item : \n");
	scanf("%d", &qi);
	// total sum
	printf("total bill : \n");
	tb=pi*qi ;
	printf("%f",tb);
	// discount offered
	printf("\ndiscount offered is 10%, only if you buy more than 1000 item.  \n");
	discount= (tb*(0.1));
	// condition
	m_con= qi>1000 ? 1 : 0 ;
	// discount 
	printf("\ndiscount offered :");
	dooa=discount*m_con;
	printf("%f", dooa);
	// total expenses
	printf("\ntotal expenses :");
	printf("%f", tb-dooa);
	
	getch();
	
} /* main */
