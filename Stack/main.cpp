#include "Stack.hpp"

int main () {

    Stack s;

    s.push('a');
    s.push('b');
    s.printTop();
    s.printAll();
    
    Stack s2(s);

    Stack s3;
    s3 = s2;

    s2.printAll();
    s3.printAll();

    Stack s4(8);
    Stack s5(s4);

    if (s4 == s5) {
        std::cout << "s4 and s5 are equal\n";
    }

    s5.push('P');

    if (s4 != s5) {
        std::cout << "s4 and s5 are no longer equal\n";
    }

    return 0;
}