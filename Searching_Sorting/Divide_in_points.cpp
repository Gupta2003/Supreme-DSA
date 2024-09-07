#include<iostream>
#include<vector>
using namespace std;
int store_and_compute(int n,int m){
    // very important these two lines are iske bina negetive number k liye ni sambhal payega code or fase reh jaeynge  
    m = (m < 0) ? -m : m;
    n = (n < 0) ? -n : n;
    int s = 1, e = n;
    int ans = -1;
    while(s<=e){
        int mid = s + ((e - s)>>1);
        cout << mid << endl;
        if(m*mid <= n){
            ans = mid;
            s = mid + 1;
        }
        else if(m*mid>n){
            e = mid - 1;
        }
    }
    return ans;
}
 int main()
{
    int n,m,result;
    cout << "Enter the divident : " << endl;
    cin >> n;
    cout << "Enter the divisor : " << endl;
    cin >> m;
    if(n<0||m<0){
        result = -1 * store_and_compute(n, m);
    }
    else{
        result = store_and_compute(n, m);
    }
    cout << "The final ans is : "<<result;
    return 0;
}