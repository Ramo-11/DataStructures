#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

#include "SinglyNode.hpp"

class LinkedList {
    private:
        SinglyNode* head;

    public:
        LinkedList ();

        // inserts node in the beginning of the linkedlist
        void push (char d);

        // inserts node in the end of the linkedlist
        void insertAfter (SinglyNode* node, char d);

        // inserts node in the end of the linkedlist
        void append (char d);

        // deletes all nodes with matching char
        void deleteNode (char d);

        SinglyNode* getHead ();

        void reverse ();

        bool elementExists (char d);
        
        void print ();
};

#endif