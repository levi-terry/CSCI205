// Author: Levi Terry
// Date: 26JAN2019
// Title: main.c
// Purpose: This program is for playing the game Yahtzee.
// The user has a certain number of tries to randomly
// roll the same five numbers on simulated dice.

// Import Statements
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Main Code
int main(void){

    // Print Welcome statements
    printf("Welcome to Yahtzee!!\nYou have 3 rolls to try and get 5 of a kind\n");

    // Global Variables
    int rolls = 1;
    int dice[5];
    char userChoice;

    // Roll dice, generate pseudo-random number between 1 and 6 inclusive
    srand(time(0));
    for(int i = 0; i < 5; i++){
        dice[i] = rand() % 6 + 1;
    }

    // Loop 3 times
    while(rolls < 4) {

        // Display results of first roll
        printf("\nHere we go - roll %d!\n", rolls);
        rolls += 1;
        printf("Die 1: %d\n", dice[0]);
        printf("Die 2: %d\n", dice[1]);
        printf("Die 3: %d\n", dice[2]);
        printf("Die 4: %d\n", dice[3]);
        printf("Die 5: %d\n", dice[4]);

        // Evaluate results
        if(dice[0] == dice[1] && dice[1] == dice[2] && dice[2] == dice[3] && dice[3] == dice[4]){
            printf("***********\nYAHTZEE!!!!\n***********\n");
            break;
        }

        if(rolls == 4){
            printf("Sorry - Better luck next time!\n");
            break;
        }

        int diceCounter = 1;
        printf("Please answer the following (y or n)\n");
        while(diceCounter < 6) {
            printf("Would you like to reroll die %d?:\n", diceCounter);
            scanf(" %c", &userChoice);
            if (userChoice == 'y') {
                dice[diceCounter - 1] = rand() % 6 + 1;
            }
            diceCounter += 1;
        }

    }

    return 0;

}