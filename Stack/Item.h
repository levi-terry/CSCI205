// Author: LDT
// Date: 02MAR2019
// Title: Item.h
// Description: This program provides the definitions for the Item data type.

#ifndef STACK_H
#define STACK_H

typedef struct Item_struct{
    char word[50];
    struct Item_struct *nextNodePtr;
} Item;

Item CreateItem(char word);

#endif