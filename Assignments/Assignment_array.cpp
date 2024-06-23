#include <iostream>
#include <vector>
using namespace std;
void removal_duplicate(int arr[], int n)
{
    vector<int> v;
    int i = 0;
    while (i < n)
    {

        if (arr[i] == arr[i + 1])
        {
            v.push_back(arr[i]);
            i += 2;
        }
        else
        {
            v.push_back(arr[i]);
            i++;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
int neg_to_left(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            // swap
            int temp = arr[i];
            arr[i] = arr[n - count];
            arr[n - count] = temp;
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void duplicate(int arr[], int n)
{
    int i = 0;
    vector<int> v;
    while (i < n-1)
    {
        if (arr[i] == arr[i + 1])
        {
            v.push_back(arr[i]);
            i++;
        }
        else
        {
            i++;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
}
int sum(int n){
    if(n==1)
        return 1;
    else
        return n + sum(n - 1);
}
int missing_number(int *arr,int n){
    int jod = 0;
    for (int i = 0; i < n;i++){
         jod += arr[i];
    }
    int ans = sum(n) - jod;
    return ans;
}
int main()
{
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    cout << "Enter the elements : " << endl;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // removal_duplicate(arr, n);
    // neg_to_left(arr, n);
    // duplicate(arr, n);
    // common_in_2
    cout<<"The missing number : " <<missing_number(arr, n);
    delete[] arr;
    return 0;
}
