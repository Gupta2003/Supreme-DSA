#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void printdouble(int n)
{
    cout << (2 * n) << " ";
}
bool checkeven(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    vector<int> v(7);
    v[0] = 85;
    v[1] = 10;
    v[2] = 10;
    v[3] = 21;
    v[4] = 30;
    v[5] = 40;
    v[6] = 50;

    // for each algorithm
    for_each(v.begin(), v.end(), printdouble);
    cout << endl;

    // find algorithm
    int target = 40;
    auto it = find(v.begin(), v.end(), target);
    cout << *it << endl;
    cout << endl;

    // find_if algorithm
    cout << "First Even elements is : " << endl;
    auto it01 = find_if(v.begin(), v.end(), checkeven);
    cout << *it01 << endl;

    // count algorithm
    auto it02 = count(v.begin(), v.end(), 10);
    cout << "no of times the element present is : " << it02 << endl;

    // count if algorithm
    auto it03 = count_if(v.begin(), v.end(), checkeven);
    cout << "The no of even elements are : " << it03 << endl;

    // sort algorithm

    sort(v.begin(), v.end());

    cout << "printing the vector after the sort function" << endl;
    vector<int>::iterator it04 = v.begin();
    while (it04 != v.end())
    {
        cout << *it04 << " ";
        it04++;
    }
    cout << endl;


    // reverse algorithm
    reverse(v.begin(), v.end());
    cout << "printing the vector after the reverse function" << endl;
    vector<int>::iterator it05 = v.begin();
    while (it05 != v.end())
    {
        cout << *it05 << " ";
        it05++;
    }
    cout << endl;


    // rotate algorithm(har element ko kitni place rotate krna h uske liye use kiya h v.begin()+5 mtlb ki har element ko 5 position aage shift krdo )
    rotate(v.begin(), v.begin() + 5, v.end());
    cout << "printing the vector after the rotate function" << endl;
    vector<int>::iterator it06 = v.begin();
    while (it06 != v.end())
    {
        cout << *it06 << " ";
        it06++;
    }
    cout << endl;


    // unique algorithm
    auto it07 = unique(v.begin(), v.end());
    // isme it07 se pehle sare unique element honge or it07 ke baad sare duplicate element honge toh hame it07 ke pehle wale elements ko print krwana h or it07 ke baad wale sare elements ko erase kr dena h
    v.erase(it07, v.end());
    cout << "printing the value which are unique : " << endl;

    //   printing through for each loop
    for (int a : v)
    {
        cout << a << " ";
    }
    cout << endl;


    // .partition algorithm
    cout << "printing the value after partition algorithm : " << endl;
    partition(v.begin(), v.end(), checkeven);
    for (int a : v)
    {
        cout << a << " ";
    }
    return 0;
}