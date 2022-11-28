all: clearScreen Array.o main.o
	g++ Array.o main.o -o program

Array.o: 
	g++ -c Array.cpp

main.o:
	g++ -c main.cpp

run: clearScreen all
	./program

clean: clearScreen
	rm -f *.o
	rm -f program

clearScreen:
	clear