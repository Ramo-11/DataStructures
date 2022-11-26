#include "Array.hpp"

Array::Array ()
: data(nullptr),
  size(0)
  { }

Array::Array (int initialSize)
: data(nullptr),
  size(initialSize)
  { 
    data = new char[size];
    for (int i = 0; i < size; i++) {
        data[i] = '0';
    }
  }

Array::Array (int initialSize, char letter)
: size(initialSize)
  { 
    data = new char[size];
    for (int i = 0; i < size; i++) {
        data[i] = letter;
    }
  }

Array::Array (const Array& arrToCopy)
: size(arrToCopy.size)
 {
    data = new char[size];
    for (int i = 0; i < size; i++) {
        data[i] = arrToCopy.getCharacter(i);
    }
 }

void Array::setSize (int size) {
    this->size = size;
}

int Array::getSize () {
    return size;
}

char Array::getCharacter (int index) const {
    return data[index];
}

void Array::setCharacter(int index, char value) {
    data[index] = value;
}

void Array::resize(int newSize) {
    
}

int Array::find(char character) const {
    for (int i = 0; i < size; i++) {
        if (data[i] == character) {
            return i; // return index of character
        }
    }
    return -1; // character not found in the array
}

int Array::find(char character, int start) const {
    if (start >= size) {
        throw std::out_of_range("Out Of Range");
    }

    for (int i = start; i < size; i++) {
        if (data[i] == character) {
            return i; // return index of character
        }
    }
    return -1; // character not found in the array
}

void Array::fill(char character) {
    for (int i = 0; i < size; i++) {
        data[i] = character;
    }
}

void Array::reverse(void) {
    for (int i = 0; i < (size / 2); i++) {
        char temp = data[i];
        data[i] = data[size - 1 - i];
        data[size - 1 - i] = temp;
    }
}

void Array::slice(int begin) {
    if (begin >= size) {
        throw std::out_of_range("Cannot slice");
    }

    char *newData = new char[size - begin];

    int j = 0;
    for (int i = begin; i < size; i++) {
        newData[j++] = data[i];
    }

    size = size - begin;

    delete data;
    data = new char[size];

    for (int i = 0; i < size; i++) {
        data[i] = newData[i];
    }

    delete newData;
}

void Array::slice(int begin, int end) {
    if (begin >= size || end >= size || end < begin) {
        throw std::out_of_range("Cannot slice");
    }

    if (end == begin) {
        char temp = data[end];
        size = 1;
        delete data;
        data = new char[size];
        data[0] = temp;
    } else {
        char *newData = new char[end - begin];

        int j = 0;
        for (int i = begin; i <= end; i++) {
            newData[j++] = data[i];
        }

        size = end - begin + 1;

        delete data;
        data = new char[size];

        for (int i = 0; i < size; i++) {
            data[i] = newData[i];
        }

        delete newData;
    }
}

void Array::print () {
    for (int i = 0; i < size; i++) {
        std::cout << data[i] << " ";
    }
    std::cout << "\n";
}