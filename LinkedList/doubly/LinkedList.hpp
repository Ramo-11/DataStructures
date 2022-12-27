#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

#include "DoublyNode.hpp"

class LinkedList {
    private:
        DoublyNode* head;

    public:
        LinkedList ();

        // inserts node in the beginning of the linkedlist
        void push (char d);

        // inserts node in the end of the linkedlist
        void insertAfter (DoublyNode* node, char d);

        // inserts node in the end of the linkedlist
        void append (char d);

        // deletes all nodes with matching char
        void deleteNode (char d);

        DoublyNode* getHead ();

        bool elementExists (char d);
        
        void print ();
};

#endif