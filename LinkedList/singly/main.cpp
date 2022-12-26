#include "LinkedList.hpp"

int main () {
    LinkedList list;

    list.push('o');
    list.push('m');
    list.push('a');
    list.push('r');
    list.print ();
    list.insertAfter(list.getHead(), 'o');
    list.append('r');
    list.append('r');
    list.append('r');
    list.append('r');
    list.append('k');

    list.print();

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