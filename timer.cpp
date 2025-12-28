#include "timer.h"
#include "factorial.h"
#include <chrono>

using namespace std;
using namespace chrono;

long long measureIterativeTime(int n) {
    auto start = high_resolution_clock::now();
    factorialIterative(n);
    auto end = high_resolution_clock::now();
    return duration_cast<nanoseconds>(end - start).count();
}

long long measureRecursiveTime(int n) {
    auto start = high_resolution_clock::now();
    factorialRecursive(n);
    auto end = high_resolution_clock::now();
    return duration_cast<nanoseconds>(end - start).count();
}
