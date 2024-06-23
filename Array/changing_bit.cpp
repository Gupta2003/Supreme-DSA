#include <iostream>
#include <algorithm>
using namespace std;
void changing_bit(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = 0;
        }
    }
}
void changing_bit1(int arr[],int n){
    for (int i = 0; i < n;i++){
        arr[i]=arr[i] ^ 1;
    }
}
int main()
{
    int n;
    cout << "Enter the value of n :";
    cin >> n;
    cout << "Enter the values of array : " << endl;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // we do that by normal method 
    // changing_bit(arr, n);
    
    // lets do it by ashish's special method
    changing_bit1(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}