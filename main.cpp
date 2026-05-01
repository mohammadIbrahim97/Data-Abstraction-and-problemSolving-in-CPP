#include <iostream>
#include "Counter.h"
int main() {
    Counter myCounter;
    for (int i = 0;i < 10; ++i) {
        myCounter.increment();
    }

    std::cout << myCounter.value() << std::endl;
    std::cout << "DONE Incrementing" << std::endl;

    for (int i = myCounter.value();i > 0; --i) {
        myCounter.decrement();
    }

    std::cout << myCounter.value() << std::endl;
    std::cout << "DONE Decrementing" << std::endl;
    myCounter.reset();
    std::cout << myCounter.value() << std::endl;
    std::cout << "DONE Reseting" << std::endl;
    return 0;
}