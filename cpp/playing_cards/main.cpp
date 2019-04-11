// Author: LDT
// Date: 09APR2019
// Title: main.cpp
// Description:

#include <iostream>
#include <string>
#include "Card.h"
#include "Deck.h"
using namespace std;
int main() {
    Deck d1;
    Card p1;
    Card p2;
    d1.newDeck();
    cout << "Deck size: " << d1.deckSize() << endl;
    p1 = d1.dealCard();
    p2 = d1.dealCard();
    p1.printCard();
    p2.printCard();
    cout << "Deck size: " << d1.deckSize() << endl;
    d1.newDeck();
    cout << endl << "New deck size: " << d1.deckSize() << endl;
    return 0;
}