#include <iostream>
#include <unordered_map>
#include<map>
using namespace std;
int main()
{
    map<int, int> table;
    table[1] = 10;
    table[2] = 20;
    table[3] = 30;
    // to access that table we have to make a iterator

    // first method
    cout << "OUTPUT by first method -> " << endl;
    map<int, int>::iterator it;
    for (it = table.begin(); it != table.end(); it++)
    {
        int key = it->first;
        int value = it->second;
        cout << "key is " << key << " value is " << value << endl;
    }

    // second method(for each loop )
    cout << "OUTPUT by second method -> " << endl;
    for (auto it : table)
    {
        int key = it.first;
        int value = it.second;
        cout << "key is " << key << " value is " << value << endl;
    }

    // third method(using a pair stl)
    cout << "OUTPUT by third method -> " << endl;
    map<int, int>::iterator it01 = table.begin();
    while (it01 != table.end())
    {
        pair<int, int> p;
        p.first = (*it01).first;
        p.second = (*it01).second;
        cout << p.first << " " << p.second << " " << endl;
        *it01++;
    }

    // fourth method (optimized version of third)
    cout << "OUTPUT by fourth method -> " << endl;
    map<int, int>::iterator it02 = table.begin();
    while (it02 != table.end())
    {
        pair<int, int> p1 = *it02;
        cout << p1.first << " " << p1.second << " " << endl;
        *it02++;
    }

    // declaration of unordered map
    map<int, string> u;

    // M-1 for insertion in unordered map
    u[0] = "ashish";

    // M-2 for insertion in unoredered map
    u.insert(make_pair(2, "shivansh"));

    // declaration of pair
    pair<int, string> p;
    p.first = 1;
    p.second = "akshat";

    // M-3 insertion of value in unordered map with the help of pair
    u.insert(p);

    // accesing the value
    cout << "The Value is : " << u.at(0) << endl;

    // count function
    // wese ye count wala method count krne k liye h kitne baar aa rhi h key lekin common sense h ki key different hoti h toh key ek hi bar aayegi
    if (u.count(0) == 0)
    {
        cout << "key is not found " << endl;
    }
    else if (u.count(0) == 1)
    {
        cout << "Key is found dost !!!" << endl;
    }

    // we can also use a find function to search key
    if (u.find(0) != u.end())
    {
        cout << "key is found by find method" << endl;
    }
    else if (u.find(0) == u.end())
    {
        cout << "Key ni mili bhai by find method " << endl;
    }
    return 0;
}