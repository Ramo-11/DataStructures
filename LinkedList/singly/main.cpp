#include "LinkedList.hpp"

int main () {
    LinkedList list;

    list.insertNode('o');
    list.insertNode('m');
    list.insertNode('a');
    list.insertNode('r');
    list.insertNode('o');

    list.print ();

    if(list.elementExists('r')) {
        std::cout << "element [r] does exist in the linked list\n";
    }

    list.deleteNode ('t');
    list.deleteNode ('o');
    list.print ();
    list.deleteNode ('m');
    list.deleteNode ('r');
    list.print ();
    list.deleteNode ('o');
    list.print ();

    return 0;
}