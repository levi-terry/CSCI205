playing_cards.exe : main.o Card.o Deck.o
	g++ main.o Card.o Deck.o -o playing_cards.exe

main.o : main.cpp Card.h Deck.h
	g++ -Wall -c main.cpp

Card.o : Card.h
	g++ -Wall -c Card.cpp

Deck.o : Card.h Deck.h
	g++ -Wall -c Deck.cpp

clean :
	rm *.o playing_cards.exe
	ls
