#ifndef STACK_H
#define STACK_H

#include <iostream>

class Stack {
    private:
        char *data;
        int size;
        int top;

    public:
        // constructors and destructor
        Stack ();
        Stack (int initialSize);
        Stack (const Stack& stackToCopy);

        // operators
        Stack& operator = (Stack& rhs);
        bool operator == (const Stack& rhs) const;
        bool operator != (const Stack& rhs) const;

        // other methods
        void push (char letter);
        void pop ();
        bool isEmpty ();
        void printTop ();
        void printAll ();
};

#endif