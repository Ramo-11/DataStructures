all: clearScreen DoublyNode.o LinkedList.o main.o
	g++ DoublyNode.o LinkedList.o main.o -o program

DoublyNode.o: 
	g++ -c DoublyNode.cpp

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