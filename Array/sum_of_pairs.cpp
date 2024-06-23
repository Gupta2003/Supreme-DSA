#include <iostream>
using namespace std;
void sum_of_pairs(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    { // unique nikalne ke liye j ko i+1 se initialize kr denge
        for (int j = 0; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "(" << arr[i] << " " << arr[j] << ")";
            }
        }
        cout << endl;
    }
}
// by pair method but isme sirf ek hi pair milega (sare nikalenge ke liye aage sikhenge )
pair<int, int> sum_pairs(int arr[], int n, int target)
{
    pair<int, int> ans = make_pair(-1, -1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                ans.first = arr[i];
                ans.second = arr[j];
                return ans;
            }
        }
    }
}
int main()
{
    int n, target;
    cout << "Enter the value of n :";
    cin >> n;
    cout << "Enter the target : ";
    cin >> target;
    cout << "Enter the values of array : " << endl;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sum_of_pairs(arr, n, target);
    pair<int, int> ans = sum_pairs(arr, n, target);
    cout << ans.first << " " << ans.second;
    delete[] arr;
    return 0;
}