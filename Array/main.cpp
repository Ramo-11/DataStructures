#include "Array.hpp"

int main () {
    Array arr1;
    Array arr2(5);
    Array arr3(4, 'p');
    Array arr4(arr3);
    const Array arr5 (3, 'c');

    arr1.setSize(7);
    std::cout << "size of arr1: " << arr1.getSize() << "\n";

    arr1 = arr3;
    if(arr1 == arr3) {
        std::cout << "arr1 equals arr3\n";
    }

    if(arr2 != arr4) {
        std::cout << "arr2 does not equal arr4\n";
    }

    std::cout << "arr3[0]: " << arr3[0] << "\n";
    std::cout << "arr5[2]: " << arr5[2] << "\n";

    arr2.setCharacter(4, 'R');
    std::cout << "arr2.getCharacter(4): " << arr2.getCharacter(4) << "\n";

    arr3.resize(10);
    std::cout << "index of R in arr2: " << arr2.find('R') << "\n";

    arr1.fill('T');
    std::cout << "index of T starting from 3 in arr1: " << arr1.find('T', 3) << "\n";
    
    std::cout << "printing and reversing arr2\n";
    arr2.print();
    arr2.reverse();
    arr2.print();

    std::cout << "printing and slicing arr4\n";
    arr4.print();
    arr4.slice(3);
    arr4.print();

    std::cout << "printing and slicing arr3 from 2 to 5\n";
    arr3.print();
    arr3.slice(2, 5);
    arr3.print();

    return 0;
}