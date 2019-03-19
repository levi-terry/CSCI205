// Author: LDT
// Date: 19FEB2019
// Title: Contact.c
// Purpose: Function definitions for contact node

#include <stdio.h>
#include <string.h>
#include "Contact.h"

ContactNode CreateContact(char name, char phone){
    ContactNode newContact;
    strcpy(newContact.contactName, &name);
    strcpy(newContact.contactPhoneNum, &phone);
    newContact.nextNodePtr = NULL;

    return newContact;
}

void PrintContact(ContactNode contact){
    printf("%-20s", contact.contactName);
    printf(" %s\n", contact.contactPhoneNum);
}
