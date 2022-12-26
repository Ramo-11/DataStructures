#include "LinkedList.hpp"

LinkedList::LinkedList () 
: head(nullptr) { }
    
void LinkedList::push (char d) {
    SinglyNode* newNode = new SinglyNode(d);
 
    newNode->next = head;
    head = newNode;
}

void LinkedList::insertAfter (SinglyNode* node, char d) {
    if (node == NULL) {
        std::cout << "Cannot insert a new node after a null node";
        return;
    }
    SinglyNode* newNode = new SinglyNode(d);
    newNode->next = node->next;
    node->next = newNode;
}

void LinkedList::append (char d) {
    SinglyNode* newNode = new SinglyNode(d);
    if (head == nullptr) {
        head = newNode;
    } else {
        SinglyNode* pointer = head;
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
            SinglyNode* pointer = head;
            head = head->next;
            delete pointer;
            std::cout << "Element [" << d << "] has been deleted from the linked list\n";
        } else {
            SinglyNode* pointer = head;
            SinglyNode* previous = head;

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

SinglyNode* LinkedList::getHead () {
    return this->head;
}

bool LinkedList::elementExists (char d) {
    SinglyNode* pointer = head;
    while (pointer != nullptr) {
        if (pointer->getData() == d) {
            return true;
        }
        pointer = pointer->next;
    }
    return false;
}

void LinkedList::print () {
    SinglyNode* pointer = head;

    while(pointer != nullptr) {
        std::cout << pointer->getData();
        if (pointer->next != nullptr) {
            std::cout << " -> ";
        }   
        pointer = pointer->next;
    }
    std::cout << "\n";
}