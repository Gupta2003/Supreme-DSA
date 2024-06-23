#include <iostream>
using namespace std;
void zero_one(int(arr)[], int n)
{
    int count0 = 0, count1 = 0;
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
    cout << "The no of zeros are : " << count0 << endl;
    cout << "The no of ones are : " << count1 << endl;
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
    zero_one(arr, n);
    delete[] arr;
    return 0;
}