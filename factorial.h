#ifndef FACTORIAL_H
#define FACTORIAL_H

// ADT hasil faktorial
struct FactorialResult {
    long long value;
    long long operationCount;
};

FactorialResult factorialIterative(int n);
FactorialResult factorialRecursive(int n);

#endif
