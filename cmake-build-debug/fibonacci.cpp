#include <bits/stdc++.h>
using namespace std;

// Fibonacci using recursion
int fib_recursive(int n){
    if (n==0 || n==1)
        return n;
    else
        return fib_recursive(n-1)+ fib_recursive(n-2);

}


// Fibonacci using divide and conquer (matrix multiplication)
void multiplyMatrices(vector<vector<long long >>& mat1,
                      vector<vector<long long>>& mat2) {
    long long m1 = mat1[0][0] * mat2[0][0] + mat1[0][1] * mat2[1][0];
    long long m2 = mat1[0][0] * mat2[0][1] + mat1[0][1] * mat2[1][1];
    long long m3 = mat1[1][0] * mat2[0][0] + mat1[1][1] * mat2[1][0];
    long long m4 = mat1[1][0] * mat2[0][1] + mat1[1][1] * mat2[1][1];

    mat1[0][0] = m1;
    mat1[0][1] = m2;
    mat1[1][0] = m3;
    mat1[1][1] = m4;
}

void matrixPower(vector<vector<long long>>& mat1, long long n) {
    if (n == 0 || n == 1) return;

    vector<vector<long long>> mat2 = {{1, 1}, {1, 0}};

    matrixPower(mat1, n / 2);

    multiplyMatrices(mat1, mat1);
    if (n % 2 != 0) {
        multiplyMatrices(mat1, mat2);
    }
}

long long fibonacciMatrixMethod(long long n) {
    if (n <= 1) return n;
    
    vector<vector<long long>> mat1 = {{1, 1}, {1, 0}};
    matrixPower(mat1, n - 1);
    return mat1[0][0];
}



int main() {
    while (true)
    {
        int choice ;
        cout<< "Welcome to Fibonacci Program."<< endl;
        cout <<  "Which method do you need to use??"<< endl;
        cout << "1- Recursion." << endl
             << "2- Divide and conquer (matrix multiplication)" << endl
             << "3- Dynamic programming" << endl
             << "0- Exit." << endl;

        cin >> choice;
        if (choice==1){
            int n ;
            cout << "Enter n: ";
            cin>>n;
            cout<< "recursion"<<fib_recursive(n)<<endl;
        }
        else if (choice==2){
                int n;
                cout << "Enter n: ";
                cin >> n;
                cout << "Matrix method result: " << fibonacciMatrixMethod(n) << endl;
        }
        else if (choice==3){

        }
        else if (choice == 0){
            break;
        }
        else {
            cout << "Invalid choice! Try again." << endl;
        }
    };
    return 0;
}
