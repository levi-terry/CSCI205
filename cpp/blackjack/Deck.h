// Author: LDT
// Date: 11APR2019
// Title: Deck.h
// Description: Header file for Deck class.

#include <vector>
#include "Card.h"
using namespace std;

#ifndef DECK_H
#define DECK_H

class Deck{
private:
    vector<Card> myDeck;
public:
    int deckSize();
    void newDeck();
    Card dealCard();
};

#endif //DECK_H
