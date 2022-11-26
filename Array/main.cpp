#include "Array.hpp"

int main () {
    Array arr1(5, 'o');
    Array arr2(arr1);

    for (int i = 0; i < arr1.getMaxSize(); i++) {
        std::cout << arr1.getCharacter(i) << " ";
    }
    std::cout << "\n";

    for (int i = 0; i < arr2.getMaxSize(); i++) {
        std::cout << arr2.getCharacter(i) << " ";
    }
    std::cout << "\n";

    try {
        int found = arr1.find('o', 6); 
        std::cout << "found: " << found << "\n";
    } catch (std::out_of_range e) {
        std::cout << "array size is smaller than 6";
    }


    
    return 0;
}