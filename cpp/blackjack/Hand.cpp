// Author: LDT
// Date: 11APR2019
// Title: Hand.cpp
// Description: Definitions for Hand class.

#include "Hand.h"
#include <iostream>
using namespace std;

void Hand::addCard(Card newCard){
    myHand.push_back(newCard);
    handTotal += newCard.getValue();
}

// Set player's bet amount
void Hand::bet(int betAmount){
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
void Hand::winBet(float multiplier){
    playerMoney += playerBet * multiplier;
}

// Returns the total value of cards in player's hand.
// Used for comparing player/dealer hands and seeing if value >= 21.
int Hand::getHandTotal(){
    if(handTotal > 21){
        for(unsigned int i = 0; i < myHand.size(); i++){
            if(myHand.at(i).getValue() == 11){
                myHand.at(i).setValue(1);
                handTotal -= 10;
                break;
            }
        }
    }
    return handTotal;
}

// Print player's hand by iterating through vector.
void Hand::showPlayerHand(){
    cout << "Player Hand:" << endl;
    // Iterate through vector myHand
    for(unsigned int i = 0; i < myHand.size(); i++){
        myHand.at(i).printCard();
    }
}

void Hand::showDealerHand(){
    cout << "Dealer Hand:" << endl;
    // Iterate through vector myHand
    for(unsigned int i = 0; i < myHand.size(); i++){
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
    handTotal = 0;
}

// Print player's money.
void Hand::showMoney(){
    cout << "Player Money: $" << playerMoney << endl;
}

int Hand::getMoney(){
    return playerMoney;
}

// Constructor for Hand class.
Hand::Hand(){
    playerMoney = 1000;
}