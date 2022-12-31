all: clearScreen HashTable.o main.o
	g++ HashTable.o main.o -o program

HashTable.o: 
	g++ -c HashTable.cpp

main.o:
	g++ -c main.cpp

run: clearScreen all
	./program

clean: clearScreen
	rm -f *.o
	rm -f program

clearScreen:
	clear