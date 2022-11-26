#include "Array.hpp"

Array::Array ()
: data(nullptr),
  maxSize(0),
  currentSize(0)
  { }

Array::Array (int initialSize)
: data(nullptr),
  maxSize(initialSize),
  currentSize(initialSize)
  { 
    data = new char[maxSize];
    for (int i = 0; i < maxSize; i++) {
        data[i] = '0';
    }
  }

Array::Array (int initialSize, char letter)
: maxSize(initialSize),
  currentSize(initialSize)
  { 
    data = new char[maxSize];
    for (int i = 0; i < maxSize; i++) {
        data[i] = letter;
    }
  }

Array::Array (const Array& arrToCopy)
: maxSize(arrToCopy.maxSize),
  currentSize(arrToCopy.currentSize)
 {
    data = new char[maxSize];
    for (int i = 0; i < maxSize; i++) {
        data[i] = arrToCopy.getCharacter(i);
    }
 }

void Array::setMaxSize (int maxSize) {
    this->maxSize = maxSize;
}

void Array::setCurrentSize (int currentSize) {
    this->currentSize = currentSize;
}

int Array::getMaxSize () {
    return maxSize;
}

int Array::getCurrentSize () {
    return currentSize;
}

char Array::getCharacter (int index) const {
    return data[index];
}

void Array::setCharacter(int index, char value) {
    data[index] = value;
}

void Array::resize(int new_size) {
    
}

void Array::shrink() {

}

int Array::find(char character) const {
    for (int i = 0; i < maxSize; i++) {
        if (data[i] == character) {
            return i; // return index of character
        }
    }
    return -1; // character not found in the array
}

int Array::find(char character, int start) const {
    if (start >= maxSize) {
        throw std::out_of_range("Out Of Range");
    }

    for (int i = start; i < maxSize; i++) {
        if (data[i] == character) {
            return i; // return index of character
        }
    }
    return -1; // character not found in the array
}

void Array::fill(char character) {
    for (int i = 0; i < maxSize; i++) {
        data[i] = character;
    }
}

void Array::reverse(void) {
    for (int i = 0; i < (maxSize / 2); i++) {
        char temp = data[i];
        data[i] = data[maxSize - 1 - i];
        data[maxSize - 1 - i] = temp;
    }
}

Array Array::slice(int begin) const {

}

Array Array::slice(int begin, int end) const {

}