#include <iostream>
using namespace std;
int binary_search(int arr[], int n, int target)
{
    int s = 0, e = n - 1, mid = 0, ans;
    while (s <= e)
    {
        mid = e - (e - s) / 2;
        if (arr[mid] < target)
        {
            s = mid + 1;
        }
        else if (arr[mid] > target)
        {
            e = mid - 1;
        }
        else if (arr[mid] == target)
        {
            ans = mid;
        }
    }
    return ans;
}
int main()
{
    int n, target;
    cout << "Enter the no of elements : " << endl;
    cin >> n;
    cout << "Enter the target : " << endl;
    cin >> target;
    int *arr = new int[n];
    cout << "Enter the elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << binary_search(arr, n, target);
    delete[] arr;
    return 0;
}