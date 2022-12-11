#include "Queue.hpp"

int main () {

    Queue q1(5);
    q1.printAll();
    q1.enqueue('t');
    q1.printAll();

    q1.dequeue();
    q1.dequeue();
    q1.printFirstElement();
    q1.printLastElement();
    q1.printAll();

    Queue q2(q1);
    q2.printAll();

    Queue q3;
    q3.enqueue('O');
    q3.enqueue('M');
    q3.enqueue('A');
    q3.enqueue('R');
    q3.printAll();

    Queue q4;
    q4 = q3;
    q4.printAll();

    if (q4 == q3) {
        std::cout << "q4 equals q3\n";
    }

    q4.dequeue();
    if (q4 != q3) {
        std::cout << "q4 does not equal q3\n";
    }

    return 0;
}