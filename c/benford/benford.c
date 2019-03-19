// Author: LDT
// Date: 28FEB2019
// Title: benford.c
// Purpose: Reads in a file of integers and determines if it complies with Benford's Law.

#include <stdio.h>
#include <stdlib.h>

void DisplayStars(const int number){
    for(int i = 0; i < number; i++){
        printf("*");
    }
    printf("\n");
}

int main(void){
    FILE* inFile = NULL;
    int totalInputs = 0;
    int ones = 0, twos = 0, threes = 0, fours = 0, fives = 0, sixes = 0, sevens = 0, eights = 0, nines = 0;
    char number[20];

    // Open file myfile.txt
    inFile = fopen("myfile.txt", "r");
    if(inFile == NULL){
        printf("Error opening myfile.txt\n");
        return -1;
    }

    fscanf(inFile, "%s", number);
    while(!feof(inFile)){
        if(number[0] == '1'){
            ones += 1;
        }
        else if(number[0] == '2'){
            twos += 1;
        }
        else if(number[0] == '3'){
            threes += 1;
        }
        else if(number[0] == '4'){
            fours += 1;
        }
        else if(number[0] == '5'){
            fives += 1;
        }
        else if(number[0] == '6'){
            sixes += 1;
        }
        else if(number[0] == '7'){
            sevens += 1;
        }
        else if(number[0] == '8'){
            eights += 1;
        }
        else if(number[0] == '9'){
            nines += 1;
        }
        totalInputs += 1;
        fscanf(inFile, "%s", number);
    }

    double p1 = (float)ones / totalInputs * 100;
    double p2 = (float)twos / totalInputs * 100;
    double p3 = (float)threes / totalInputs * 100;
    double p4 = (float)fours / totalInputs * 100;
    double p5 = (float)fives / totalInputs * 100;
    double p6 = (float)sixes / totalInputs * 100;
    double p7 = (float)sevens / totalInputs * 100;
    double p8 = (float)eights / totalInputs * 100;
    double p9 = (float)nines / totalInputs * 100;

    printf("Number of inputs: %d\n", totalInputs);
    printf("Counts: %d,%d,%d,%d,%d,%d,%d,%d,%d\n", ones, twos, threes, fours, fives, sixes, sevens, eights, nines);
    printf("%5.2lf%% ", p1);
    printf("1: ");
    DisplayStars((int)p1);
    printf("%5.2lf%% ", p2);
    printf("2: ");
    DisplayStars((int)p2);
    printf("%5.2lf%% ", p3);
    printf("3: ");
    DisplayStars((int)p3);
    printf("%5.2lf%% ", p4);
    printf("4: ");
    DisplayStars((int)p4);
    printf("%5.2lf%% ", p5);
    printf("5: ");
    DisplayStars((int)p5);
    printf("%5.2lf%% ", p6);
    printf("6: ");
    DisplayStars((int)p6);
    printf("%5.2lf%% ", p7);
    printf("7: ");
    DisplayStars((int)p7);
    printf("%5.2lf%% ", p8);
    printf("8: ");
    DisplayStars((int)p8);
    printf("%5.2lf%% ", p9);
    printf("9: ");
    DisplayStars((int)p9);

    // Determine if dataset complies
    printf("Benford's law? ");
    if(28.0 <= p1 <= 38.0 && 15.0 <= p2 <= 21.0 && 10.0 <= p3 <= 13.0 && p4 < p3 && p5 < p4 && p6 < p5 && p7 < p6 && p8
            < p7 && p9 < p8){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    }