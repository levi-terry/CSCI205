// Author: LDT
// Date: 11APR2019
// Title: Card.h
// Description: Header file for Card class.

#include <string>
using namespace std;

#ifndef CARD_H
#define CARD_H

class Card{
private:
    string name;
    string suit;
    int value;
public:
    void setName(string cardName);
    void setSuit(string cardSuit);
    void setValue(int cardValue);
    string getName();
    string getSuit();
    int getValue();
    void printCard();
    Card();
    Card(string cardName, string cardSuit, int cardValue);
};

#endif //CARD_H
