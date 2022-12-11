#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>

class Queue {
    private:
        char *data;
        int size;
        int rear;
        int front;

    public:
        // constructors and destructor
        Queue ();
        Queue (int initialSize);
        Queue (const Queue& stackToCopy);

        // operators
        Queue& operator = (Queue& rhs);
        bool operator == (const Queue& rhs) const;
        bool operator != (const Queue& rhs) const;

        // other methods
        void enqueue (char letter);
        void dequeue ();
        bool isEmpty ();
        void printFirstElement ();
        void printLastElement ();
        void printAll ();
};

#endif