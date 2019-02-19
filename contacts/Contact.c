// Author: LDT
// Date: 19FEB2019
// Title: Contact.c
// Purpose: Function definitions for contact node

#include <stdio.h>
#include "Contact.h"

void InitContact(ContactNode* contact){
    contact->contactName = NULL;
    contact->contactPhoneNum = NULL;
    contact->nextNodePtr = NULL;
}

void PrintContact(ContactNode contact){
    printf("%s", contact.contactName);
    printf("%20s", contact.contactPhoneNum);
}

// TODO: More functions?