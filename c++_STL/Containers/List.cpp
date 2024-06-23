#include <iostream>
#include <list>
using namespace std;
int main()
{
    // creation of list
    list<int> li;

    // insertion of elements in list (1. By pushback 2.by pushfront)
    li.push_back(10);
    li.push_back(20);
    li.push_back(30);
    li.push_back(40);
    li.push_back(50);
    li.push_front(60);

    // acessing first element
    cout << "The first element is : " << li.front() << endl;

    // acessing last element
    cout << "The last element is : " << li.back() << endl;

    // accessing first element by iterator
    cout << "The first element is : " << *(li.begin()) << endl;

    // accessing last element by iterator
    cout << "The last element is : " << *(li.end()) << endl;

    // checking the list is empty of not
    if (li.empty() == true)
    {
        cout << "Yes list is empty" << endl;
    }
    else
    {
        cout << "no list is not empty" << endl;
    }

    // inserting an element in list
    li.insert(li.begin(), 10);

    // erasing an element from the list
    // li.erase(li.begin(), 5);

    // printing the list
    cout << "Traversal of list before removing: " << endl;
    list<int>::iterator it = li.begin();
    while (it != li.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;
    // removing a particular value from all places wherever it is present
    li.remove(10);

    // printing the list
    cout << "Traversal of list after removing: " << endl;
    list<int>::iterator it01 = li.begin();
    while (it01 != li.end())
    {
        cout << *it01 << " ";
        it01++;
    }
    return 0;
}