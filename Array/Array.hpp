#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

class Array {
    private:
        char *data;
        int maxSize;
        int currentSize;

    public:
        // constructors and destructor
        Array ();
        Array (int initialSize);
        Array (int initialSize, char letter);
        Array (const Array& arrToCopy);
        // ~Array ();

        // getters and setters
        void setMaxSize (int maxSize);
        void setCurrentSize (int currentSize);
        int getMaxSize ();
        int getCurrentSize ();

        // operators
        const Array& operator = (const Array& rhs);
        bool operator == (const Array& rhs) const;
        bool operator != (const Array& rhs) const;
        char& operator [] (int index);
        const char& operator [] (int index) const;

        // other methods
        char getCharacter(int index) const;
        void setCharacter(int index, char value);
        void resize(int new_size);
        void shrink();
        int find(char character) const;
        int find(char character, int start) const;
        void fill(char character);
        void reverse(void);
        Array slice(int begin) const;
        Array slice(int begin, int end) const;
};

#endif