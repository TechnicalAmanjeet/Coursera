 // week 2 assignmet.
 // In this assignment i am going to write a program which include sine function and give output beetween 0 , 1.

#include <stdio.h>
#include <math.h>

int main(void)
{
    /* Define temporary variables */
    
    double result;
    double i;
    /* Assign the value we will find the sin of */
   for(i=0;i<=180;i+=10)
   {
    printf("The Sine and cosine of %lf is %lf and %lf respectively.\n", i,sin(i),cos(i));
   }

    return 0;
}