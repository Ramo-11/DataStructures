#include "DoublyNode.hpp"

DoublyNode::DoublyNode ()
: next(nullptr), 
  previous(nullptr),
  data('0') { }

DoublyNode::DoublyNode (char d)
: next(nullptr), 
  previous(nullptr),
  data(d) { }

void DoublyNode::setData (char d) {
    this->data = d;
}

char DoublyNode::getData () {
    return this->data;
}

void DoublyNode::printNode () {
    std::cout << "node data: " << this->data << "\n";
}