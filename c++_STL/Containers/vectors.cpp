#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // here we create a empty vector
    vector<int> v;


    // it is used to check the vector is empty or not it return boolean value
    cout << v.empty() << endl;



    // it is used to enter the values in vector
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);



    // it is like pointer to the first element of the array (it return the adress so to access the value at that adress we use the * sign)
    cout << "the starting element of vector is : " << *(v.begin()) << endl;



    // inserting a value in vector
    v.insert(v.begin() + 5, 100);



    // erasing an element
    v.erase(v.begin() + 5);



    // swaping of values of two vector
    vector<int> v1;
    v1.push_back('a');
    v1.push_back('b');
    v1.push_back('c');
    v1.push_back('d');
    v1.push_back('e');

    v.swap(v1);



    // traversal of vector
    cout << "The elements in vector are : " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "printing using iterator : " << endl;



    // making an iterator 
    vector<int>::iterator it = v.begin();
    while (it != v.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;
    cout << v.empty();



    // checking the maximum size of an array by system
    cout << v.max_size();



    // we can define the capacity of vector if we want
    v.reserve(10);

    return 0;
}