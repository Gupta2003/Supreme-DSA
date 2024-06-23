#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int max_subarray(int *arr,int n){
    if(n==1){
        cout<< arr[0];
    }
    vector<int> v;
    for (int i = 0; i < n;i++){
        int sum = 0,subsum=0;
        for (int j = i; j < n;j++){
             subsum += arr[j];
             if(subsum>sum){
                 sum = subsum;
             }
        }
        v.push_back(sum);
    }
    for(int a:v){
        cout << a << " ";
    }
    cout << endl;
    auto maxi = max_element(v.begin(), v.end());
    cout << "The maximum sum of the subarray is : "<<*maxi << endl;
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
    max_subarray(arr, n);//by brute force -> isme issue h ki agar negetie numbers aagye sirf toh ye kaam ni kr rha kyuki wo toh 0 se chote h toh y output 0 show kr rha jabki usme ans alag aayega 

    delete[] arr;
    return 0;
}