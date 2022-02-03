/* Author: Aidan Corcoran
   Date: 01/14/2022
   Assignment #1
   Takes input and determines if number is a perfect number
*/
#include <stdio.h>
#include <stdlib.h>

int perfect_number (int);

int main () {
    int number;

    printf("Enter a number to determine if it is a perfect number: ");
    scanf("%d", &number);

    if (number == 0) {
        printf("%d is not a perfect number (0)\n", number);
        return 0;
    }

    int result = perfect_number(number);

    if (result == 1) {
        printf("%d is a perfect number (%d)\n", number, result);
    }
    else {
        printf("%d is not a perfect number (%d)\n", number, result);
    }

    return 0;
}

int perfect_number (int number) {
    int result, sum = 0; /* Result is sending 1 if a perfect number or 0 if it is not, sum is to sum up the divisors */

    /* Looping from 1 to one less than the number and if there is no remainder from division you add that number to the sum */
    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    if (sum == number) {
        result = 1;
    }
    else {
        result = 0;
    }

    return result;
}