#include <iostream>
#include <string>
using namespace std;
int main()
{
    // Integers
    int num = 5;
    cout << num << endl;
    // character
    char ch = 'a';
    cout << ch << endl;
    // Float
    float num1 = 5.5;
    cout << num1 << endl;
    // String
    // char ch1 = 'hello'; this is not working because we declare it as char and char has only 1 byte size so it store only one letter or alphabet to decclare a word or sentecse we must use a string to use string we must include a header file
    string str = "hello mr ashish";
    cout << str << endl;
    // Boolean
    bool b = true;
    cout << b << endl;
    // double
    double a = 1.1111111111111111111111111111111111;
    cout<<a<<endl;
    //The float value will be printed with less precision compared to the double value. This is because float can only handle about 7 decimal places, while double can handle about 15
  // Long
    long num2 = 123456786;
    cout<<num2<<endl;   
    // short
    short num3 =  32768;
    cout<<num3<<endl;
    // here we are getting the negetive of 32768 because limit toh 32767 tk hi h uske baad ka koi bhi no dalenge toh fir wo cyclic order me chalega 
    int name = 'a';
    cout<<name<<endl;
    // Taking input
    string str1;
    cout<<"Enter the string : "<<endl;
    getline(cin,str1);
    cout<<str1<<endl;
     return 0;
}