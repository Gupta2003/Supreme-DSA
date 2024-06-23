#include <iostream>
using namespace std;
void extreme(int arr[], int n)
{
    int i, j;
    for (i = 0, j = n - 1; i <= j; i++, j--)
    {
        if (i == j)
        {
            cout << arr[i] << "\t";
        }
        else
        {
            cout << arr[i] << "\t";
            cout << arr[j] << "\t";
        }
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
    extreme(arr, n);
    delete[] arr;
    return 0;
}