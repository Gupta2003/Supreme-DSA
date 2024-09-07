#include<iostream>
#include<string>
using namespace std;
string conversion(string s)
    {
        int i = 0;
        while (i < s.length())
        {
            if ((s[i] <= 'z') && (s[i] >= 'a'))
            {
                i++;
            }
            else
            {
                if ((s[i] >= 'A') && (s[i] <= 'Z'))
                {
                    // here we use explicit type conversion we can also it by adding ' ' space because its asii vlue is 32
                    s[i] = (s[i]) + 32;
                    cout << "Converting " << s[i] << " to " << char(s[i] + 32) << endl;
                    i++;
                }
                else
                {
                    s.erase(s.begin() + i);
                }
            }
        }
        return s;
    }
int main(){
    bool isPalindrome(string s)
    {
        s = conversion(s);
        string ans;
        for (int i = 0; i < s.length(); i++)
        {
            cout << s[i];
        }
        for (int i = 0, j = s.length() - 1; i < j; i++, j--)
        {
            if (s[i] != s[j])
            {
                return false;
            }
        }
    }
    return true;
};