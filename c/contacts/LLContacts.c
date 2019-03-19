// Author: LDT
// Date: 19FEB2019
// Title: LLContacts.c
// Purpose: Function definitions for linked list contacts

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "LLContacts.h"

void InitContactList(llc* l){
    l->head = NULL;
    l->size = 0;
}

void InsertContact(llc* l, char* name, char* phone){
    ContactNode *newContact = (ContactNode*)malloc(sizeof(ContactNode));
    // Convert name to all uppercase
    for(int i = 0; i < strlen(name); i++){
        name[i] = toupper(name[i]);
    }
    strcpy(newContact->contactName, name);
    strcpy(newContact->contactPhoneNum, phone);
    ContactNode *next = (ContactNode*)malloc(sizeof(ContactNode));
    ContactNode *last = (ContactNode*)malloc(sizeof(ContactNode));
    if(l->size == 0){
        l->head = newContact;
    }
    else{
        next = l->head;
        if(next->contactName[0] > newContact->contactName[0]){
            newContact->nextNodePtr = next;
            l->head = newContact;
        }
        else if(next->nextNodePtr == NULL){
            next->nextNodePtr = newContact;
        }
        else{
            last = next;
            next = next->nextNodePtr;
            while(next != NULL){
                if(next->contactName[0] > newContact->contactName[0]){
                    last->nextNodePtr = newContact;
                    newContact->nextNodePtr = next;
                    break;
                }
                if(next->nextNodePtr == NULL){
                    next->nextNodePtr = newContact;
                    break;
                }
                last = next;
                next = next->nextNodePtr;
            }
        }
    }
    l->size += 1;
}

void DisplayContactList(llc* l){
    printf("CONTACT LIST\n");
    ContactNode *ptr;
    ptr = l->head;
    while(ptr != NULL){
        PrintContact(*ptr);
        ptr = ptr->nextNodePtr;
    }
}