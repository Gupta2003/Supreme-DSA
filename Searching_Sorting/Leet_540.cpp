#include<iostream>
#include<vector>
using namespace std;
int findOddOccurence(vector<int>v,int n){
    int s = 0, e = n - 1;
    if(s==e){
        return s;
    }
    while(s<e){
        int mid = s + (e - s) / 2;
        if(mid&1){//checking the mid index is odd or not
            if(v[mid]==v[mid-1]){
                // that confirm that we are on the left side
                // now to go on right side
                s = mid + 1;
            }
            else{

            }
        }
        else {
            if(v[mid]==v[mid-1]){
                // it shows that we are on the right side
                // now to go on left side
                s = mid + 1;
            }
        }
    }
}
int main(){
    int n;
    cout << "Enter the no of elements : " << endl;
    cin >> n;
    vector<int> v;
    cout << "Enter the elements : " << endl;
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    findOddOccurence(v, n);
    return 0
}