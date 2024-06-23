#include<iostream>
using namespace std;
int size(char arr[]){
    int i = 0,count=0;
    while (arr[i] != '\0'){
        count++;
        i++;
    }
    return count;
}
void reverse(char arr[]){
    int n = size(arr);
    for (int i = 0; i < n/2; i++)
    {
        // swap
        int temp = arr[i];
        arr[i] = arr[n - i-1];
        arr[n - i-1] = temp;
    }
}
int main(){
    char arr[100];
    cout << "Enter the character array : " << endl;
    cin.getline(arr, 100);

    // lets know the size of the character array first
    cout << size(arr) << endl;
    // reversing an array
    reverse(arr);

    // printing the characcter array
    cout << arr << endl;
    return 0;
}