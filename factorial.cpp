#include "factorial.h"

// Algoritma Iteratif
FactorialResult factorialIterative(int n) {
    FactorialResult result;
    result.value = 1;
    result.operationCount = 0;

    for (int i = 1; i <= n; i++) {
        result.value *= i;      // operasi dasar
        result.operationCount++;
    }
    return result;
}

// Helper rekursif
static long long recursiveHelper(int n, long long &count) {
    count++;
    if (n <= 1) {
        return 1;
    }
    return n * recursiveHelper(n - 1, count);
}

// Algoritma Rekursif
FactorialResult factorialRecursive(int n) {
    FactorialResult result;
    result.operationCount = 0;
    result.value = recursiveHelper(n, result.operationCount);
    return result;
}
