//Write a program that takes the user's full name and age as input and displays a greeting with the name and the number of days they have lived.
#include <iostream>
#include <string>
using namespace std;
int main(){
    string fullName;
    int age;

    cout<<"Enter your full name: ";
    getline(cin , fullName);

    cout<<"Enter your age: ";
    cin>>age;

    int daysLived = age*365;

    cout<<"Hello , "<<fullName<<" you have lived for approximately "<<daysLived<<" Days. "<<endl;
    return 0;
}