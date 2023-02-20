// Q10- Write a C++ program to print a rectangle out of *

#include <iostream>
using namespace std;
int main(){
    cout<<"---------------------------------\n";
    int StarRows,StarColumns,i,j;
    cout<<"Please Enter the number of StarRows: ";
    cin>>StarRows;
    //Takes input from user for StarRows
    cout<<"Please Enter the number of StarColumns: ";
    cin>>StarColumns;
    //Takes input from user for StarColumns
    for(i=1; i<=StarRows; i++){
        for (j=1; j<=StarColumns; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    cout<<"---------------------------------\n";
    return 0;
}
