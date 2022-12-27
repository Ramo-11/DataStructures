#ifndef NODE_H
#define NODE_H

#include <iostream>

class DoublyNode {
    public:
        // Default constructor
        DoublyNode ();
        DoublyNode (char d);

        void setData (char d);
        char getData ();
        void printNode ();

        DoublyNode* next;
        DoublyNode* previous;
        char data;
};

#endif