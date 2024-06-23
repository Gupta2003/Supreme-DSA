#include <iostream>
#include <vector>
using namespace std;
void two_compliment(int arr[], int n)
{
    int carry = 1, sum = 0;
    vector<int> v(n+1,0);
    // 1s compliment(by xor operator)
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] ^ 1;
    }
    // 2s compliment
    for (int j = n-1 ; j >= 0; j--)
    {
        sum = arr[j] + carry;
        v[j] = sum % 2;
        carry = sum / 2;
    }
    if(carry){
        v[0] = carry;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter the value of n : " << endl;
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // two_compliment(arr, n);
    delete[] arr;
    return 0;
}