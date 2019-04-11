// Author: LDT
// Date: 09APR2019
// Title: Deck.h
// Description:

#include <vector>
#include "Card.h"
#include <string>
using namespace std;

#ifndef DECK_H
#define DECK_H

class Deck{
private:
    vector<Card> mydeck;
public:
    int deckSize();
    void newDeck();
    Card dealCard();
};

#endif //DECK_H
