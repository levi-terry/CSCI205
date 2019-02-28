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
    inFile = fopen("example1.txt", "r");
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

    printf("Total inputs: %d\n", totalInputs);
    printf("Counts: %d,%d,%d,%d,%d,%d,%d,%d,%d\n", ones, twos, threes, fours, fives, sixes, sevens, eights, nines);
    printf("1: ");
    DisplayStars(ones);
    printf("2: ");
    DisplayStars(twos);
    printf("3: ");
    DisplayStars(threes);
    printf("4: ");
    DisplayStars(fours);
    printf("5: ");
    DisplayStars(fives);
    printf("6: ");
    DisplayStars(sixes);
    printf("7: ");
    DisplayStars(sevens);
    printf("8: ");
    DisplayStars(eights);
    printf("9: ");
    DisplayStars(nines);

    }