// Author: LDT
// Date: 31JAN2019
// Title: soccer_roster.c
// Description: This program creates two arrays,
// one for player number and one for player rating,
// from user input. A menu is displayed to the user
// which allows various options to manipulate the data.

// Import Statements
#include <stdio.h>
#include <stdlib.h>

// Main Code Block
int main(void) {

    // Global variables
    int playerNumber[10];
    int playerRating[10];
    char option = 'y';
    int jersey;
    int rating;

    // Initializing the values for number and rating arrays
    for(int i = 0; i < 5; i++){
        printf("Enter player %d's jersey number:\n", (i + 1));
        scanf(" %d", &playerNumber[i]);
        printf("Enter player %d's rating:\n", (i + 1));
        scanf(" %d", &playerRating[i]);
    }

    // Initial print of the full arrays
    printf("\nROSTER\n");
    for(int i = 0; i < 5; i++){
        printf("Player %d -- Jersey number: %d, Rating: %d\n", (i + 1), playerNumber[i], playerRating[i]);
    }

    // Loop for user menu
    while(option != 'q'){
        printf("MENU\n");
        printf("u - Update player rating\n");
        printf("a - Output players above a rating\n");
        printf("r - Replace player\n");
        printf("o - Output roster\n");
        printf("q - Quit\n");
        printf("Choose an option:\n");
        scanf(" %c", &option);

        switch(option){
            // Update player rating
            case 'u':
                printf("Enter a jersey number:\n");
                scanf("%d", &jersey);
                printf("Enter a new rating for player:\n");
                scanf("%d", &rating);
                for(int i = 0; i < 5; i++){
                    if(jersey == playerNumber[i]){
                        playerRating[i] = rating;
                    }
                }
                break;

            // Show all players above a certain rating
            case 'a':
                printf("Enter a rating:\n");
                scanf("%d", &rating);
                printf("\n");
                printf("ABOVE %d\n", rating);
                for(int i = 0; i < 5; i++){
                    if(playerRating[i] > rating){
                        printf("Player %d -- Jersey number: %d, Rating: %d\n", (i + 1), playerNumber[i],
                                playerRating[i]);
                    }
                }
                break;

            // Replace a player in the roster
            // This only works if the player number already exists in array
            case 'r':
                printf("Enter a jersey number:\n");
                scanf(" %d", &jersey);
                for(int i = 0; i < 5; i++){
                    if(jersey == playerNumber[i]){
                        printf("Enter a new jersey number:\n");
                        scanf(" %d", &jersey);
                        playerNumber[i] = jersey;
                        printf("Enter a rating for the new player:\n");
                        scanf(" %d", &rating);
                        playerRating[i] = rating;
                        break;
                    }
                }
                break;

            // Displays entire roster (both arrays)
            case 'o':
                printf("ROSTER\n");
                for(int i = 0; i < 5; i++){
                    printf("Player %d -- Jersey number: %d, Rating: %d\n", (i + 1), playerNumber[i], playerRating[i]);
                }
                break;

            // Quits program
            case 'q':
                exit(0);

            default:
                break;
        }

    }

    return 0;
}