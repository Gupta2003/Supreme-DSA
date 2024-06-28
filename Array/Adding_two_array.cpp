#include <iostream>
using namespace std;
void sum_two_array(int *arr, int *brr, int n)
{
    int sum, carry = 0;
    for (int i = 0; i < n; i++)
    {
        sum = arr[n-i-1] + brr[n-i-1] + carry;
        arr[n-i-1] = sum%10;
        carry = sum / 10;
    }
    cout << "here is the output : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<< " ";
    }
}
int main()
{
    int n;
    cout << "Enter the no of elements : " << endl;
    cin >> n;
    cout << "enter the elements of first array : " << endl;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the elements of second array : " << endl;
    int *brr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> brr[i];
    }
    sum_two_array(arr, brr, n);
    delete[] arr;
    return 0;
}