#include <iostream>
#include <stack>
using namespace std;
int main()
{

    // declaring or initializing a queue
    stack<int> s;

    // inserting elements in the queue
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    // for deleting the elements
    s.pop();

    // accessing the top element
    cout << "The top element of the stack is : " << s.top() << endl;


    //  printing the size of the stack
    cout << "The size of the queue is : " << s.size() << endl;
    
    return 0;
}
