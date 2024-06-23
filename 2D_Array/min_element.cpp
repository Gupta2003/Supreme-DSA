#include <iostream>
#include<vector>
using namespace std;
int min_element(vector<vector<int>>v, int n, int m)
{
    int ans = v[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m-1; j++)
        {
          if(v[i][j]>v[i][j+1]){
              ans = v[i][j];
          }
        }
    }
    return ans;
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
    cout<<min_element(v, n, m);

    return 0;
}