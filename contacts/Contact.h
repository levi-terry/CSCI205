// Author: LDT
// Date: 19FEB2019
// Title: Contact.h
// Purpose: Header file for contact structure

#ifndef CONTACT_H
#define CONTACT_H

typedef struct ContactNode_struct{
    char contactName[50];
    char contactPhoneNum[50];
    struct ContactNode_struct *nextNodePtr;
} ContactNode;

ContactNode CreateContact(char name, char phone);
void PrintContact(ContactNode* contact);

#endif