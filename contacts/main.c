// Author: LDT
// Date: 19FEB2019
// Title: main.c
// Purpose: Create a contact list.

#include <stdio.h>
#include <string.h>
#include "Contact.h"
#include "LLContacts.h"

int main(void){
    char userChoice[5] = "y";
    char name[50];
    char phoneNumber[50];
    llc contactList;
    InitContactList(&contactList);

    while(strcmp(userChoice, "n") != 0){
        printf("Enter name:\n");
        fgets(name, 50, stdin);
        if((strlen(name) > 0) && (name[strlen(name) - 1] == '\n'))
            name[strlen(name) - 1] = '\0';
        printf("Enter phone number:\n");
        fgets(phoneNumber, 50, stdin);
        if((strlen(phoneNumber) > 0) && (phoneNumber[strlen(phoneNumber) - 1] == '\n'))
            phoneNumber[strlen(phoneNumber) - 1] = '\0';

        //Insert Contact
        InsertContact(&contactList, name, phoneNumber);

        printf("Enter another contact? (y/n):\n");
        fgets(userChoice, 50, stdin);
        if((strlen(userChoice) > 0) && (userChoice[strlen(userChoice) - 1] == '\n'))
            userChoice[strlen(userChoice) - 1] = '\0';

    }

    DisplayContactList(&contactList);
}