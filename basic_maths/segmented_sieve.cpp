#include<iostream>
#include<vector>
using namespace std;
void seg_sieve(int low,int n){
    int count = 0;
    vector<bool> v(n, true);
    v[0] = v[1] = false;
    for (int i = 2; i < n;i++){
        if(v[i]== true ){
            int j = i * i;
            while (j <= n)
            {
                v[j] = false;
                j += i;
            }
        }
    }
}
void optimised_seg_sieve(int low,int high){

}
int main(){
    int low,high;
    cout << "Enter the lower number : " << endl;
    cin >> low;
    cout << "Enter the higher number : " << endl;
    cin >> high;
    seg_sieve(low,high);
    optimised_seg_sieve(low,high);
    return 0;
}
