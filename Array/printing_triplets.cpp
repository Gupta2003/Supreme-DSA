#include <iostream>
using namespace std;
int triplets(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cout << "(" << arr[i] << " " << arr[j] << " " << arr[k] << ")";
            }
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
    triplets(arr, n);
    delete[] arr;
    return 0;
}