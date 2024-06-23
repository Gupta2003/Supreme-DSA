#include <iostream>
using namespace std;
int find_all_pairs(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "(" << arr[i] << " " << arr[j] << ")";
        }
        cout << endl;
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
    find_all_pairs(arr, n);
    delete[] arr;
    return 0;
}