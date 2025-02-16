//Write a program to swap two numbers using a temporary variable and then without using a temporary variable.
//without using temporary variable.
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    a = a + b;
    b = a - b; 
    a = a - b; 

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}