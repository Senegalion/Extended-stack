#include <iostream>
#include "Stack.h"

void runFunction1(Stack s);
void runFunction2(const Stack& s);

int main() {
    Stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);

    Stack s2(s1);

    Stack s3 = s1;

    Stack s4;
    s4.push(10);
    s4 = s1;

    runFunction1(s1);    // Stack object is passed by value.
    runFunction2(s1);    // Stack object is passed by reference.

    return 0;
}

void runFunction1(Stack s) {
    Stack copyConstructor(s);
    copyConstructor.push(4);   
    
    s.push(5);
    s.push(6);

    std::cout << "\n\nInside runFunction1:" << std::endl;
    std::cout << "Original Stack (s): Is Empty? " << s.isEmpty() << std::endl;
    std::cout << "Copied Stack (copyConstructor): Is Empty? " << copyConstructor.isEmpty() << std::endl;
}

void runFunction2(const Stack& s) {
    std::cout << std::endl;
    std::cout << std::endl;

    Stack s2;
    s2.push(7);

    s2 = s;

    std::cout << "Inside runFunction2:" << std::endl;
    std::cout << "Original Stack (s): Is Empty? " << s.isEmpty() << std::endl;
    std::cout << "Copied Stack (s2): Is Empty? " << s2.isEmpty() << std::endl;
    std::cout << std::endl;
}
