#include <iostream>
using namespace std;
void reverse_array(int arr[], int n)
{
    int i, j;
    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        // swap
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
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
    reverse_array(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    delete[] arr;
    return 0;
}