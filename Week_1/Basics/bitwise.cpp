#include <iostream>
using namespace std;
int no_of_set_bit(int n)
{
    int count = 0;
    while (n != 0)
    {
        if (n & 1 == 1)
        {
            count += 1;
        }
        n = n >> 1;
    }
    cout << count << endl;
    return 0;
}
int main()
{
    int n;
    cout << "Enter the no : " << endl;
    cin >> n;
    // Question
    no_of_set_bit(n);
    return 0;
}