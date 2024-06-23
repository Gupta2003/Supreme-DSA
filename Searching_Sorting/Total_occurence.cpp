// Total no of occurence
#include <iostream>
using namespace std;
int binarysearch(int *arr,int n,int k){
    int ans = -1,mid,count =0;
    int s = 0,e =n-1;
    while(s<=e){
        mid = (e-s)/2+s;
        if(arr[mid]>k){
            e = mid - 1;
        }
        else if(arr[mid]<k){
            s = mid + 1;
        }
        else{
            ans = mid;
            e = mid -1;
        }
    }
    while(arr[ans] == k){
        ans = ans +1;
        count+=1;
    }
    return count;
}
int main() {
    int n ,k ;
    cout<<"Enter the no of elements : "<<endl;
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter the elements : "<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the elements to find : "<<endl;
    cin>>k;
    if(binarysearch(arr,n,k) == -1){
        cout<<"Element is not in array "<<endl;
    }
    else{
        cout<<"The no of elements are : "<<binarysearch(arr,n,k)<<endl;
    }
    return 0;
}