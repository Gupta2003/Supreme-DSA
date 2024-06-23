#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    // lets convert this vector into a heap(by default it will be a max heap)
    make_heap(v.begin(), v.end());
    cout << "Making a heap from vector : " << endl;
    for(int a:v){
        cout << a << " ";
    }
    cout << endl;

    cout << "Inserting a new element is heap : " << endl;
    // insering a new element -> if we insert a new element y use end me patak dega heap me include ni krega heap me incldue krne k liye push heap ka prayog kre
    v.push_back(500);
    // pehle use vector me dalna h fir use heap me push krna h 
    push_heap(v.begin(),v.end());
    for (int a : v)
    {
        cout << a << " ";
    }
    cout << endl;

    // deletion of element from heap-> pop krne se y use hata ke end me fek dega fir hame vector se bhi pop krwana padega use hatane ke liye
    cout << "deleting an element from the heap : " << endl;
    pop_heap(v.begin(),v.end());
    // pehle heap se nikal diya ab sale ko bahar hi nikal denge vector se like ye end me patak deta h lake sirf delte ni krta
    v.pop_back();
    for(int a : v){
        cout << a << " ";
    }
    cout << endl;
    // sorting a heap
    cout << "sorting of heap : " << endl;
    sort_heap(v.begin(), v.end());
    for (int a:v){
        cout << a << " ";
    }
        return 0;
}