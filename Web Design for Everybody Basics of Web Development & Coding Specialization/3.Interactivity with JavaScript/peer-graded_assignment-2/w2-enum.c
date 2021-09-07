/*
Write enumerated types that supports dates—such as december 12. 
Then add a function that produces a next day.  
So nextday(date) of december 12 is december 13. 
Also write a function printdate(date) that prints a date legibly.
The function can assume that February has 28 days and it most know 
how many days are in each month. Use a struct with two members; 
one is the month and the second  is the day of the month—an int (or short).

1   typedef enum month{ jan, feb, …} month;
2   typedef struct date{ month m; int d} date;

Then print out  the date January 1  and print  the next day Jan 2.

Do this for the following dates:  February 28, March 14, October 31, and  December 31.
*/

#include <stdio.h>
#include <assert.h>

typedef enum month
{
    January,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
}month;

typedef struct date
{
    month month;
    int day;
}date;
void printdate(date input_date);
date nextday(date input_date);

int main(void) 
{
    date my_date;

    my_date.month = February;
    my_date.day = 28;
    printdate(my_date);

    my_date.month = March;
    my_date.day = 14;
    printdate(my_date);

    my_date.month = October;
    my_date.day = 31;
    printdate(my_date);

    my_date.month = December;
    my_date.day = 31;
    printdate(my_date);

    return 0;
}

date nextday(date input_date)
{
    date next_day = input_date;
    if(input_date.month == February)
    {
        if (input_date.day++ % 28 == 0)
        {
            next_day.month++;
            next_day.day = 1;
            return next_day;
        }
    }
    else if(input_date.month == December)
    {
        if (input_date.day++ % 31 == 0)
        {
            next_day.day = 1;
            next_day.month = January;
            return next_day;
        }
    }
    else if(input_date.month == (April || June || September || November))
    {
        if (input_date.day++ % 30 == 0)
        {
            next_day.month++;
            next_day.day = 1;
            return next_day;
        }
    }
    else //January, March, May, July, August, October, December
    {
        if (input_date.day++ % 31 == 0)
        {
            next_day.month++;
            next_day.day = 1;
            return next_day;
        }
    }
    next_day.day++;
    return next_day;
}
void printdate(date input_date)
{
    date next_day = nextday(input_date);

    //a lookup array months to print out
    const char* monthNames[12] =
        {
            "January",
            "February",
            "March",
            "April",
            "May",
            "June",
            "July",
            "August",
            "September",
            "October",
            "November",
            "December",
        };
    printf("The date %s %d ", monthNames[input_date.month], input_date.day);
    printf("the next date is %s %d \n\n", monthNames[next_day.month], next_day.day);
}