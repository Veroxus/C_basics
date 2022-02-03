/* Author: Aidan Corcoran
   Date: 01/10/2022
   Assignment #1
   Basic calculator
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
    int num1, num2, result; /* Store inputted numbers and variable to store the result */
    char operator; /* Store the desired operator as a single character */

    printf("Enter two numbers followed by the required mathematical operation (+, *, -)\n");
    scanf("%d %d %c", &num1, &num2, &operator);

    /* Passing the operator function to switch statement */
    switch (operator)
    {
    case '+': /* If addition operator execute num1 + num2 */
        result = num1 + num2;
        break;
    case '*': /* If multiplication execute num1 * num2 */
        result = num1 * num2;
        break;
    case '-': /* If subtraction execute num1 - num2 */
        result = num1 - num2;
        break;
    default: /* If +, * or - was not entered tell the user incorrect operation */
        printf("Error incorrect mathematical operator, try again.\n");
        return 0;
    }

    printf("The result of %d %c %d is: %d\n", num1, operator, num2, result);

    return 0;
}