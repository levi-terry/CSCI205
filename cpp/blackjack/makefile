blackjack.exe : main.o Card.o Deck.o Hand.o
	g++ main.o Card.o Deck.o Hand.o -o blackjack.exe

main.o : main.cpp Card.h Deck.h Hand.h
	g++ -Wall -c main.cpp

Card.o : Card.h
	g++ -Wall -c Card.cpp

Deck.o : Card.h Deck.h
	g++ -Wall -c Deck.cpp

Hand.o : Hand.h Card.h
    g++ -Wall -c Hand.cpp

clean :
	rm *.o playing_cards.exe
	ls
