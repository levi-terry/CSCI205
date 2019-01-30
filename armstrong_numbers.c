// Author: LDT
// Date: 29JAN2019
// Title: armstrong_numbers.c
// Purpose: This program finds all of the Armstrong
// numbers between two specified user numbers.

// Import Statements
#include <stdio.h>
#include <math.h>

// Main Code
int main(void){

    // Global Variables
    int lower;
    int upper;

    // Ask for user input
    printf("Enter two numbers:\n");
    scanf("%d %d", &lower, &upper);

    printf("Armstrong numbers between %d and %d are: ", lower, upper);
    // Loop to count up to upper
    for(int i = lower + 1; i < upper; i++){
        int j = i, k = i, digits = 0, total =0, remainder = 0;

        // Calculate number of digits in int
        while(j != 0){
            j /= 10;
            digits += 1;
        }

        // Calculate total of each digit raised to how many digits there are
        while(k != 0){
            remainder = k % 10;
            total += pow(remainder, digits);
            k /= 10;
        }

        // Compare the total of the digits to the power with original number
        if(total == i){
            printf("%d ", i);
        }


    }
    printf("\n");

    return 0;
}