// Binary Search 
#include <iostream>
using namespace std;
int binarystart(int* arr,int n,int k){
    int ans = -1,s=0,e=n-1;
    while(s<=e){
    int mid = (e-s)/2 + s;
        if(arr[mid]<k){
            s= mid+1;
        }
        else if(arr[mid]>k){
            e = mid-1;
        }
        else if(arr[mid] == k){
            ans = mid;
            e= mid - 1;
        }
    }
    return ans;
}
int binaryend(int* arr,int n,int k){
    int ans1 = -1,s=0,e=n-1;
    while(s<=e){
    int mid = (e-s)/2 + s;
        if(arr[mid]<k){
            s= mid+1;
        }
        else if(arr[mid]>k){
            e = mid-1;
        }
        else if(arr[mid] == k){
            ans1 = mid;
            s = mid+1;;
        }
    }
    return ans1;
}
int main() {
    int n,k;
    cout<<"Enter the no of elements in array : "<<endl;
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter the elements of array : "<<endl;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the elements to find : "<<endl;
    cin>>k;
    // cout<<"The element is at postion : ";
    if(binarystart(arr,n,k)==-1){
        cout<<"element not found";
    }
    else{
        cout<<"Starting point  "<<(binarystart(arr,n,k))<<endl;
    }
    cout<<"Ending point  "<<binaryend(arr,n,k)<<endl;
    delete[]arr;
    return 0;
}