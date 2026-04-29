//
// Created by mohammadibrahim on 29.04.26.
//
#include <iostream>
#include "Counter.h"

using namespace std;

Counter::Counter() : count(0){};

void Counter::increment() {
    ++count;
}
void Counter::decrement() {
    --count;
}

int Counter::value() const {
    return count;
}
