/* Author: Aidan Corcoran
   Date: 01/14/2022
   Assignment #1
   Incrementing a date or comparing two dates
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Dates { /* Dates structure */
    int year;
    int month;
    int day;
}Date;

void getNextDate (Date);
int compareDates (Date, Date);

int main () {
    Date input; /* Assigning input to the Data struct type */
    int choice; /* Variable to determine choice of user */
    
    printf("What function would you like to use:\n\t1. Next date function, enter 1\n\t2. Compare two dates function, enter 2\nChoice: ");
    scanf("%d", &choice);

    /* If the next date function is chosen */
    if (choice == 1) {
        printf("Enter the 'month day year' respectively\n");
        scanf("%d %d %d", &input.month, &input.day, &input.year);

        getNextDate(input);
    }
    /* If the compare two dates function is chosen */
    else if (choice == 2) {
        /* Two variables of data type to compare */
        Date date1;
        Date date2;

        printf("Enter two dates to compare in the 'month day year' format\n");
        printf("Date 1: ");
        scanf("%d %d %d", &date1.month, &date1.day, &date1.year);
        printf("\n");
        printf("Date 2: ");
        scanf("%d %d %d", &date2.month, &date2.day, &date2.year);
        printf("\n");

        printf("The result of the compare dates function is: %d", compareDates(date1, date2));
    }
    /* Statement incase they enter an invalid choice */
    else {
        printf("Incorrect input\n");
    }

    return 0;
}

void getNextDate (Date input) {
    Date next_date; /* Create a new struct to store the next date */

    next_date.day = input.day;
    ++next_date.day;

    /* If statement to check if month is Febuary and if the next day is greater than 28 */
    if (next_date.day > 28 && input.month == 2) {
        next_date.month = ++input.month;
        next_date.day = 1;
        next_date.year = input.year;
    }
    /* Checking if the next day is greater than 30 and if the month is a month with 30 days */
    else if (next_date.day > 30 && (input.month == 4 || input.month == 6 || input.month == 9 || input.month == 11)) {
        next_date.month = ++input.month;
        next_date.day = 1;
        next_date.year = input.year;
    }
    /* Checking if next day is greater than 31 and if the month is a month with 31 days */
    else if (next_date.day > 31 && (input.month == 1 || input.month == 3 || input.month == 5 || input.month == 7 || input.month == 8 || input.month == 10 || input.month == 12)) {
        /* If the month is December and the next date is greater than 31 we must start a new year */
        if (input.month == 12 && next_date.day > 31) {
            next_date.day = 1;
            next_date.month = 1;
            next_date.year = ++input.year;
        }
        else {
            next_date.month = ++input.month;
            next_date.day = 1;
            next_date.year = input.year;
        }
    }
    /* If we are not at the end of any month then just the date is incremented */
    else {
        next_date.month = input.month;
        next_date.year = input.year;
    }
    printf("%d %d %d\n", next_date.month, next_date.day, next_date.year);
}

/* Comment to test how git works */
int compareDates (Date date1, Date date2) {
    int output; /* Output of the function */
    
    /* If statement to check if same dates */
    if (date1.year == date2.year && date1.month == date2.month && date1.day == date2.day) {
        output = 0;
        return output;
    }

    /* Check if the years are different */
    if (date1.year > date2.year) {
        output = 1;
        return output;
    }
    else if (date2.year > date1.year) {
        output = -1;
        return output;
    }

    /* If the years are the same we need to check individual months, and if months are the same we need to check days */
    if (date1.year == date2.year) {
        if (date1.month > date2.month) {
            output = 1;
            return output;
        }
        else if (date2.month > date1.month) {
            output = -1;
            return output;
        }
        else if (date1.month == date2.month) {
            if (date1.day > date2.day) {
                output = 1;
                return output;
            }
            else {
                output = -1;
                return output;
            }
        }
    }
}

/* Testing pushing to different branches */