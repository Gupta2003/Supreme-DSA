#include<iostream>
#include<string>
using namespace std;
int main(){
    // These are the unary operators rest all are binary operators
    // postfix and prefix operators
    int a = 10,b = 5;
    int c = (a++) * (b--);
    cout<<c;

    // *****************Conditionals********
    int d;
    // bhai if ke andar input toh le skte h aaj pata laga 09/05/24
    if(cin>>d){
        cout<<d<<endl;
    }
    // are bhai isme toh print bhi kr skte h 
    if(cout<<d<<endl){

    }
    // abe yrr mujhe toh laga tha syntax error aeya ye toh khatarnaak hi system hai 
    if(d<6);{
        cout<<"mota h madam mota meri jaan kasam le mota"<<endl;
    }
    // *********Ternary Operators**********
    int money = 5;
    cout<<(money == 5?"yes":"no")<<endl;

    // *****************************Switch Case********************************
    bool grade;
    cout<<"Enter your grade : "<<endl;
    cin>>grade;
    switch(grade){
        case true:cout<<"you got A grade"<<endl;
        break;
        case false:cout<<"you got A grade"<<endl;
        break;
        // case 'C':cout<<"you got A grade"<<endl;
        // break;
        // case 'D':cout<<"you got A grade"<<endl;
        // break;
        default : cout<<"you got A grade"<<endl;
        break;
    }
        return 0;
}