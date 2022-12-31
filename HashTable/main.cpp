#include "HashTable.hpp"
#include <cstdlib>
#include <iostream>

std::list<int> numbers;

void generateThousandRandomNumbers () {
    std::srand(5);

    int range = 99 - 10 + 1;

    for (int i = 0; i < 1000; i++) {
        int num = rand() % range + 10;
        numbers.push_back(num);
    }
}

int main () {

    generateThousandRandomNumbers ();

    int userChoice;
    HashTable h(10);

    for (auto num : numbers) {
        h.insertItem(num);
    }

    h.printHashTable();

    h.printListAtIndex(0);
    h.deleteValue(70);
    h.printListAtIndex(0);
    h.deleteAllValuesAssociatedWithKey(0);
    h.printListAtIndex(0);
    
    return 0;
}