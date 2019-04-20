date.exe : main.o mydate.o
	g++ main.o mydate.o -o date.exe

main.o : main.cpp mydate.h
	g++ -Wall main.cpp

mydate.o : mydate.h
	g++ -Wall mydate.cpp

clean : 
	rm *.o date.exe
	ls
