#include "Node.hpp"

Node::Node ()
: next(nullptr), 
  data('0') { }

Node::Node (char d)
: next(nullptr), 
  data(d) { }

void Node::setData (char d) {
    this->data = d;
}

char Node::getData () {
    return this->data;
}

void Node::printNode () {
    std::cout << "node data: " << this->data << "\n";
}