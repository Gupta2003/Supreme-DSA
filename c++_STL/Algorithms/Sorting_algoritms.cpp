#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(20);
    v.push_back(20);
    v.push_back(25);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    // binary search -> it returns the value in boolean if the elementt is fount it returns true otherwise false
    bool index = binary_search(v.begin(), v.end(), 300);
    cout << index << endl;

    //lower bound -> it returns the lower bound means that here 25 is not in vector so it returns 30 just bigger than that number
    cout << "The lower bound for the number is : " << endl;
    auto ans = lower_bound(v.begin(), v.end(), 25);
    cout << *ans << endl;
    //upper bound -> it returns the upper bound means that here 25 is not in vector so it returns 30 just bigger than that number
    cout << "The upper bound for the number is : " << endl;
    auto ans1 = upper_bound(v.begin(), v.end(), 25);
    cout << *ans1 << endl;

    // range -> y kya krta h ki jese isme mene 20 diya toh ye dhundhega ki 20 kaha h(sorted range me) then pehle 20 pe ye ek iterator laga dega and jaha 20 milna band hoga uske baad wali digit pr ek iterator laga dega so is tarike se ye do iterators ka pair return krta hai isliye jo mene ans3 declare kiya h usme first or second funtion kaam kr rhe h jo ki ek pair me hi krte h then uske baad hum un no ko acess kr skte h with the help of loop;
    auto ans2 = equal_range(v.begin(), v.end(), 20);
    auto ans3 = ans2.first;
    while(ans3!=ans2.second){
        cout << *ans3 << " ";
        ans3++;
    }
    cout << endl;
    
    //finding min elemenet in a range
    auto it = min_element(v.begin(), v.end());
    cout << "The min element in sorted range is : "<<*it << endl;


    //finding max elemenet in a range
    auto it1 = max_element(v.begin(), v.end());
    cout << "The max element in sorted range is : "<<*it1 << endl;
    return 0;
}