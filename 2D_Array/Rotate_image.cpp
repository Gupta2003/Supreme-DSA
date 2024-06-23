#include <iostream>
using namespace std;

void transpose(int arr[][3], int n, int m)
{
    // Transpose the matrix (swap rows with columns)
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}
// rotating a particular row
int rotate(int arr[][3], int n, int m)
{
    int start = 0, end = n - 1;
    for (int j = 0; j < n; j++)
    {
        for (int i = start; i < (end / 2) + 1; i++)
        {
            swap(arr[j][i], arr[j][n - i - 1]);
        }
    }
}
int main()
{
    int n, m;
    cout << "Enter the number of rows and columns: ";
    cin >> n >> m;

    int arr[n][3];
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Call the function to rotate the image
    transpose(arr, n, m);

    // rotating a particular row

    rotate(arr, n, m);
    // Print the rotated image
    cout << "Rotated image:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
