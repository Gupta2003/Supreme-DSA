#include <iostream>
using namespace std;
int searching(int arr[][3], int n, int m, int key)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == key)
            {
                cout << i << " " << j;
            }
        }
    }
}
int main()
{
    int n, m;
    cout << "Enter the no of rows and coloms : " << endl;
    cin >> n >> m;
    int key;
    cout << "Enter the element to search : " << endl;
    cin >> key;
    int arr[n][3];
    cout << "Enter the elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    searching(arr, n, m, key);

    return 0;
}