#include <iostream>
#include <string>
#include <climits>
#include<algorithm>
using namespace std;
int mystoi(string s)
{
    int len = s.size();
    double num = 0;
    int i = 0;
    while (s[i] == ' ')
    {
        i++;
    }
    bool negative = s[i] == '-';
    negative == true ? i++ : i;
    while (i < len && s[i] >= '0' && s[i] <= '9')
    {
        num = num * 10 + (s[i]-'0');
        i++;
    }
    num = negative ? -num : num;
    num = (num > INT_MAX) ? INT_MAX : num;
    num = (num < INT_MIN) ? INT_MIN : num;
    return num;
}
string intToRoman(int num)
{
    string ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    string tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    string hrns[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    string ths[] = {"", "M", "MM"};

    return ths[num / 1000] + hrns[(num % 1000) / 100] + tens[((num % 1000) % 100) / 10] + ones[(((num % 1000) % 100) % 10)];
}
string addBinary(string a, string b)
{
    string ans;
    int carry = 0;
    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 || j >= 0 || carry)
    {
        if (i > 0)
            carry += a[--i] - '0';
        if (j > 0)
            carry += b[--j] - '0';
        ans += carry % 2 + '0';
        carry = / 2;
    }

    reverse(begin(ans), end(ans));
    return ans;
}
int main()
{
    cout << mystoi("123") << endl;
    cout << intToRoman(1234)<<endl;
    cout << addBinary("101", "111");
    return 0;
}