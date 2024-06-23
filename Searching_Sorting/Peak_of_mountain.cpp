// Peak Element in an array 
#include <iostream>
using namespace std;
int binarysearch(int *arr,int n){
    int ans = -1,mid,count =0;
    int s = 0,e =n-1;
    while(s<=e){
        mid = (e-s)/2+s;
        if(arr[mid]<arr[mid-1]){
            e = mid ;
        }
        else if(arr[mid]<arr[mid+1]){
            s = mid + 1;
        }
        else if((arr[mid-1]<arr[mid]) && (arr[mid]>arr[mid+1])){
            ans = mid;
            break;
        }
    }
    return ans;
}
int main() {
    int n;
    cout<<"Enter the no of elements : "<<endl;
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter the elements : "<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The peak element is  : "<<binarysearch(arr,n)<<endl;
    delete []arr;
    return 0;
}