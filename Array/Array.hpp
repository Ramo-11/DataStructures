#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

class Array {
    private:
        char *data;
        int size;

    public:
        // constructors and destructor
        Array ();
        Array (int initialSize);
        Array (int initialSize, char letter);
        Array (const Array& arrToCopy);
        // ~Array ();

        // getters and setters
        void setSize (int size);
        int getSize ();

        // operators
        const Array& operator = (const Array& rhs);
        bool operator == (const Array& rhs) const;
        bool operator != (const Array& rhs) const;
        char& operator [] (int index);
        const char& operator [] (int index) const;

        // other methods
        char getCharacter (int index) const;
        void setCharacter (int index, char value);
        void resize (int newSize);
        int find (char character) const;
        int find (char character, int start) const;
        void fill (char character);
        void reverse (void);
        void slice (int begin); // takes the begin index, the index is included
        void slice (int begin, int end); // takes the begin and end indexes, they are both included
        void print ();
};

#endif