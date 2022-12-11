all: clearScreen Queue.o main.o
	g++ Queue.o main.o -o program

Queue.o: 
	g++ -c Queue.cpp

main.o:
	g++ -c main.cpp

run: clearScreen all
	./program

clean: clearScreen
	rm -f *.o
	rm -f program

clearScreen:
	clear