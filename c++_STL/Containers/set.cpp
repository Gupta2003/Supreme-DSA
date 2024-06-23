#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;
int main(){
    cout << "The output by unordered set is : " << endl;
    // this is ordered set so data is sorted
    unordered_set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    unordered_set<int>::iterator it = s.begin();
    while(it!=s.end()){
        cout << *it << " ";
        *it++;
    }

    cout << endl;
    // this is unordered set so data is sorted
    set<int> s1;
    s1.insert(10);
    s1.insert(20);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);
    s1.insert(50);
    cout << "The output by ordered set is : " << endl;
    set<int>::iterator it01 = s1.begin();
    while(it01!=s1.end()){
        cout << *it01 << " ";
        *it01++;
    }
    return 0;
}