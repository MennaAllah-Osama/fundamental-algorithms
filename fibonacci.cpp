//
// Created by mo062 on 10/28/2025.
//
#include <bits/stdc++.h>
using namespace std;

// Fibonacci using recursion
int fib_recursive(int n){
    if (n==0 || n==1)
        return n;
    else
        return fib_recursive(n-1)+ fib_recursive(n-2);

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
    int n ;
     cin>>n;
   cout<< "recusion"<<fib_recursive(n)<<endl;
   cout << "Fibonacci(" << n << ") = " << fibonacciIterative(n) << endl;
    return 0;
}
