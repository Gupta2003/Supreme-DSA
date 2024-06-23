// Search in rotated array 
#include<iostream>
using namespace std;

// Finding the peak element 

int peakelement(int *arr,int n){
    int peaku = -1,mid,count =0;
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
            peaku = mid;
            break;
        }
    }
    return peaku;
}

//Checking which part have to serach  

bool checkpart(int *arr,int k,int peak){
    int s = 0;
    if((arr[s]<=k) && (k<=arr[peak])){
        return true;
    }
    else{
        return false;
    }
}

// Applying binary search

int binarysearch(int* arr,int start,int end,int k){
    int ans = -1,s=start,e=end;
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
            break;
        }
    }
    return ans;
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
    int peak = peakelement(arr,n);
    cout<<"The element is at index : "<<endl;
    if(checkpart(arr,k,peak) == true){
        cout<<binarysearch(arr,0,peak,k);
    }
    else{
        cout<<binarysearch(arr,peak+1,n-1,k);
    }
    return 0;
}