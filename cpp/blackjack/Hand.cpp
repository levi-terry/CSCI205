// Author: LDT
// Date: 11APR2019
// Title: Hand.cpp
// Description: Definitions for Hand class.

#include "Hand.h"
#include <iostream>
using namespace std;

void Hand::addCard(Card newCard){
    //TODO: Will need to call dealCard from deck in main.cpp
    myHand.push_back(newCard);
    handTotal += newCard.getValue();
}

// Set player's bet amount
void Hand::bet(int betAmount){
    //TODO: Will need to get this bet amount from main.cpp
    playerBet = betAmount;
    playerMoney -= betAmount;
}

// Returns player's bet.
int Hand::getBet(){
    return playerBet;
}

// If player won, add their bet to their money total.
// If they lost, don't need to do anything since
// their bet was already subtracted from their money.
void Hand::winBet(int multiplier){
    //TODO: Will need to set multiplier in main.cpp
    playerMoney += playerBet * multiplier;
}

// Returns the total value of cards in player's hand.
// Used for seeing if value >= 21.
int Hand::getHandTotal(){
    //TODO: Will need logic to address changing value of Aces
    return handTotal;
}

// Print player's hand by iterating through vector.
void Hand::showHand(){
    // Iterate through vector myHand
    for(int i = 0; i < myHand.size(); i++){
        myHand.at(i).printCard();
    }
}

// Print the dealer's first card.
// In blackjack, the dealer always shows their first card
// to the player before the player's turn.
void Hand::dealerFirstCard(){
    myHand.at(0).printCard();
    //TODO: Can add logic here for insurance
}

// Clear cards in vector myHand.
void Hand::clearHand(){
    myHand.clear();
}

// Print player's money.
void Hand::showMoney(){
    cout << "Balance: " << playerMoney << endl;
}

// Constructor for Hand class.
Hand::Hand(){
    playerMoney = 1000;
}