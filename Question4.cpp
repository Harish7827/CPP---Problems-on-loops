// Q4 - Write a program to reverse a given integer number.

#include<iostream>
using namespace std;
int main(){
    cout<<"--------------------------------------------"<<endl;
    int number,temp_value,remainder,reverse_value=0;
    cout<<"Enter any number : ";
    cin>>number;
    temp_value=number;

    while(temp_value > 0){
        remainder= temp_value % 10;
        temp_value = temp_value / 10;
        reverse_value = reverse_value * 10 + remainder;
        }
    
    cout<<"The reverse of number "<<number<<" is "<<reverse_value <<endl;
    cout<<"--------------------------------------------"<<endl;
    return 0;
}