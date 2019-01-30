// Author: LDT
// Date: 29JAN2019
// Title: temp_converter.c
// Purpose: This program prints a table of temperatures
// from/to a user specified range in Fahrenheit and Celsius.

// Import Statements
#include <stdio.h>

// Main Code
int main(void){

    // Global Variables
    double upperLimit;
    double lowerLimit;
    int stepSize;

    // Print Table Header
    printf("Fahrenheit-Celsius Table\n");

    // Ask for user input to get range of table and step size
    printf("Enter a lower limit (Fahrenheit):\n");
    scanf("%lf", &lowerLimit);
    printf("Enter an upper limit (Fahrenheit):\n");
    scanf("%lf", &upperLimit);
    printf("Enter step size:\n");
    scanf("%d", &stepSize);

    for(int i = lowerLimit; i <= upperLimit; i += stepSize){
        printf("%3.0lf", lowerLimit);
        printf("%6.1lf", ((lowerLimit - 32) / 1.8));
        printf("\n");
        lowerLimit += stepSize;
    }

    return 0;
}