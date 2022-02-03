/* Author: Aidan Corcoran
   Date: 01/10/2022
   Assignment #1
   Reverse the order of a number
*/

#include <stdio.h>

int reverse_order (int);

int main () {
    int number; /* Variable to store inputted number */

    printf("Enter a 4-digit number:\n");
    scanf("%d", &number);

    printf("%d in reverse order is: %d\n", number, reverse_order(number)); /* Print the output and call the function to determine reverse order */

    return 0;
}

int reverse_order (int number) {
    int reverse_number = 0; /* Adding the number in reverse to this variable */
    int digit; /* Removing the last digit of the inputted number */

    /* Take remainder of the number when divided by 10 to remove the last digit, and then that digit is added to the reverse_number variable multiplied by power of 10 */
    for (int i = 0; number != 0; i++) {
        digit = number % 10;
        reverse_number = reverse_number * 10 + digit;
        number /= 10;
    }
    
    return reverse_number;
}