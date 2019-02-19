// Author: LDT
// Date: 16FEB2019
// Title: count.c
// Description: This program counts the vowels, consonants, digits, and spaces
// of a string using a pointer.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){

    // User string to count (100 characters allowed)
    char userString[100];
    printf("Enter a string:\n");
    fgets(userString, 100, stdin);
    if ((strlen(userString) > 0) && (userString[strlen(userString) - 1] == '\n')) {
        userString[strlen(userString) - 1] = '\0';
    }
    // Pointer for counting
    char *ptr;

    // Assign userString's address to pointer variable
    ptr = userString;

    // Counter Variables
    int numVowels = 0, numCons = 0, numDigits = 0, numSpaces = 0;

    // Loop through string until it hits null character, dereference to assess value instead of address
    while(*ptr!='\0'){
        if(isspace(*ptr)){
            numSpaces += 1;
        }
        else if(isdigit(*ptr)){
            numDigits += 1;
        }
        else if(*ptr == 'A' || *ptr == 'a' || *ptr == 'E' || *ptr == 'e' || *ptr == 'I' || *ptr == 'i' || *ptr == 'O' ||
        *ptr == 'o' || *ptr == 'U' || *ptr == 'u'){
            numVowels += 1;
        }
        else if(ispunct(*ptr)){
            // Do nothing
        }
        else{
            numCons += 1;
        }
        ptr += 1;
    }

    // Output results
    printf("Vowels: %d\n", numVowels);
    printf("Consonants: %d\n", numCons);
    printf("Digits: %d\n", numDigits);
    printf("Spaces: %d\n", numSpaces);
    
}

