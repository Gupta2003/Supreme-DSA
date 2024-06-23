#include <iostream>
#include <vector>
#include<algorithm>
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
    while (i < n - 1)
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
int sum(int n)
{
    if (n == 1)
        return 1;
    else
        return n + sum(n - 1);
}
int missing_number(int *arr, int n)
{
    int jod = 0;
    for (int i = 0; i < n; i++)
    {
        jod += arr[i];
    }
    int ans = sum(n) - jod;
    return ans;
}
void two_sum_brute(int *nums, int n,int target)
{
    vector<int> v;
    for(int i=0;i<n;i++){
        for (int j = i+1; j < n;j++)
        {
            if (nums[i] + nums[j] == target)
            {
                v.push_back(i);
                v.push_back(j);
            }
        }
    }
    for (int idx : v)
    {
        cout << idx << " ";
    }
    cout << std::endl;
}
void two_sum_efficeient(int *arr,int n,int target){
    // but to use this method we must have a sorted array
    sort(arr, arr + n);
    int s = 0, e = n-1;
    vector<int> v;
    while(s<e){
        if(arr[s]+arr[e]==target){
            v.push_back(s);
            v.push_back(e);
            break;
        }
        else if(arr[s]+arr[e]>target){
            e--;
        }
        else if(arr[s]+arr[e]<target){
            s++;
        }
    }
    for(int a:v){
        cout << a << " ";
    }
}
int main()
{
    int n, target;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    cout << "Enter the targets : " << endl;
    cin >> target;
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
    // cout<<"The missing number : " <<missing_number(arr, n);

    // question 1
    // two_sum_brute(arr, n, target); // this is the brute force approcach which take o(n^2)time leetcode 1
    two_sum_efficeient(arr, n, target);//this is the efficient approach by the two pointer approach which has the time complexity o()
    delete[] arr;
    return 0;
}
