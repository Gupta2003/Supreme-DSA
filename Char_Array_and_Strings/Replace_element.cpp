#include<iostream>
using namespace std;
void replace_element01(char arr[]){
    int i = 0;
    while(arr[i]!='\0'){
        if(arr[i]=='@'){
            arr[i] = int(arr[i]) - 32;
        }
        i++;
    }
}
void replace_element(char arr[]){
    int i = 0;
    while (arr[i] != '\0')
    {
        if (arr[i] == '@')
        {
            arr[i] = ' ';
            i++;
        }
        i++;
    }
}
int main(){
    char arr[100];
    cout << "Enter the array of characters : " << endl;
    cin.getline(arr, 100);

    // by bruteforce approach
    // replace_element(arr);

    // we can also do it by ascii value concept
    replace_element01(arr);
    cout << arr;
    return 0;
}