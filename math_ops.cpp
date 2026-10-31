#include "math_ops.h"
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
bool divide(int a, int b, double& result) {
    if (b == 0) return false;
    result = static_cast<double>(a) / b;
    return true;
}