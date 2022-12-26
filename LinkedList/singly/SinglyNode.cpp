#include "SinglyNode.hpp"

SinglyNode::SinglyNode ()
: next(nullptr), 
  data('0') { }

SinglyNode::SinglyNode (char d)
: next(nullptr), 
  data(d) { }

void SinglyNode::setData (char d) {
    this->data = d;
}

char SinglyNode::getData () {
    return this->data;
}

void SinglyNode::printNode () {
    std::cout << "node data: " << this->data << "\n";
}