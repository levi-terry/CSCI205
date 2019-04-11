// Author: LDT
// Date: 11APR2019
// Title: main.cpp
// Description: Main file for blackjack program.

#include <iostream>
#include <string>
#include <vector>
#include "Card.h"
#include "Deck.h"
#include "Hand.h"
using namespace std;

int main() {
    //TODO: Loop for game
    //TODO: Input validation

    // Global Variables
    Hand playerHand;
    Hand dealerHand;
    Deck gameDeck;
    int playerBet;

    gameDeck.newDeck(); // Initialize deck with cards

    // Introductory Message
    cout << "Welcome to Blackjack!" << endl;
    cout << "Please enter bet amount:" << endl;
    cin >> playerBet;
    //TODO: Input validation for playerBet
    playerHand.bet(playerBet);
    cout << "You bet $" << playerHand.getBet() << endl;

    return 0;
}