all: clearScreen SinglyNode.o LinkedList.o main.o
	g++ SinglyNode.o LinkedList.o main.o -o program

SinglyNode.o: 
	g++ -c SinglyNode.cpp

LinkedList.o: 
	g++ -c LinkedList.cpp

main.o:
	g++ -c main.cpp

run: clearScreen all
	./program

clean: clearScreen
	rm -f *.o
	rm -f program

clearScreen:
	clear