// Author: LDT
// Date: 02MAR2019
// Title: Stack.c
// Description:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Stack.h"

void initialize(stack* s){
    s->size = 0;
    s->top = NULL;
}

void push(stack* s,char* str){
    Item *newItem = (Item*)malloc(sizeof(Item));
    strcpy(newItem->word, str);
    newItem->nextNodePtr = NULL;
    if(is_empty(s)){
        s->top = newItem;
    }
    else{
        newItem->nextNodePtr = s->top;
        s->top = newItem;
    }
    s->size += 1;
}

void pop(stack* s, char* str){
    s->top = s->top->nextNodePtr;
    s->size -= 1;
}

void peek(stack* s, char* str){
    strcpy(str, s->top->word);
}

bool is_empty(stack* s){
    if(s->top == NULL){
        return true;
    }
    return false;
}

int get_length(stack* s){
    return s->size;
}

void display(stack* s){
    Item *ptr = s->top;
    while(ptr != NULL){
        printf("%s ", ptr->word);
        ptr = ptr->nextNodePtr;
    }
    printf("\n");
}