// Author: LDT
// Date: 02MAR2019
// Title: Item.c
// Description:

#include <stdio.h>
#include <string.h>
#include "Item.h"

/*
Item CreateItem(char word){
    Item newItem;
    strcpy(newItem.word, &word);
    newItem.nextNodePtr = NULL;
    return newItem;
}*/

void PrintItem(Item item){
    printf("%s ", item.word);
}