// Q2 - Write a program to print all Armstrong numbers between 100 to 500.

#include<iostream>
using namespace std;
int main(){
    cout<<"---------------------------------------"<<endl;
    cout<<"The Armstrong numbers between 100 to 500 are :";
    
    for(int i=0;i<500;i++){
        int sum = 0;
        int total = i;
    
    while(total!=0){
        int digit = total % 10;

        sum = sum + (digit*digit*digit);
        total = total / 10;
        }
    
    if(sum == i){
        cout << i <<"\n";
        }
    }
    cout<<"---------------------------------------"<<endl;
    return 0;
}