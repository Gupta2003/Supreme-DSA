#include <iostream>
using namespace std;
/*
int main()
{
    char c;
    cin >> c;
    if ('a' <= c && c <= 'z')
    {
        cout << 0;
    }
    else if ('A' <= c && c <= 'Z')
    {
        cout << 1;
    }
    else
    {
        cout << -1;
    }*/

/*
Pattern
1
23
345
4567
*/
/*
int main()
{
    int n;
    cout << "Enter the no : " << endl;
    cin >> n;
    int i = 1;
    while (i < n)
    {
        int j = i, count = 0;
        while (count < i)
        {
            cout << j;
            j = j + 1;
            count = count + 1;
        }
        cout << "\n";
        i = i + 1;
    }
    // my approach
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= 2 * i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }*/
/*
Pattern
N = 4
*
***
*****
*******
*/
/*
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i < n)
    {
        int m = 1, ch = i;
        while (m <= ch)
        {
            cout << "*";
            m = m + 1;
        }
        cout << "\n";
        i = i + 1;
    }
}*/
/*
Pattern
N = 4
1
22
333
4444
*/
/*
int main()
{
    int i, j, n;
    cin >> n;
    for (i = 1; i < n; i++)
    {
        for (j = 1; j < i + 1; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}*/
/*
Pattern
N = 4
1
21
321
4321
*/
/*
int main()
{
    int i, j, n;
    cin >> n;
    for (i = 1; i < n; i++)
    {
        int p = i;
        for (j = 1; j < i + 1; j++)
        {
            cout << p;
            p--;
        }
        cout << endl;
    }
}*/
/*
Pattern
N = 5
E
DE
CDE
BCDE
ABCDE
*/
/*
int main()
{
    int i, j, n;
    ;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        char p = 'A' + n - i;
        for (j = 1; j <= i; j++)
        {
            cout << p;
            p++;
        }
        cout << endl;
    }
}*/

/*
Pattern
N = 5
  *
 ***
*****
 ***
  *
*/
void printPatt(int n)
{
    int i = 1;
    while (i <= (n))
    {
        int gaps = n - 2 * i + 1, k = 1;
        if (i > (n + 1) / 2)
        {
            int no = (n + 1) / 2;
            gaps = 2 * (i % no);
        }
        while (k <= gaps / 2)
        {
            cout << " ";
            k = k + 1;
        }
        int ch = n - 1 - gaps;
        while (ch >= 1)
        {
            cout << "*";
            ch = ch - 1;
        }
        k = 1;
        while (k <= gaps / 2)
        {
            cout << " ";
            k = k + 1;
        }
        cout << "\n";
        i = i + 1;
    }
}
int main()
{
    printPatt(5);
    return 0;
}