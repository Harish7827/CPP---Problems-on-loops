// Q5 - Write a program to print the cross pattern given below (in the shape of X):

#include<iostream>
using namespace std;
int main(){
    cout<<"-------------------------------------"<<endl;
    int size;
    cout<<"Enter an odd number: ";
    cin>>size;
    if (size%2!=0 && size>=0){
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i==j || i+j==size-1) {
                    cout << "*";
                } else {cout << " "; }
            }
            cout << "\n";
        }
        cout<<"-------------------------------------"<<endl;
    }else if (size%2==0 && size>=0){
        int even_value;
        cout<<"You entered even number! Please use odd number. If you want proceed with even number press 1 ";
        cin>> even_value;
        if (even_value == 1){
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if (i==j || i+j==size-1) {
                        cout << "*";
                    } else {cout << " "; }
                }
            cout << "\n";
            }
        cout<<"-------------------------------------"<<endl;     
        }else{
            cout<<"Time Out !"<<endl;
        }
    }

    return 0;
}