// Author: LDT
// Date: 02MAR2019
// Title: Stack.h
// Description: This program provides the definitions for the Stack data type.

#ifndef STACK_H
#define STACK_H

#include <stdbool.h>
#include "Item.h"

typedef struct stack_struct{
    Item* top;
    int size;
} stack;

void initialize(stack* s);
void push(stack* s,char* str);
void pop(stack* s, char* str);
void peek(stack* s, char* str);
bool is_empty(stack* s);
int get_length(stack* s);
void display(stack* s);

#endif