#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(5);
    v[0] = 1;
    v[1] = 2;
    v[2] = 3;
    v[3] = 4;
    v[4] = 5;
    vector<int> v1(5);
    v1[0] = 1;
    v1[1] = 2;
    v1[2] = 3;
    v1[3] = 4;
    v1[4] = 5;

    // calculating sum by accumulate numeric algorithm
    int sum = accumulate(v.begin(), v.end(), 0);
    // here we give 0 like the initial value of sum as we declare int sum = 0;
    cout << "The sum is : "<<sum<<endl;


    // calculating product by numeric algo
    // y kya krta h ki do vector ko leta h unke same index pr jo pade hote h unka prd krata h or fir add kr deta h

    int prd = inner_product(v.begin(),v.end(),v1.begin(),0 );
    cout << "the sum of product is : " << prd<<endl;


    // using the partial sum numeric algo
    vector<int> result(v.size());
    cout << "The result of the partial sum algo is : " << endl;
    partial_sum(v.begin(),v.end(),result.begin());
    for(int a:result){
        cout << a << " ";
    }
    cout << endl;


    // using the iota it simply fill the value
    // we can add the values starting from any number 
    vector<int> v2(10);
    iota(v2.begin(), v2.end(), 1);
    for(int a:v2){
        cout << a << " ";
    }
    return 0;
}