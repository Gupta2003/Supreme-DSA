#include<iostream>
#include<string>
string remove_duplicate(string str){
    string ans;
    for (int i = 0; i < str.length();i++){
        char current_character = str[i];
        if(ans.empty()){
            ans.push_back(current_character);
        }
        else if(ans.back()==current_character){
            ans.pop_back();
        }
        else{
            ans.push_back(current_character);
        }
    }
    return ans;
}
using namespace std;
int main(){
    string str;
    cout << "Enter the string : " << endl;
    cin >> str;
    str = remove_duplicate(str);
    cout << str<< endl;
    return 0;
}