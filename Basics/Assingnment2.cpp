#include <iostream>
using namespace std;
int fact(int num)
{
    if (num == 0)
        return 1;
    else
    {
        return num * fact(num - 1);
    }
}
bool isPrime(int n)
{
    int count = 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            count += 1;
        }
    }
    if (count != 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int allPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (isPrime(i) == true)
        {
            cout << i << "\t";
        }
    }
}
int kbit(int n)
{
}
int binTodec(int n)
{
    int rem = 0;
    while (n > 0)
    {
        rem = n % 2;
    }
}
int hollow_py(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == n || j == 1 || i == j)
            {
                cout << j << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
int inv_holl_py(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1)
            {
                cout << j << " ";
            }
            else if (j == 1)
            {
                cout << i << "  ";
            }
            else if (j == (n + 1 - i))
            {
                cout << n << "  ";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
int inv_holl_py1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if (i == 1 || j == i || j == n)
            {
                cout << j << " ";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
int equilateral_py(int n)
{
    for (int i = 0; i < n; i++)
    {
        // for spaces
        for (int j = 0; j < (n - 1 - i); j++)
        {
            cout << "  ";
        }
        // for numbers
        for (int k = 0; k < i + 1; k++)
        {
            cout << k + 1 << " ";
        }
        for (int p = i; p > 0; p--)
        {
            cout << p << " ";
        }
        cout << endl;
    }
}
int solid_half_dia(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int fancy_1(int n)
{
    for (int i = 0; i < n; i++)
    {
        // for stars
        for (int j = 0; j < n + 3 - i; j++)
        {
            cout << "* ";
        }
        // for numbers
        for (int k = 0; k <= 2 * i; k++)
        {
            if (k % 2 == 0)
            {
                cout << i + 1 << " ";
            }
            else
            {
                cout << "* ";
            }
        }
        // for stars again
        for (int p = 0; p < n + 3 - i; p++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int fancy_2(int n)
{
    int p = 1;

    for (int i = 0; i < n; i++)
    {
        // for numbers
        for (int j = 0; j < 2 * i + 1; j++)
        {

            if (j % 2 == 0)
            {
                cout << p << " ";
                p++;
            }

            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    int start = p - n;
    for (int i = 0; i < n; i++)
    {
        int k = start;
        // for numbers
        for (int j = 0; j <= (n + 1) - (2 * i) + 1; j++)
        {

            if (j % 2 == 0)
            {
                cout << k << " ";
                k++;
            }

            else
            {
                cout << "* ";
            }
        }
        start = start - (n - i - 1);

        cout << endl;
    }
}
int fancy_3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (2 * i) + 1; j++)
        {
            if (j == 0 || j == 2 * i)
            {
                cout << "* ";
            }
            else 
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - (2 * i) + 1; j++)
        {
            if (j == 0 || j == 2 * i+4)
            {
                cout << "* ";
            }
            else
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    // question 1
    // hollow_py(n);

    // qeustion 2(by me)
    // inv_holl_py(n);

    // qeustion 2(by lakshay)
    // inv_holl_py1(n);

    // question 3
    // equilateral_py(n);

    // question 4
    // solid_half_dia(n);

    // question 5
    // fancy_1(n);

    // question 6(op)
    // fancy_2(n);

    // question 7
    fancy_3(n);

    // question 15
    // cout << fact(n) << endl;

    // question 16
    // isPrime(n);

    // question 17
    // allPrime(n);

    // question 18
    // its easy so i didnt do it

    // question 19
    // kbit(n);
    // for doing Q19 lets first do binary to decimal and decimal to binary
    // binary to decimal
    // binTodec(n);
    return 0;
}