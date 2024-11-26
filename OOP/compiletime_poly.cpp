#include<iostream>
#include<string>
using namespace std;
class complex{
    public:
    int real;
    int imaginory;

    // constructor 
    complex(int real,int imaginory){
        cout<<"This is the constructor of the complex class " << endl;
        this->real = real;
        this->imaginory = imaginory;
    }
    // By this function we can easily print the complex number but if we wanna do the operations on the complex numbers like add,substract then we cant because addition sign is not defined for the complex numbers,it can add two int,two float etc...
    // functions
    void print(){
        printf("(%d + i%d)\n", this->real, this->imaginory);
        // cout << "(" << this->real << " + i" << this->imaginory << ")" << endl;
    }

    // operator overloading 
    complex operator +(const complex &b){
        complex temp(0,0);
        temp.real = this->real + b.real;
        temp.imaginory = this->imaginory + b.imaginory;
        return temp;
    }
    // destructor
    ~complex(){
        cout << "This is the destructor of the complex class " << endl;
    }

    // overloading to check whether two complex numbers are equal or not 
     void operator ==(const complex &b){
        if(this->real == b.real && this->imaginory== b.imaginory){
            cout << "Yaa !! Complex numbers are equal " << endl;
        }
        else{
            cout << "OOPS !! Complex numbers are not equal" << endl;

        }
    }
};
int main(){
    complex a(3, 5);
    a.print();
    complex b(4, 3);
    b.print();

    // adding two complex numbers by using the operator overloading
    complex c = a + b;
    c.print();

    complex e(3, 3);
    complex f(3, 3);
    a == b;
    e == f;
    return 0;
}