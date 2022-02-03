/* Author: Aidan Corcoran
   Date: 01/14/2022
   Assignment #1
   Printing the perfect numbers from 10,000 to 1
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int perfect_number (int);

int main () {
    /* Looping from 10,000 to 1 and calling the function for every number to check if perfect number */
    for (int i = 10000; i >= 1; i--) {
        if (perfect_number(i) == 1) {
            printf("%d\n", i);
        }
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