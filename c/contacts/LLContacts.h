// Author: LDT
// Date: 19FEB2019
// Title: LLContacts.h
// Purpose: Header file for linked list contact structure

#ifndef LLCONTACTS_H
#define LLCONTACTS_H

#include "Contact.h"

typedef struct linked_list_contacts_struct{
    ContactNode* head;
    int size;
} llc;

void InitContactList(llc* l);
void InsertContact(llc* l, char* name, char* phone);
void DisplayContactList(llc* l);

#endif