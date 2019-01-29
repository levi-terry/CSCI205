// Author: LDT
// Date: 29JAN2019
// Name: right_triangle.c
// Purpose: This program draws a right triangle of
// size n specified by the user.

// Import Statements
#include <stdio.h>

// Main Code
int main(void) {
    // Global Variables
    char triangleChar;
    int triangleHeight;
    //char triangle[20];

    printf("Enter a character:\n");
    scanf("%c", &triangleChar);

    printf("Enter triangle height:\n");
    scanf("%d", &triangleHeight);

    for(int i = 0; i < triangleHeight; i++){
        int j = 0;
        while(j <= i) {
            printf("%c ", triangleChar);
            j += 1;
        }
        printf("\n");
    }

    return 0;
}