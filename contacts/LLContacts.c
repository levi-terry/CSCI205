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
    //strcpy(*name, toupper(name);  // TODO: Convert string to uppercase
    strcpy(newContact->contactName, name);
    strcpy(newContact->contactPhoneNum, phone);
    ContactNode *ptr = (ContactNode*)malloc(sizeof(ContactNode));
    int success = 0;
    if(l->size == 0){
        l->head = newContact;
    }
    else{
        ptr = l->head;
        if(ptr->nextNodePtr == NULL) {
            if (ptr->contactName[0] < newContact->contactName[0]) {
                ptr->nextNodePtr = newContact;
            } else {
                newContact->nextNodePtr = l->head;
                l->head = newContact;
            }
        }
        else{
            if(l->head->contactName[0] > newContact->contactName[0]){
                newContact->nextNodePtr = l->head;
                l->head = newContact;
            }
            else {
                ptr = ptr->nextNodePtr;
                if(ptr->nextNodePtr == NULL){
                    if(ptr->contactName[0] < newContact->contactName[0]) {
                        ptr->nextNodePtr = newContact;
                        success = 1;
                    }
                    else{
                        newContact->nextNodePtr = ptr;
                        ptr = newContact;
                        success = 1;
                    }
                }
                if(success != 1){
                    while (ptr->nextNodePtr != NULL) {
                        if (ptr->contactName[0] > newContact->contactName[0]) {
                            newContact->nextNodePtr = ptr;
                            ptr = newContact;
                            break;
                        } else {
                            if(ptr->nextNodePtr == NULL){
                                ptr->nextNodePtr = newContact;
                            }
                            ptr = ptr->nextNodePtr;
                        }
                    }
                }
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
        PrintContact(ptr);
        ptr = ptr->nextNodePtr;
    }
}