#include <stdio.h>

int main ()
{ /* main */
    const int program_success_code =  0;
    int addend, augend, sum;

    printf("I will add a pair of integers.\n");
    printf("What two integers do you want to add?\n");
    scanf("%d %d", &addend, &augend);
    sum = addend + augend;
    printf("The sum of %d and %d is %d.\n",
        addend, augend, sum);
    return program_success_code;
} /* main */

