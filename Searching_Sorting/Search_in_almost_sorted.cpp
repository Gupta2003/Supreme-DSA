#include<iostream>
#include<vector>
using namespace std;
int search_in_almost_sorted_array(vector<int>v,int n,int target){
    int s = 0, e = n - 1,ans = -1;
    while(s<=e){
        int mid = s + (e - s) / 2;
        if(v[mid]==target){
            ans = mid;
            break;
        }
        if(v[mid+1]==target){
            ans = mid + 1;
            break;
        }
        if(v[mid-1]==target){
            ans = mid - 1;
            break;
        }
        if(v[mid]<target){
            s = mid + 2;//y +1 or -1 wale se bhi chal jayega but hum do piche jaa rhe h kyuki hame pata h ek piche wala toh hoga ni na hota toh if wali condition se ans aa jata  
        }
        else {
            e = mid - 2;
        }
    }
    return ans;
}
int main(){
    int n,target;
    cout << "Enter the no of elements : " << endl;
    cin >> n;
    cout << "Enter the target : " << endl;
    cin >> target;
    cout << "Enter the elements : " << endl;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    int result = search_in_almost_sorted_array(v, n,target);
    if(result == -1){
        cout << "no such element is found...." << endl;
    }
    else{
        cout << "Answer is : " << result << endl;
    }
    // almost sorted ka mtlb h ki wo element ya toh ek pehle position pe hoga ya usi pe ya uske ek aage wali pe like arr[2] par 5 pada h toh nearly sorted array me wo ya toh arr[1] par hoga ya toh arr[2] par hoga ya wo arr[3] par located hoga 
    return 0;
}