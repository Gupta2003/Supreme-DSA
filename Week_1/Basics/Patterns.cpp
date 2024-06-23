#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the no of rows and no of coloms : " << endl;
    cin >> n >> m;
    /*
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
            cout << "*" << "\t";
        }
        cout << endl;
    }*/

    // *********************hollow rectangle*****************

    /*
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == (n-1)||i == 0||j==0||j==(m-1)){
                    cout << "* ";
                    }
                else{
                    cout << "  ";
                }

            }
            cout << endl;
        }*/

    // ********************left Upper Pyramid*********************************

    /*
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i >= j)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
     */

    // ********************right lower Pyramid*********************************
    /*
        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i <= j)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    */

    // ********************left lower Pyramid*********************************
    /*
        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (j<=n-i-1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }*/

    // ********************upper hollow Pyramid*********************************
    /*
          for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (j==0||i==(n-1)||i==j)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }
        */
    // ********************lower hollow Pyramid*********************************
    /*
          for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i==0||j==(m-1)||i==j)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }*/

    // ********************numeric half Pyramid*********************************
    /*
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (j <= i)
                {
                    cout << j;
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }*/

    // ********************Full Pyramid*********************************

    /*for (int i = 1; i <= n; i++)
       {
           // for spaces
           for (int j = 0; j <= n-i-1; j++)
           {
              cout<<" ";
           }
           // for stars
           for (int k = 0; k < i;k++)
           {
               cout<<"* ";
           }
           cout << endl;
       }
   */

    // ********************inverted Full Pyramid*********************************

    /*for (int i = 0; i <= n; i++)
       {
           // for spaces
           for (int j = 0; j <= i; j++)
           {
              cout<<" ";
           }
           // for stars
           for (int k = 0; k <= n-i;k++)
           {
               cout<<"* ";
           }
           cout << endl;
       }*/

    // ********************Diamond*********************************

    /*for (int i = 0; i <= (n/2); i++)
    {
        // for spaces
        for (int j = 0; j <= n/2-i; j++)
        {
           cout<<" ";
        }
        // for stars
        for (int k = 0; k <= i;k++)
        {
            cout<<"* ";
        }
        cout << endl;
    }


 for (int i = (n/2)+1; i <= n; i++)
    {
        // for spaces
        for (int j = 0; j <= i-(n/2); j++)
        {
           cout<<" ";
        }
        // for stars
        for (int k = 0; k < n-i;k++)
        {
            cout<<"* ";
        }
        cout << endl;
    }*/
    // is pattern me odd no wale toh sahi chal rhe h bs even walo me issue aa rha h usme shyd bich wali line do bar print krni hogi tabhi chalega

    // ********holow pyramid********

    /*for (int i = 0; i < n; i++)
    {
        // for spaces
        for (int j = 0; j < n-i; j++)
        {
            cout << " ";
        }
        // for stars

            for (int k = 0; k <= i; k++)
            {
                if(i==0||i==(n-1)||k==0||k==i){
                    cout << "* ";
                }
                else{
                    cout << "  ";
                }
            }
        cout << endl;
    }*/

    // ***************inverted holow pyramid********************
/*
    for (int i = 0; i < n; i++)
    {
        // for spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // for stars

            for (int k = 0; k < n-i; k++)
            {
                if(i==0||i==(n-1)||k==0||k==n-i-1){
                    cout << "* ";
                }
                else{
                    cout << "  ";
                }
            }
        cout << endl;
    }
*/

    // ****************hollow diamond**********************
/*
    for (int i = 0; i < n; i++)
    {
        // for spaces
        for (int j = 0; j < n-i; j++)
        {
            cout << " ";
        }
        // for stars

        for (int k = 0; k <= i; k++)
        {
                if(i==0||k==0||k==i){
                    cout << "* ";
                }
                else{
                    cout << "  ";
                }
        }
        cout << endl;
    }


    for (int i = 0; i < n; i++)
    {
        // for spaces
        for (int j = 0; j < i+1; j++)
        {
            cout << " ";
        }
        // for stars

            for (int k = 0; k < n-i; k++)
            {
                if(i==(n-1)||k==0||k==n-i-1){
                    cout << "* ";
                }
                else{
                    cout << "  ";
                }
            }
        cout << endl;
    }
*/

    // ****************mix pattern **********************
    /*
    for (int i = 0; i < n; i++)
    {
        // for spaces
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << "* ";
        }
        // for stars
        for (int k = 0; k < 2*i+1; k++)
        {
            cout << "  ";
        }
        for (int l = 0; l <= n - i - 1; l++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        // for spaces
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        // for stars
        for (int k = 0; k <= (2*n - 2*i)-2; k++)
        {
            cout << "  ";
        }
        for (int l = 0; l <= i; l++)
        {
            cout << "* ";
        }
   
        cout << endl;
    }
    */

    // ****************Fancy 12 pattern **********************

   /* for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (j <= i)
            {
                cout << i<<" ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }*/
    
    // ****************Fancy 12 pattern **********************

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*i+1; j++)
        {
            if(j%2==0){
                cout << i+1 << " ";
            }
            else{
                cout << "* ";
            }
        }
            cout << endl;
    }

    return 0;
}