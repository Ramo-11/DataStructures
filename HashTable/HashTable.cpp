#include "HashTable.hpp"

HashTable::HashTable ()
: index(0) { 
    list = new std::list<int>[index];
}

HashTable::HashTable (int i) 
: index(i) {
    list = new std::list<int>[index];
}

void HashTable::setIndex (int i) {
    this->index = i;
}

int HashTable::getIndex () {
    return this->index;
}

void HashTable::setList (std::list<int> *l) {
    this->list = l;
}

std::list<int>* HashTable::getList () {
    return this->list;
}

void HashTable::insertItem (int key) {
    int index = hashFunction (key);

    // Don't insert the key if it already exists
    if (std::find(list[index].begin(), list[index].end(), key) != list[index].end()) {
        std::cout << "Item [" << key << "] already exists, skipping insertion...\n";
    } else {
        this->list[index].push_back(key);
    } 
}

void HashTable::deleteAllValuesAssociatedWithKey (int key) {
    list[key].clear();
}

void HashTable::deleteValue (int value) {
    int index = hashFunction(value);

    // find the value in (index)th list
    std::list<int>::iterator iter;
    for (iter = list[index].begin(); iter != list[index].end(); iter++) {
        if (*iter == value) {
            break;
        }
    }
    
    // if value is found in hash table, remove it
    if (iter != list[index].end()) {
        list[index].erase(iter);
    }
}

int HashTable::hashFunction (int x) {
    return (x % index);
}

void HashTable::printHashTable () {
    for (int i = 0; i < index; i++) {
        std::cout << "index: " << i << std::endl;
        for (auto num : this->list[i]) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
}

void HashTable::printListAtIndex (int index) {
    std::cout << "index: " << index << " has the values: " << std::endl;
    for (auto num : this->list[index]) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}