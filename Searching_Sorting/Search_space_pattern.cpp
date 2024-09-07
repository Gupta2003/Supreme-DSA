#include<iostream>
#include<vector>
using namespace std;
int search_space(int n){
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        v[i] = i + 1;
    }
        int s = 0, e = n - 1;
    while(s<=e){
        int mid = s + (e - s) / 2;
        if(mid*mid > n){
            e=mid-1;
        }
        else if(mid*mid < n){
            s = mid + 1;
        }
        else{
            return mid;
        }
    }
    return -1;
}
int search_space_01(int n){
    // here we have to apply store and compute
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = i + 1;
    }
    int s = 0, e = n - 1,ans =-1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (mid * mid > n)
        {
            e = mid - 1;
        }
        else if (mid * mid < n)
        {
            ans = mid;
            s = mid + 1;
        }
    }
    return ans;
}
int main(){
    int n;
    cout << "Enter the number : " << endl;
    cin >> n;
    cout<<search_space(n);//it is giving ans when the number is perfect square
    cout << endl;
    cout << search_space_01(n);
    return 0;
}