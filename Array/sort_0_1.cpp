#include <iostream>
using namespace std;
void sort_0_1(int arr[], int n)
{
    int count0 = 0;
    int count1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        else
        {
            count1++;
        }
    }
    for (int i = 0; i < count0; i++)
    {
        arr[i] = 0;
    }
    for (int j = count0; j < n; j++)
    {
        arr[j] = 1;
    }
}
// we can also do it by sorting in ascending order
// we can also use inbuilt sort function but uske liye header file include krni padegi algorithm wali
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
    sort_0_1(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}