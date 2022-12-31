#ifndef HASHTABLE_HPP
#define HASHTABLE_HPP

#include <iostream>
#include <list>
#include <algorithm>
#include <typeinfo>

class HashTable {
    private:
        int index;
        std::list<int> *list;

    public:
        HashTable ();

        HashTable (int i);

        void setIndex (int i);

        int getIndex ();

        void setList (std::list<int> *l);

        std::list<int>* getList ();

        void insertItem (int key);

        void deleteAllValuesAssociatedWithKey (int key);

        void deleteValue (int value);

        int hashFunction (int x);

        void printHashTable ();

        void printListAtIndex (int i);
};

#endif