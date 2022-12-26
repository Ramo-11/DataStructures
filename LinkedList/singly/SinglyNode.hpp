#ifndef NODE_H
#define NODE_H

#include <iostream>

class SinglyNode {
    public:
        // Default constructor
        SinglyNode ();
        SinglyNode (char d);

        void setData (char d);
        char getData ();
        void printNode ();

        SinglyNode* next;
        char data;
};

#endif