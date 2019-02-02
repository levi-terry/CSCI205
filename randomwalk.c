// Author: LDT
// Date: 02FEB2019
// Title: randomwalk.c
// Description: This program uses an array
// to visualize the randomness of a coin flip.

// Import Statements
#include <stdio.h>

// Main Code Block
int main(void){

    // Global Variables
    int coinFlips[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int flipCount;
    int marker = 5; // To mark middle index of array
    int flip;
    //char goAgain = 'y';

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

    for(int i = 0; i < 11; i++){
        if(coinFlips[i] == 0){
            printf("\n");
        }
        else{
            printf("%d is : %d\n", i, coinFlips[i]);
        }
    }

    return 0;

}