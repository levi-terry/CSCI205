// Author: Levi Terry
// Date: 22JAN2019
// Title: highestroll.c
// Purpose: This program is designed to simulate dice rolls, counting their total.

// Import Statements
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Main code
int main(void){

    // Variables
    char userFirstName[20];
    char userLastName[20];
    int dice[5];

    // Ask user for first/last name
    printf("Please enter your first and last name:\n");
    scanf(" %s %s", userFirstName, userLastName);

    // Generate random values for dice
        srand(time(0));
    for(int i = 0; i < 5; i++){
        dice[i] = rand() % 6 + 1;
    }

    //Display results of pseudo-random roll
    printf("Welcome %s %s! You rolled:\n", userFirstName, userLastName);
    printf("Die 1: %d\n", dice[0]);
    printf("Die 2: %d\n", dice[1]);
    printf("Die 3: %d\n", dice[2]);
    printf("Die 4: %d\n", dice[3]);
    printf("Die 5: %d\n", dice[4]);
    printf("The total of your 5 dice is:\n");
    printf("The maximum die is:\n");
    printf("The minimum die is:\n");

    return 0;
}
