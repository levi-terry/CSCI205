// Author: LDT
// Date: 29JAN2019
// Title: half_arrow.c
// Purpose: This program creates a half arrow of
// the user's specified size.

// Import Statements
#include <stdio.h>

// Main Code
int main(void) {
    int arrowBaseHeight;
    int arrowBaseWidth;
    int arrowHeadWidth;

    printf("Enter arrow base height:\n");
    scanf("%d", &arrowBaseHeight);

    printf("Enter arrow base width:\n");
    scanf("%d", &arrowBaseWidth);

    printf("Enter arrow head width:\n");
    scanf("%d", &arrowHeadWidth);
    printf("\n");

    // Draw arrow base (height = 3, width = 2)
    printf( "**\n");
    printf( "**\n");
    printf( "**\n");

    // Draw arrow head (width = 4)
    printf( "****\n");
    printf( "***\n");
    printf( "**\n");
    printf( "*\n");

    return 0;
}