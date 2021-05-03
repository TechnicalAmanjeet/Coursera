 // week 2 assignmet.
 // In this assignment i am going to write a program which include sine function and give output beetween 0 , 1.

#include <stdio.h>
#include <math.h>

int main(void)
{
    /* Define temporary variables */
    double value;
    double result;

    /* Assign the value we will find the sin of */
    printf("Enter any Value : ");
    scanf("%lf",value);

    /* Calculate the Sine of value */
    result = sin(value);

    /* Display the result of the calculation */
    printf("The Sine of %lf is %lf\n", value, result);

    return 0;
}