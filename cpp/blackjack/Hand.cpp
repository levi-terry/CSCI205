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

void Hand::bet(int betAmount){
    //TODO: Will need to get this bet amount from main.cpp
    playerBet = betAmount;
    playerMoney -= betAmount;
}

int Hand::getBet(){
    return playerBet;
}

void Hand::winBet(int multiplier){
    //TODO: Will need to set multiplier in main.cpp
    playerMoney += playerBet * multiplier;
}

void Hand::clearHand(){
    myHand.clear();
}

int Hand::getHandTotal(){
    //TODO: Will need logic to address changing value of Aces
    return handTotal;
}

void Hand::showHand(){
    // Iterate through vector myHand
    for(int i = 0; i < myHand.size(); i++){
        myHand.at(i).printCard();
    }
}

void Hand::dealerFirstCard(){
    myHand.at(0).printCard();
}

Hand::Hand(){
    playerMoney = 1000;
}