#include <iostream>
using namespace std;

int main()
{
    int n, m, key = 0;
    cin >> n >> m;
    int arr[n][m]; /*  Defining 2 dimensional array  First-Row Then-Column..  */

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            cin >> arr[i][j];
        }
    }

    // cout << "Enter the value for search : " << endl;
    // cin >> key;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {

    //         // cout << arr[i][j] << " "; /*  For Printing 2 dimensional array  */

    //         if (arr[i][j] == key) /*  Searching in array  */
    //         {
    //             cout << "Key found in the array : " << key << endl;
    //         }
    //     };
    //     cout << endl;
    // }

    int rs = 0;
    int re = n - 1;
    int cs = 0;
    int ce = m - 1;
   
        while (rs <= re && cs <= ce)
        {
            // row start
            for (int col = cs; col <= ce; col++)
            {
                cout << arr[rs][col] << " " ;
            }
            rs++;
            // column end
            for (int cend = rs; cend <= re; cend++)
            {
                cout << arr[cend][ce] << " " ;
            }
            ce--;
            // row end
            for (int rend = ce; rend >= cs; rend--)
            {
                cout << arr[re][rend] << " " ;
            }
            re--;
            // column start
            for (int cst = re; cst >= rs; cst--)
            {
                cout << arr[cst][cs] << " " ;
            }
            cs++;
        };
    

    return 0;
}