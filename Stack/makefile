all: clearScreen Stack.o main.o
	g++ Stack.o main.o -o program

Stack.o: 
	g++ -c Stack.cpp

main.o:
	g++ -c main.cpp

run: clearScreen all
	./program

clean: clearScreen
	rm -f *.o
	rm -f program

clearScreen:
	clear