#include<iostream>
#include<queue>
using namespace std;
int main(){

    // declaring the queue
    priority_queue<int> p;

    // inserting the value in the queue
    p.push(10);
    p.push(20);
    p.push(30);
    p.push(40);
    p.push(50);

    // deleting the value from the queue
    p.pop();

    // acessing the top element of the queue
    cout<<"The top element of the queue is : "<<p.top()<<endl;

    // rest functions are same like size(),empty(),,,etc etc
    return 0;
}