#include<iostream>
using namespace std;
int main(){
    // int *a = new int;
    // *a = 2;
    // cout << *a << endl;
    // delete a;
    // int b = 5;
    // a = &b;
    // cout << *a << endl;

    // Const with pointers - 1
    const int *a = new int(2);//here the value stored at the adress stored in a will become constant
    int const *b = new int(2);//same as line number 13
    cout << *a << endl;
    cout << *b << endl;

    // now we cant change the content value at which the pointer is pointing
    // *a = 20;

    // but we change the adress stored in the a 
    // Now the a is pointing towards c
    int c = 10;
    a = &c;
    cout << *a << endl;

    // Const with pointers - 2
    int *const d = new int(5);//here we make the pointer constant not the value towards which it is pointing
    cout << *d << endl;
    return 0;
}