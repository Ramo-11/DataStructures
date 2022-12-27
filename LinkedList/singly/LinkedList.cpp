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
        SinglyNode* current = head;
        while(current->next != nullptr) {
             current = current->next;
        }
        current->next = newNode;
    }
}

void LinkedList::deleteNode (char d) {
    while (elementExists(d)) {
        if (head == nullptr) {
            std::cout << "Nothing to delete: LinkedList is empty\n";
            return;
        }

        if (head->getData() == d) {
            SinglyNode* current = head;
            head = head->next;
            delete current;
            std::cout << "Element [" << d << "] has been deleted from the linked list\n";
        } else {
            SinglyNode* current = head;
            SinglyNode* previous = head;

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

SinglyNode* LinkedList::getHead () {
    return this->head;
}

void LinkedList::reverse () {
    if (head == nullptr || head->next == nullptr) {
        std::cout << "Cannot reverse linked list, it doesn't contain enough elements\n";
        return;
    } 

    SinglyNode* current = head;
    SinglyNode* nextNode = nullptr;
    SinglyNode* previousNode = nullptr;

    while (current != nullptr) {
        nextNode = current->next;
        current->next = previousNode;
        previousNode = current;
        current = nextNode;
    }
    head = previousNode;
}

bool LinkedList::elementExists (char d) {
    SinglyNode* current = head;
    while (current != nullptr) {
        if (current->getData() == d) {
            return true;
        }
        current = current->next;
    }
    return false;
}

void LinkedList::print () {
    SinglyNode* current = head;

    while(current != nullptr) {
        std::cout << current->getData();
        if (current->next != nullptr) {
            std::cout << " -> ";
        }   
        current = current->next;
    }
    std::cout << "\n";
}