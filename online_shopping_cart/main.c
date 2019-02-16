// Author: LDT
// Date: 14FEB2019
// Title: main.c
// Purpose: To make something more complicated using struct and pointers

// Import Statements
#include <stdio.h>
#include <string.h>
#include "ItemToPurchase.h"

int main(void){
    ItemToPurchase item1;
    ItemToPurchase item2;

    printf("Item 1\nEnter the item name:\n");
    fgets(item1.itemName, 50, stdin);
    if ((strlen(item1.itemName) > 0) && (item1.itemName[strlen (item1.itemName) - 1] == '\n'))
        item1.itemName[strlen (item1.itemName) - 1] = '\0';
    printf("Enter the item price:\n");
    scanf("%d", &item1.itemPrice);
    printf("Enter the item quantity:\n");
    scanf("%d", &item1.itemQuantity);

    char c = getchar();
    while(c != '\n' && c != EOF) {
        c = getchar();
    }

    printf("Item 2\nEnter the item name:\n");
    fgets(item2.itemName, 50, stdin);
    if ((strlen(item2.itemName) > 0) && (item2.itemName[strlen (item2.itemName) - 1] == '\n'))
        item2.itemName[strlen (item2.itemName) - 1] = '\0';
    printf("Enter the item price:\n");
    scanf("%d", &item2.itemPrice);
    printf("Enter the item quantity:\n");
    scanf("%d", &item2.itemQuantity);

    printf("TOTAL COST\n");
    PrintItemCost(item1);
    PrintItemCost(item2);

    printf("Total: $%d\n", ((item1.itemPrice * item1.itemQuantity) + (item2.itemPrice * item2.itemQuantity)));

    return 0;
}