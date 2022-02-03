/* Author: Aidan Corcoran
   Date: 01/10/2022
   Assignment #1
   Calculating the sum of a numbers divisors
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
    int number, sum = 0; /* Number variable to store the input and sum to store the sum of number's divisors */

    printf("Enter an integer to determine the sum of its divisors\n");
    scanf("%d", &number);

    /* Summing the number's divisors by determine if the number i divides into the number input perfectly */
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    
    printf("The sum is: %d\n", sum);
    
    return 0;
}