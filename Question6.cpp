// Q6- Write a program to print alphabet diamond pattern:
#include<iostream>
using namespace std;
int main() {
    cout<<"----------------------------------------------"<<endl;
    int size = 5;
    int alpha = 65;
    int num = 0;
    // upside pyramid
    for (int i = 1; i <= size; i++) {
        for (int j = size; j > i; j--) {
            cout << " "; // printing spaces
        }for (int k = 0; k < i * 2 - 1; k++) {
            cout << ((char)(alpha+num++)); // printing alphabets
        }num = 0;
        cout << "\n";
        }
    
    // downside pyramid
    for (int i = 1; i <= size - 1; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }for (int k = (size - i) * 2 - 1; k > 0; k--) {
            cout << ((char)(alpha+num++));
        }num = 0;
        cout << "\n";
    }
    cout<<"----------------------------------------------"<<endl;
    return 0;
}