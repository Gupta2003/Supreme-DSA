#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the no of rows and coloms : " << endl;
    cin >> n >> m;
    int arr[n][m];
    cout << "Enter the elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    // printing diagonal element

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}