#include<iostream>
#include<vector>
using namespace std;
// here we find only pivot
int pivot_index(vector<int>&v,int n){
    int s = 0,e = v.size();
    int mid = s + (e - s) / 2;

    while(s<=e){
        int mid = s + (e - s) / 2;
        if(mid +1 <n && v[mid]>v[mid+1])
            return mid;
        if(mid -1>=0 && v[mid]<v[mid-1])
            return mid-1;
        if(v[mid]<v[s]){
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
    return mid;
}
// now we get the pivot so we can easily search in an sorted and rotaed arrya because now we have two different parts so we can differenciate these two parts with the help of pivot 
// the first part is before pivot element and the second part is after pivot element 
int search_in_rotated(vector<int>v,int s,int e,int target){
    int start = s, end = e,ans = -1;
    while(start<=end){
    int mid = start + (end - start) / 2;
        if(v[mid]<target){
            start = mid + 1;
        }
        else if(v[mid]>target){
            end = mid - 1;
        }
        else if(v[mid]==target){
            ans = mid;
            break;
        }
    }
    return ans;
}
int main(){
    int n,target;
    cout << "Enter the no of elements : " << endl;
    cin>>n;
    cout << "Enter the target : " << endl;
    cin >> target;
    vector<int> v(n);
    cout << "Enter the elements : " << endl;
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    int pivot = pivot_index(v, n);
    cout << "The pivot element is : " << pivot<< endl;
    if(target > v[0]){
        cout << search_in_rotated(v,0,pivot, target);
    }
    else{
        cout << search_in_rotated(v, pivot+1,v.size(), target);
    }
    return 0;
}
