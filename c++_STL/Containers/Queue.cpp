#include<iostream>
#include<queue>
using namespace std;
int main(){

    // initialising the queue
    queue<int> q;

    // inserting the values in queue
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    // printing the queue
    //NOTE :: There is no Specific method to print whole queue only we can do is we can copy a queue in any temp queue and then pop the element of that temp queue which will print all the element of queue one by one 

    // checking the size of the queue
    cout << "The no of element in the queue is : " << endl;
    cout << q.size() << endl;

    // acessing the first element
    cout << "The first element in the queue is : " << endl;
    cout << q.front() << endl;


    // acessing the last or rear element
    cout << "The last element in the queue is : " << endl;
    cout << q.back() << endl;
    return 0;
}