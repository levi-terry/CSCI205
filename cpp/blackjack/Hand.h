// Author: LDT
// Date: 11APR2019
// Title: Hand.h
// Description: Header file for Hand class.

// Include statements
#include "Card.h"
#include <vector>

#ifndef HAND_H
#define HAND_H

class Hand{
private:
    vector<Card> myHand;
    int playerMoney;
    int handTotal = 0;
    int playerBet;
public:
    void addCard(Card newCard); // Function to add card to hand calling Deck.dealCard()
    void bet(int betAmount); // Function to bet money
    int getBet(); // Function to return player bet
    void winBet(float multiplier); // Function to add to player's money if they win
    int getHandTotal(); // Function to return total of card values
    void showPlayerHand(); // Function to print player's cards
    void showDealerHand(); // Function to print dealer's cards
    void dealerFirstCard(); // Function to print only dealers first card
    void clearHand(); // Function to remove cards from hand
    void showMoney(); // Function to display player's money
    int getMoney(); // Function to return player's money
    Hand(); // Constructor for Hand class
};

#endif //HAND_H