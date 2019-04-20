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
    srand(time(NULL));
    //TODO: Loop for game
    //TODO: Input validation

    // Global Variables
    Hand playerHand;
    Hand dealerHand;
    Deck gameDeck;
    int playerBet;
    char continuePlay = 'y';
    char playChoice;

    gameDeck.newDeck(); // Initialize deck with cards

    while(continuePlay == 'y' && playerHand.getMoney() > 0) {

        // Introductory Message
        cout << "Welcome to Blackjack!" << endl;
        playerHand.showMoney();
        cout << "Please enter bet amount:" << endl;
        cin >> playerBet;
        //TODO: Input validation for playerBet
        playerHand.bet(playerBet);
        playerHand.showMoney();
        cout << "You bet $" << playerHand.getBet() << endl;

        if(gameDeck.deckSize() < 20){
            cout << "Shuffling new deck..." << endl;
            gameDeck.newDeck();
        }

        // Deal Player Hand
        playerHand.addCard(gameDeck.dealCard());
        playerHand.addCard(gameDeck.dealCard());

        // Deal Dealer Hand
        dealerHand.addCard(gameDeck.dealCard());
        dealerHand.addCard(gameDeck.dealCard());

        // Show Player Hand
        playerHand.showPlayerHand();

        // Show Dealer First Card
        cout << "Dealer First Card:" << endl;
        dealerHand.dealerFirstCard();

        // Check if player has blackjack
        if(playerHand.getHandTotal() == 21) {
            if(dealerHand.getHandTotal() != 21) {
                cout << "Blackjack!" << endl;
                cout << "Player wins hand." << endl;
                playerHand.winBet(2.5);
                playerHand.showMoney();
            }
            else{
                cout << "Player and dealer both have blackjack..." << endl;
                dealerHand.showDealerHand();
            }
        }

        while(playerHand.getHandTotal() < 21){
            cout << "Stand(s) or hit(h)?" << endl;
            cin >> playChoice;
            if(playChoice == 'h'){
                playerHand.addCard(gameDeck.dealCard());
                playerHand.showPlayerHand();
            }
            else if(playChoice == 's'){
                break;
            }
            else{
                cout << "Invalid input." << endl;
            }

        }
        if(playerHand.getHandTotal() > 21){
            cout << "Bust! Player loses $" << playerHand.getBet() << endl;
        }
        else{
            if(playerHand.getHandTotal() < dealerHand.getHandTotal()){
                cout << "Player loses..." << endl;
                dealerHand.showDealerHand();
                cout << "Lost $" << playerHand.getBet() << endl;
                playerHand.showMoney();
            }
            else if(dealerHand.getHandTotal() >= 17 &&  dealerHand.getHandTotal() < 21){
                cout << "Player wins!" << endl;
                dealerHand.showDealerHand();
                cout << "Won $" << playerHand.getBet() * 2 << endl;
                playerHand.winBet(2.0);
                playerHand.showMoney();
            }
            else{
                while(dealerHand.getHandTotal() < 17){
                    dealerHand.addCard(gameDeck.dealCard());
                }
                if(dealerHand.getHandTotal() > 21){
                    cout << "Dealer busts" << endl;
                    dealerHand.showDealerHand();
                    cout << "Won $" << playerHand.getBet() * 2 << endl;
                    playerHand.winBet(2.0);
                    playerHand.showMoney();
                }
                else if(playerHand.getHandTotal() == dealerHand.getHandTotal()){
                    cout << "Push" << endl;
                    dealerHand.showDealerHand();
                    playerHand.winBet(1.0);
                    playerHand.showMoney();
                }
                else{
                    if(playerHand.getHandTotal() > dealerHand.getHandTotal()){
                        cout << "Player wins!" << endl;
                        dealerHand.showDealerHand();
                        cout << "Won $" << playerHand.getBet() * 2 << endl;
                        playerHand.winBet(2.0);
                        playerHand.showMoney();
                    }
                    else{
                        cout << "Player loses..." << endl;
                        dealerHand.showDealerHand();
                        cout << "Lost $" << playerHand.getBet() << endl;
                        playerHand.showMoney();
                    }
                }
            }
        }

        //Clear Hands
        playerHand.clearHand();
        dealerHand.clearHand();

        // Ask to play again
        if(playerHand.getMoney() > 0) {
            cout << "Play another hand? Yes(y) or No(n)" << endl;
            cin >> continuePlay;
        }
        else{
            cout << "You ran out of money." << endl;
        }
    }

    return 0;
}