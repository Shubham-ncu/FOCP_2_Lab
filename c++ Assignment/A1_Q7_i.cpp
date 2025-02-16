//Write a program to swap two numbers using a temporary variable and then without using a temporary variable.
//Using temporary variable.
#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}