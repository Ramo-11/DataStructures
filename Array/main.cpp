#include "Array.hpp"

int main () {
    Array arr1(4);

    arr1.setCharacter(0, 'o');
    arr1.setCharacter(1, 'm');
    arr1.setCharacter(2, 'a');
    arr1.setCharacter(3, 'r');

    arr1.print();
    arr1.slice(1);
    arr1.print();

    return 0;
}