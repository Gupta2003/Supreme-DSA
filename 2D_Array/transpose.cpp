#include <iostream>
#include <vector>
using namespace std;
void row_sum(vector<vector<int>> v, int n, int m)
{
    vector<vector<int>> v1(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            v1[i][j] = v[j][i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << v1[i][j]<<" ";
        }
        cout << endl;
    }
}
void row_sum1(vector<vector<int>> v, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < m; j++)
        {
            int temp = v[i][j];
            v[i][j] = v[j][i];
            v[j][i] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << v[i][j]<<" ";
        }
        cout << endl;
    }
}
int main()
{
    int n, m;
    cout << "Enter the no of rows and coloms : " << endl;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    cout << "Enter the elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    // by making an new vector or new array 
    // row_sum(v, n, m);

    // transpose without new array or new vector
    row_sum1(v, n, m);

    return 0;
}