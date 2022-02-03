/* Author: Aidan Corcoran
   Date: 01/10/2022
   Assignment #1
   Determining max and min number
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
    int num_array[5]; /* Question calls for 5 numbers so no need for a dynamic array */
    int max, min;

    printf("Enter 5 numbers to determine the largest to smallest numbers\n");
    /* Calling the user to enter 5 numbers */
    for (int i = 0; i < 5; i++) {
        printf("Enter #%d: ", i+1);
        scanf("%d", &num_array[i]);
        printf("\n");
    }

    /* Set min and max equal to first number in array */
    min = max = num_array[0];

    /* Checking to see if numbers in array are greater than or smaller than the set min and max */
    for (int i = 1; i < 5; i++) {
        if (num_array[i] > max) {
            max = num_array[i];
        }
        if (num_array[i] < min) {
            min = num_array[i];
        }
    }

    printf("The max number is: %d, the min number is: %d\n", max, min);

    return 0;
}