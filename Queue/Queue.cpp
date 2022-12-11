#include "Queue.hpp"

Queue::Queue () 
: data(nullptr),
  size (0),
  rear (-1),
  front (-1)
  { }

Queue::Queue (int initialSize) 
: data(nullptr),
  size (0),
  rear (-1),
  front (-1) {
    for (int i = 0; i < initialSize; i++) {
        enqueue ('0');
    }
}

Queue::Queue (const Queue& queueToCopy) {
    this->size = queueToCopy.size;
    this->rear = queueToCopy.rear;
    this->front = queueToCopy.front;
    
    data = new char[size];
    for (int i = 0; i <= rear; i++) {
        this->data[i] = queueToCopy.data[i];
    }
}

Queue& Queue::operator = (Queue& rhs) {
    this->size = rhs.size;
    this->rear = rhs.rear;
    this->front = rhs.front;

    data = new char[size];

    for (int i = 0; i <= rear; i++) {
        this->data[i] = rhs.data[i];
    }

    return *this;
}

bool Queue::operator == (const Queue& rhs) const {
    if (this->size != rhs.size || this->rear != rhs.rear || this->front != rhs.front) {
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

bool Queue::operator != (const Queue& rhs) const {
    return !(*this == rhs);
}

void Queue::enqueue (char letter) {
    if (data == nullptr) {
        data = new char[size];
    }
    if (isEmpty()) {
        front++;
    }
    data[++rear] = letter;
    size++;

    std::cout << "The letter: " << letter << " has been inserted into the queue\n";
}

void Queue::dequeue () {
    if (isEmpty()) {
        std::cout << "Nothing to dequeue, queue is empty\n";
        return;
    }

    char queuedLetter = data[front];
    char *tempData = new char[size];

    for (int i = 0; i < size; i++) {
        tempData[i] = data[i];
    }

    data = new char[size];

    for (int i = 0; i < size - 1; i++) {
        data[i] = tempData[i+1];
    }
    size--;
    rear--;
    delete tempData;
    std::cout << "The dequeued letter is: " << queuedLetter << "\n";
    if (size == 0) {
        front--;
        std::cout << "The queue is now empty\n";
    }
}

bool Queue::isEmpty () {
    return rear == -1;
}

void Queue::printFirstElement () {
    if (!isEmpty()) {
        std::cout << "first element in the queue: " << data[front] << "\n";
    } else {
        std::cout << "Queue is empty\n";
    }
}

void Queue::printLastElement () {
    if (!isEmpty()) {
        std::cout << "last element to enter the queue is: " << data[rear] << "\n";
    } else {
        std::cout << "Queue is empty\n";
    }
}

void Queue::printAll () {
    if (isEmpty()) {
        std::cout << "Nothing to print, queue is empty\n";
        return;
    }
    
    int temp = front;

    std::cout << "Queue's elements (first-in is displayed first):\n";
    while (temp < size) {
        std::cout << data[temp++] << " ";
    }
    std::cout << "\n";
}
