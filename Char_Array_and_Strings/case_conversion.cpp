#include <iostream>
using namespace std;
void lower_to_upper(char arr[])
{
    int i = 0;
    while (arr[i] != '\0')
    {
        arr[i] = int(arr[i]) - 32;
        i++;
    }
    // printing the character array
    cout << arr << endl;
}
void upper_to_lower(char arr[])
{
    int i = 0;
    while (arr[i] != '\0')
    {
        if (arr[i] != ' ')
        {   
            //M->1
            // here we added sapce kyuki space ki ascii value 32 hoti h 
            arr[i] = arr[i] + ' ';

            //M->2
            // by typecasting char to int (explicitly)
            arr[i] = int(arr[i]) + 32;

        }
        i++;
    }
    // printing the character array
    cout << arr << endl;
}
int main()
{
    char arr[100];
    cout << "Enter the array of characters : " << endl;
    cin.getline(arr, 100);

    // converting lower case to upper case
    // lower_to_upper(arr);

    // converting upper case to lower case
    upper_to_lower(arr);
    return 0;
}