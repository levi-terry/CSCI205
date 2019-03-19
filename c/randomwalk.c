// Author: LDT
// Date: 02FEB2019
// Title: randomwalk.c
// Description: This program uses an array
// to visualize the randomness of a coin flip.

// Import Statements
#include <stdio.h>
#include <stdlib.h>

// Function to simulate the random coin flips
void Flipper(int coinFlips[]){
    // Variables
    int flipCount;
    int marker = 5; // To mark middle index of array
    int flip;

    printf("Enter the number of times you would like to flip the coin:\n");
    scanf(" %d", &flipCount);

    // Loop up to user specified number to generate random
    for(int i = 0; i < flipCount; i++){
        flip = rand() % 2;  // Random value between 0 and 1
        if(flip == 0){
            marker += 1;
            if(marker == 11){  // Bounds checking to keep from going over 10
                marker -= 1;
            }
            coinFlips[marker] += 1;
        }
        else if(flip == 1){
            marker -= 1;
            if(marker == -1){  // Bounds checking to keep from going under 0
                marker += 1;
            }
            coinFlips[marker] += 1;
        }
    }
}

// Function to display an asterisk for each value in the array
void DisplayStars(const int coinFlips[]){
    for(int i = 0; i < 11; i++){
        int j = 0;
        while(j < coinFlips[i]){
            printf("*");
            j++;
        }
        printf("\n");
    }
}

// Main Code Block
int main(void){

    // Create empty in array with 11 places
    int coinFlips[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    char goAgain = 'y';  // Variable for allowing user to repeat program

    // Loops program until user enters n
    while(goAgain != 'n') {
        Flipper(coinFlips);
        DisplayStars(coinFlips);
        printf("Would you like to run the program again (y,n)?\n");
        scanf(" %c", &goAgain);
    }

    return 0;

}