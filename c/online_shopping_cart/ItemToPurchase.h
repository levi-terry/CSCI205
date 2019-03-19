#ifndef ITEMTOPURCHASE_H
#define ITEMTOPURCHASE_H

typedef struct ItemToPurchase_struct{
    char itemName[50];
    int itemPrice;
    int itemQuantity;
} ItemToPurchase;

void MakeItemBlank(ItemToPurchase *itemToPurchase);

void PrintItemCost(ItemToPurchase itemToPurchase);

#endif