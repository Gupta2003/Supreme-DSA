#include<iostream>
#include<vector>
using namespace std;
// normal sieve of eratosthenes
void sieve(int n,int count){
    vector<bool> v(n, true);
    v[0] = v[1] = false;
    for (int i = 2; i < n;i++){
        if(v[i] == true){
            count++;
            int j = 2 * i;
            while (j <= n)
            {
                v[j] = false;
                j += i;
            }
        }
    }

    cout << "output of sieve of eratosthenes : " << endl;
    for (int i = 0; i < n;i++){
        if(v[i]== true){
            cout << i << endl;
        }
    }
    cout << "number of primes are : " << count << endl;
}

// First optimisation sieve of eratosthenes
void first_optimised(int n,int count)
{
    vector<bool> v(n, true);
    v[0] = v[1] = false;
    for (int i = 2; i < n; i++)
    {
        if (v[i] == true)
        {
            count++;
            int j = i * i;
            while (j <= n)
            {
                v[j] = false;
                j += i;
            }
        }
    }
    cout << "output of first optimised sieve of eratosthenes : " << endl;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == true)
        {
            cout << i << endl;
        }
    }
    cout << "number of primes are : " << count << endl;
}

// second optimisation sieve of eratosthenes
void second_optimised(int n,int count)
{
    vector<bool> v(n, true);
    v[0] = v[1] = false;
    for (int i = 2; i*i < n; i++)
    {
        if (v[i] == true)
        {
            int j = i * i;
            while (j <= n)
            {
                v[j] = false;
                j += i;
            }
        }
    }
    cout << "output of second optimised sieve of eratosthenes : " << endl;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == true)
        {
            count++;
            cout << i << endl;
        }
    }
    cout << "number of primes are : " << count << endl;
}

int main()
{
    int n,count = 0;
    cout << "Enter the nunber : " << endl;
    cin >> n;
    sieve(n,count);
    first_optimised(n,count);
    second_optimised(n,count);
    return 0;
}