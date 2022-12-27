#include "LinkedList.hpp"

LinkedList::LinkedList () 
: head(nullptr) { }
    
void LinkedList::push (char d) {
    DoublyNode* newNode = new DoublyNode(d);
 
    newNode->next = head;
    newNode->previous = nullptr;

    if (head != nullptr) {
        head->previous = newNode;
    }
    head = newNode;
}

void LinkedList::insertAfter (DoublyNode* node, char d) {
    if (node == nullptr) {
        std::cout << "Cannot insert a new node after a null node";
        return;
    }
    DoublyNode* newNode = new DoublyNode(d);
    newNode->next = node->next;
    node->next = newNode;
    newNode->previous = node;

    if (newNode->next != nullptr) {
        newNode->next->previous = newNode;
    }
}

void LinkedList::append (char d) {
    DoublyNode* newNode = new DoublyNode(d);
    DoublyNode* last = head; 

    newNode->next = nullptr;
 
    if (head == nullptr) {
        newNode->previous = nullptr;
        head = newNode;
        return;
    }
 
    while (last->next != nullptr) {
        last = last->next;
    }
 
    last->next = newNode;
 
    newNode->previous = last;
}

void LinkedList::deleteNode (char d) {
    while (elementExists(d)) {
        if (head == nullptr) {
            std::cout << "Nothing to delete: LinkedList is empty\n";
            return;
        }

        if (head->getData() == d) {
            DoublyNode* current = head;
            head = head->next;
            delete current;
            std::cout << "Element [" << d << "] has been deleted from the linked list\n";
        } else {
            DoublyNode* current = head;
            DoublyNode* previous = head;

            while (current != nullptr) {
                if (current->getData() == d) {
                    previous->next = current->next;
                    current = nullptr;
                    std::cout << "Element [" << d << "] has been deleted from the linked list\n";
                }
                else {
                    previous = current;
                    current = current->next;
                }
            }     
        }
    }
}

DoublyNode* LinkedList::getHead () {
    return this->head;
}

bool LinkedList::elementExists (char d) {
    DoublyNode* current = head;
    while (current != nullptr) {
        if (current->getData() == d) {
            return true;
        }
        current = current->next;
    }
    return false;
}

void LinkedList::print () {
    DoublyNode* current = head;

    while(current != nullptr) {
        std::cout << current->getData();
        if (current->next != nullptr) {
            std::cout << " -> ";
        }   
        current = current->next;
    }
    std::cout << "\n";
}