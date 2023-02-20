// Q7- Write a program to print + pattern given below :
/*

    *
    *
  *****
    *
    *

*/

#include <iostream>
using namespace std;
int main() {
    cout<<"---------------------------------------"<<endl;
    int size = 5;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == size / 2) {
                cout << "*";
            }else {
                if (j == size / 2) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
        }cout << "\n";
    }
    cout<<"---------------------------------------"<<endl;
    return 0;
}