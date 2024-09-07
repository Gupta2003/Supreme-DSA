#include<iostream>
#include<string>
using namespace std;
bool validPalindrome(string s, int start, int end)
{
    int length = s.length();
    for (int i = start,j=end;i<j;i++,j--){
        if(s[i]!=s[j]){
            return false;
        }
    }
    return true;
}
int main(){
    string s;
    bool first, second;
    cout << "Enter the string : " << endl;
    cin >> s;
    for (int i = 0,j=s.length()-1; i < j;i++,j--){
        if(s[i]==s[j]){
            continue;
        }
        else{
            first = validPalindrome(s,i+1,j);
            second = validPalindrome(s,i,j-1);
        }
    }
    bool result = (first || second);
    cout << "Answer is : " << result << endl;
    return 0;
}