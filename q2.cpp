/*
 *************************************************
 *** Program: solve the quadratic equation     ***
 *** Author:  ABDUL HAMEED KHAN                ***
 *** Course:  ICT                              ***
 ***                                           ***
 *** Description: a program to solve the       ***
 *** quadratic equation using quadratic 	   ***
 *** formulas, and Program should prompt the   ***
 *** user for the values of a, b and c.        ***
 *************************************************
 */

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{ /* main */
    /*
    ******************************** 
    *** Execution Section (body) ***
    ********************************
	*/
float a, b, c;							// declaring variables
float X1, X2;							// declaring variables
                   		
printf(" Please enter a \n");			// prints the literal string
scanf("%f",&a);							//input float value from user

printf(" Please enter b \n");			// prints the literal string
scanf("%f",&b);							// input float value from user

printf(" Please enter c \n");			// prints the literal string
scanf("%f",&c);							// input float value from user

// quadratic formula
X1 = -b + sqrt(b*b)-(4.*a*c)  / (2.*a);
X2 = -b - sqrt(b*b)-(4.*a*c) / (2.*a);

printf("Answer");

printf("\n X1 = %f\n X2 = %f", X1,X2);		// print vlaues of X1 and X2
printf("\n ");								// new line

getch();
} /* main */
