#include <iostream>
using namespace std;

// Power of 2  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// int powerof(int n)
// {
//     if (n > 1 && (n & (n - 1)) == 0)
//     {
//         return 1;
//     }

//     return 0;
// }

// int main()
// {

//     int n = 0;
//     cin >> n;

//     cout << powerof(n) << endl;

//     return 0;
// }

// Counting ones of binary number  ************************************************

// int count(int n)
// {
//     int ans = 0;
//     while (n)
//     {

//        n= (n & (n - 1));
//         ans++;
//     }
//     return ans;
// }

// int main()
// {
//     int n = 0;
//     cin >> n;

//     cout << count(n) << endl;

//     return 0;
// }

// Possible Subset of Set  +++++++++++++++++++++++++++++++++++++++++++++++++++++++

// void subset(int arr[], int n)
// {

//     for (int i = 0; i < (1 << n); i++)
//     {

//         for (int j = 0; j < n       ; j++)
//         {

//             if (i & (1<<j))
//             {
//                 cout << arr[j] << " " ;
//             }
//         }
//         cout << endl;
//     }
// }

// int main()
// {

//     int arr[4] = {1, 2, 3,4};

//     subset(arr, 4);

//     return 0;
// }

// Unique number in an array ++++++++++++++++++++++++++++++++++++++++++++++++++++

// int unique(int arr[], int n)
// {
//     int xorsum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         xorsum = xorsum ^ arr[i];
//     }
//     return xorsum;
// }

// int main()
// {

//     int arr[] = {2, 4, 6, 3, 4, 6, 2};

//     cout << unique(arr, 7) << endl;

//     return 0;
// }

// Two unique number in array +++++++++++++++++++++++++++++++++++++++++++++++++++

int unique2(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {

        xorsum = xorsum ^ arr[i];
        
    }

return xorsum;
}

int main()
{

    int arr[] = {1, 2, 3,5, 7, 1, 2, 3};

    cout << unique2(arr, 8) << endl;

    return 0;
}