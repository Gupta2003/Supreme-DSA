#include <iostream>
#include <vector>
using namespace std;
void row_sum(vector<vector<int>> v, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        int ans = 0;
        for (int j = 0; j < m; j++)
        {
            ans += v[i][j];
        }
        cout << ans << endl;
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
    row_sum(v, n, m);

    return 0;
}