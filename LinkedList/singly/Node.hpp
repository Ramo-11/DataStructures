#ifndef NODE_H
#define NODE_H

#include <iostream>

class Node {
    public:
        // Default constructor
        Node ();
        Node (char d);

        void setData (char d);
        char getData ();
        void printNode ();

        Node* next;
        char data;
};

#endif