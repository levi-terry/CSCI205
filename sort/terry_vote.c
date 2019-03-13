// Author: LDT
// Date: 12MAR2019
// Title: terry_vote.c
// Description: This program reads in a text file of a list of names then allows the user
// to vote on a certain name, dynamically updating the vote counts.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Student_struct{
    char name[30];
    int votes;
} Student;

int main(int argc, char* argv[]){
    // Variable Names
    FILE* inFile = NULL; // File pointer
    int arrSize;
    int i = 1;
    char c = 0;


    // Open file, point to it with inFile
    inFile = fopen(argv[1], "r");

    if (inFile == NULL) {
        printf("Could not open file %s.\n", argv[1]);
        return -1; // -1 indicates error
    }
    else{
        printf("inFile = %s\n", argv[1]);
    }

    while(!feof(inFile)){
        c = fgetc(inFile);
        if(c == '\n'){
            arrSize++;
        }
    }

    printf("arrSize = %d\n", arrSize);
    Student *students;
    students = malloc(arrSize*sizeof(Student));

    while(i <= arrSize){
        fscanf(inFile, "%s", &(students[i-1].name));
        students[i-1].votes = 0;
        i += 1;
    }

    /*
    for(i = 0; i < arrSize; i++){
        printf("Student: %s\nVotes: %d\n", students[i].name, students[i].votes);
    }*/

    // Close File
    fclose(inFile);

    return 0;
}