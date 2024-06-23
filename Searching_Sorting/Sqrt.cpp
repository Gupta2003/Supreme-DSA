// Peak Element 
#include <iostream>
using namespace std;
int binarysearch(int n){
    long long int ans = -1;
    int s = 0,e =n;
    while(s<=e){
       long long  mid = (e-s)/2+s;
        if((mid*mid) == n){
            return mid;
        }
        else if((mid*mid)  < n){
            s = mid + 1;
            ans = mid;
        }
        else if((mid*mid)  > n){
            e = mid -1;
        }
    }
    return ans;
}
int main() {
    int k;
    cout<<"Enter the no of elements : "<<endl;
    cin>>k;
    cout<<"The no of elements are : "<<binarysearch(k)<<endl;
    return 0;
}