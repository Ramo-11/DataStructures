#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

#include "Node.hpp"

class LinkedList {
    private:
        Node* head;

    public:
        LinkedList ();
    
        // inserts node in the end of the linkedlist
        void insertNode (char d);

        // deletes all nodes with matching char
        void deleteNode (char d);

        bool elementExists (char d);
        void print ();
};

#endif