// Author: LDT
// Date: 19FEB2019
// Title: main.c
// Purpose: Create a contact list.

#include <stdio.h>
#include "Contact.h"
#include "LLContacts.h"

int main(void){
    char userChoice = 'y';
    char name[50];
    char phoneNumber[50];
    ContactNode newContact;
    // TODO: Determine how to initialize the struct and add contacts to it

    while(userChoice != 'n'){
        printf("Enter name:\n");
        fgets(name, 50, stdin);
        if((strlen(name) > 0) && (name[strlen(name) - 1] == '\n'))
            name[strlen(name) - 1] = '\0';
        printf("Enter phone number:\n");
        fgets(phoneNumber, 50, stdin);
        if((strlen(phoneNumber) > 0) && (phoneNumber[strlen(phoneNumber) - 1] == '\n'))
            phoneNumber[strlen(phoneNumber) - 1] = '\0';

        printf("Enter another contact? (y/n)\n");
        scanf("%c", &userChoice);
    }

    // TODO: Print out contact list

}