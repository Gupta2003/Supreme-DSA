#include <iostream>
#include <math.h>
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
        int condition = (2 * i) + 1;
        for (int j = 0; j < condition + 1; j++)
        {
            if (j == 0 || j == 2 * i)
            {
                cout << "* ";
            }
            else if (j < condition / 2)
            {
                cout << j << " ";
            }
            else
            {
                cout << condition - j << " ";
            }
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - (2 * i) + 1; j++)
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
}
int flloyd_pattern(int n)
{
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}
int pascal_triangle(int n)
{
    for (int i = 1; i < n; i++)
    {
        int c = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << c << " ";
            c = c * (i - j) / j;
        }
        cout << endl;
    }
}
int butterfly(int n)
{
    // for upper half
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        for (int k = 0; k < (2 * n - 2 * i - 2); k++)
        {
            cout << "  ";
        }
        for (int p = 0; p <= i; p++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // for lower half
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        for (int k = 0; k < 2 * i; k++)
        {
            cout << "  ";
        }
        for (int p = 0; p < n - i; p++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void dec_to_bin(int n)
{
    int rev = 0, count = 0;
    while (n > 0)
    {
        int rem = n % 2;
        rev = (rem * pow(10, count)) + rev;
        n = n / 2;
        count++;
    }
    cout << rev;
}
void bin_to_dec(int n)
{
    int rem = 0, rev = 0, count = 0;
    while (n > 0)
    {
        rem = n & 1; // it will give us the last bit
        rev = rem * pow(2, count) + rev;
        n = n >> 1;
        count++;
    }
    cout << rev;
}
int count_set_bit(int n)
{
    int rem = 0, count = 0;
    while (n > 0)
    {
        rem = n & 1;
        if (rem == 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
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

    // question 7(incomplete)
    // fancy_3(n);

    // question 8
    // flloyd_pattern(n);

    // question 9(iska formula h jo learn krna padega)
    // formula = > c = c * (i - j) / j;{
    //     where range of j = ( 1,i]
    //     and range of i =(0,n)
    // }
    // pascal_triangle(n);

    // question 10
    // butterfly(n);

    // question 11/12/13/14 => i know all

    // question 15
    // cout << fact(n);

    // question 16
    // isPrime(n);

    // question 17
    // allPrime(n);

    // question 18
    // its easy so i didnt do it

    // question 19
    // kbit(n);

    // for doing Q19 lets first do binary to decimal and decimal to binary
    // 1. binary to decimal
    // bin_to_dec(n);

    // 2. decimal to binary (code sahi h vs code me galat ans de rha h pata ni kyu)
    // dec_to_bin(n);

    // question 20 => i know formula = (F = C*1.8+32)

    // question 21
    // cout << count_set_bit(n);

    // question 22 => i know that
    return 0;
}