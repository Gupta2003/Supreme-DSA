#include <iostream>
using namespace std;
int size(char arr[])
{
    int i = 0, count = 0;
    while (arr[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}
void reverse(char arr[])
{
    int n = size(arr);
    for (int i = 0; i < n / 2; i++)
    {
        // swap
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}
bool check_palindrome(char arr[]){
    int i = 0;
    int n = size(arr);
    while(i<n/2){
        if(arr[i]==arr[n-i-1]){
            i++;
        }
        else{
            return false;
        }
    }
    return true;
}
int main()
{
    char arr[100];
    cout << "Enter the character array : " << endl;
    cin.getline(arr, 100);

    // lets know the size of the character array first
    cout << size(arr) << endl;
    // reversing an array
    reverse(arr);

    // printing the characcter array
    cout << arr << endl;
    if(check_palindrome(arr)==true){
        cout << "yes the string is palindrome "<<endl;
    }
    else{
        cout << "no string is not palindrome" << endl;
    }
    return 0;
}