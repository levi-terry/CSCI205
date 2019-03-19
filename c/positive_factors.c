// Author: LDT
// Date: 29JAN2019
// Title: positive_factors.c
// Purpose: This program factors out a user's positive input.

// Import Statements
#include <stdio.h>

// Main Code
int main(void){

    // Global Variables
    int userInt;

    // Ask for user input
    printf("Enter a positive integer:\n");
    scanf("%d", &userInt);

    printf("Factors of %d are: ", userInt);
    // Loop to count up to userInt
    for(int i = 1; i <= userInt; i++){
        if(userInt % i == 0){
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}