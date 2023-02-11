#pragma once

#ifndef COUNTER
#define COUNTER

class Counter {
public:
    Counter(int input = 1) : var(input) {}
    void increase() { ++var; }
    void decrease() { --var; }
    void print();
private:
    int var;
};

#endif