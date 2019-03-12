// Author: LDT
// Date: 12MAR2019
// Title: terry_vote.c
// Description: This program reads in a text file of a list of names then allows the user
// to vote on a certain name, dynamically updating the vote counts.

#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){
    // Variable Names
    FILE* inFile = NULL; // File pointer
    char *line[30] = NULL; // Line pointer

    // Open file, point to it with inFile
    inFile = fopen(argv[1], "r");

    if (inFile == NULL) {
        printf("Could not open file %s.\n", argv[1]);
        return -1; // -1 indicates error
    }

    fscanf(inFile,"%s",token);
    while (!feof(inFile)) {
        if (strcmp(token,"-") != 0) {
            push(&s, token);
        }
        else {
            if (!is_empty(&s)) {
                pop(&s, token);
            } else {
                printf("Nothing on the stack to pop\n");
            }
        }
        fscanf(inFile,"%s",token);
    }

    // Close File
    fclose(inFile);

    return 0;
}