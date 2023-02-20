// Q3 - Write a program to find the sum of n natural numbers.

#include<iostream>
using namespace std;
int main(){
    cout<<"----------------------------------"<<endl;
    int number, sum;
    sum = 0;
    cout << "Enter an integer: ";
    cin >> number;
    
    // Checking integer either it is positive or negative.
    if (number>=0){
        for (int i = 1; i <= number; ++i) {
        sum += i;
        }
        cout << "The sum of first "<<number<<" interger is " << sum << endl;    
    }else{
        cout<<"Please Enter positive value"<<endl;
    }
    
    cout<<"----------------------------------"<<endl;
    return 0;
}