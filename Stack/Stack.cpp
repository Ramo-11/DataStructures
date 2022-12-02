#include "Stack.hpp"

Stack::Stack () 
: data(nullptr),
  size (0),
  top (-1) 
  { }

Stack::Stack (int initialSize) 
: data(nullptr),
  top (-1),
  size(0) {
    for (int i = 0; i < initialSize; i++) {
        push ('0');
    }
}

Stack::Stack (const Stack& stackToCopy) {
    this->top = stackToCopy.top;
    this->size = stackToCopy.size;
    
    data = new char[size];
    for (int i = 0; i <= top; i++) {
        this->data[i] = stackToCopy.data[i];
    }
}

// ~Stack ();

void Stack::setSize (int size) {
    this->size = size;
}

int Stack::getSize () {
    return this->size;
}

Stack& Stack::operator = (Stack& rhs) {
    this->top = rhs.top;
    this->size = rhs.size;

    delete data;
    data = new char[size];

    for (int i = 0; i <= top; i++) {
        this->data[i] = rhs.data[i];
    }

    return *this;
}

bool Stack::operator == (const Stack& rhs) const {
    if (this->size != rhs.size || this->top != rhs.top) {
        return false;
    }

    if (size != 0) {
        for (int i = 0; i < size; i++) {
            if (this->data[i] != rhs.data[i]) {
                return false;
            }
        }
    }
    return true;
}

bool Stack::operator != (const Stack& rhs) const {
    return !(*this == rhs);
}

void Stack::push (char letter) {
    if (data == nullptr) {
        data = new char[size];
    }
    top++;
    size++;
    data[top] = letter;
}

void Stack::pop () {
    if (isEmpty()) {
        std::cout << "Nothing to pop, stack is empty\n";
        return;
    }

    char poppedLetter = data[top--];
    size--;
    std::cout << "The popped letter is: " << poppedLetter << "\n";
}

bool Stack::isEmpty () {
    return top == -1;
}

void Stack::printTop () {
    if (!isEmpty()) {
        std::cout << "Top of stack: " << data[top] << "\n";
    } else {
        std::cout << "Stack is empty\n";
    }
}

void Stack::printAll () {
    if (isEmpty()) {
        std::cout << "Nothing to print, stack is empty\n";
        return;
    }
    
    int temp = top;

    std::cout << "Stack's elements:\n";
    while (temp >= 0) {
        std::cout << data[temp--] << " ";
    }
    std::cout << "\n";
}
