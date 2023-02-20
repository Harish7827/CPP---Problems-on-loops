// Q1 - Write a program to calculate the factorial of a number.

#include<iostream>
using namespace std;
int main(){
    cout<<"---------------------------------------"<<endl;
    int factorial, i, number;
    cout<<"Enter a number: ";
    cin>> number;
    factorial = 1;
    
    for(i=1;i<=number;i++){
        factorial*=i;
    }
    cout<<"The factorial of "<<number<<" is "<< factorial<<endl;
    cout<<"---------------------------------------"<<endl;
    return 0;
}