//
// Created by mo062 on 10/28/2025.
//
#include <iostream>
using namespace std;

// Fibonacci using recursion
int fibonacciRecursive(int n) {
    if (n <= 1) return n;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

// Fibonacci using iteration
int fibonacciIterative(int n) {
    if (n <= 1) return n;
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n = 10;
    cout << "Fibonacci(" << n << ") = " << fibonacciIterative(n) << endl;
    return 0;
}