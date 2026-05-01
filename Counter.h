//
// Created by mohammadibrahim on 29.04.26.
//

#ifndef INC_1_1MODULE_C___ESSENTIALS_COUNTER_H
#define INC_1_1MODULE_C___ESSENTIALS_COUNTER_H


class Counter {
private:
    int count;
    public:
    Counter();
    void increment();
    void decrement();
    void reset();
    int value() const;

};

#endif //INC_1_1MODULE_C___ESSENTIALS_COUNTER_H
