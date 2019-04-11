// Author: LDT
// Date: 09APR2019
// Title: Card.cpp
// Description:

#include "Card.h"
#include <iostream>
#include <string>

using namespace std;

void Card::setName(string cardName){
    name = cardName;
}

void Card::setSuit(string cardSuit){
    suit = cardSuit;
}

void Card::setValue(int cardValue){
    value = cardValue;
}

string Card::getName(){
    return name;
}

string Card::getSuit(){
    return suit;
}

int Card::getValue(){
    return value;
}

void Card::printCard(){
    cout << name << " of " << suit << endl;
}

Card::Card(){
    name = "No Name";
    suit = "No Suit";
    value = 0;
}

Card::Card(string cardName, string cardSuit, int cardValue){
    name = cardName;
    suit = cardSuit;
    value = cardValue;
}