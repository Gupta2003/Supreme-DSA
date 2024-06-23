#include <iostream>
using namespace std;
int main()
{
    char arr[100];
    cout << "Enter your name : " << endl;
    // we can take input directly in character array
    // cin >> arr;

    // to take input of whole sentence we have to use getline
    cin.getline(arr, 100);
    // we can print directly withut using array in character array
    cout << "your name is "<<arr << endl;
    // we can also print it by using array indexes
    int count = 0,i=0;
        while(arr[i]!='\0'){
            count++;
            i++;
        }
    cout << count;
    return 0;
}
