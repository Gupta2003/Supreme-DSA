#include <iostream>
using namespace std;
void peak(int arr[], int n)
{
    int s = 0, e = n - 1;
    while (s < e)
    {
        int mid = (e - s) / 2;
        if (arr[mid] > arr[mid + 1])
        {
            e = mid;
        }
        else
        {
            s = mid + 1;
        }
    }
    cout << s;
}
int peak_store_and_compute(int *arr,int n){
    int s = 0, e = n - 1,ans = -1;
    while (s < e)
    {
        int mid = (e - s) / 2;
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            ans = mid;
            e = mid-1;
        }
    }
    cout << ans;
}
int main()
{
    int n;
    cout << "Enter the no of elements : " << endl;
    cin >> n;
    cout << "Enter the elements : " << endl;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    peak(arr, n);//by normal search
    peak_store_and_compute(arr, n);
    delete[] arr;
    return 0;
}