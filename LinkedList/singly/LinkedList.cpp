#include "LinkedList.hpp"

LinkedList::LinkedList () 
: head(nullptr) { }
    
void LinkedList::insertNode (char d) {
    Node* newNode = new Node(d);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* pointer = head;
        while(pointer->next != nullptr) {
             pointer = pointer->next;
        }
        pointer->next = newNode;
    }
}

void LinkedList::deleteNode (char d) {
    while (elementExists(d)) {
        if (head == nullptr) {
            std::cout << "Nothing to delete: LinkedList is empty\n";
            return;
        }

        if (head->getData() == d) {
            Node* pointer = head;
            head = head->next;
            delete pointer;
            std::cout << "Element [" << d << "] has been deleted from the linked list\n";
        } else {
            Node* pointer = head;
            Node* previous = head;

            while (pointer != nullptr) {
                if (pointer->getData() == d) {
                    previous->next = pointer->next;
                    pointer = nullptr;
                    std::cout << "Element [" << d << "] has been deleted from the linked list\n";
                }
                else {
                    previous = pointer;
                    pointer = pointer->next;
                }
            }     
        }
    }
}

bool LinkedList::elementExists (char d) {
    Node* pointer = head;
    while (pointer != nullptr) {
        if (pointer->getData() == d) {
            return true;
        }
        pointer = pointer->next;
    }
    return false;
}

void LinkedList::print () {
    Node* pointer = head;

    while(pointer != nullptr) {
        std::cout << pointer->getData();
        if (pointer->next != nullptr) {
            std::cout << " -> ";
        }   
        pointer = pointer->next;
    }
    std::cout << "\n";
}