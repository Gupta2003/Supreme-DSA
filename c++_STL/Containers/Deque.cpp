#include <iostream>
#include <queue>
using namespace std;
int main()
{
    // declaring the deque
    deque<int> dq;

    // insertion of value in the deque
    dq.push_front(10);
    dq.push_front(20);
    dq.push_front(30);
    dq.push_front(40);
    dq.push_front(50);

    // printing the values using iterators
    cout << "The elements of the queue is : " << endl;
    deque<int>::iterator it = dq.begin();
    while (it != dq.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    // we can also check the size of the queue
    cout << "The size of the queue is :  " << dq.size() << endl;

    // we can delete the elements from the queue
    dq.pop_back();

    // we can insert the element at specific position in the queue
    dq.insert(dq.begin() + 5, 100);

    // we can swap the values of one queue to the another queue
    deque<int> q1;
    deque<int> q2;

    q1.push_back(1);
    q1.push_back(2);
    q1.push_back(3);
    q1.push_back(4);
    q1.push_back(5);

    q2.push_front('a');
    q2.push_front('b');
    q2.push_front('c');
    q2.push_front('d');
    q2.push_front('e');

    q1.swap(q2);
    // printing the elements of q2
    cout << "The elements in the first queue are : " << endl;
    deque<int>::iterator it1 = q2.begin();
    while (it1 != q2.end())
    {
        cout << *it1 << " ";
        it1++;
    }
    cout << endl;


    // printing the elements of q1
    cout << "The elements in the first queue are : " << endl;
    deque<int>::iterator it2 = q1.begin();
    while (it2 != q1.end())
    {  //here we perform explicit typecasting to print the alphabets
        cout << char(*it2) << " ";
        it2++;
    }

    // inserting an element in the queue
    dq.insert(dq.begin() + 5, 100);
    return 0;
}