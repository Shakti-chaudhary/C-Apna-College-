#include <bits/stdc++.h>
using namespace std;

// Linear Searching ************************************************

// int searcharr(int arr[], int n, int key)
// {

//     for (int i = 0; i < 6; i++)
//     {

//         if (arr[i] == key)
//         {
//             return i;
//         }
//     };

//     return -1;
// }
// int main()
// {
//     cout << "Enter the size of array :" << endl;
//     int n = 0;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {

//         cin >> arr[i];
//     };
//     cout << "Enter the key value :" << endl;
//     int key = 0;
//     cin >> key;

//     int search = searcharr(arr, n, key);
//     if (search == -1)
//     {
//         cout << "not found " << endl;
//     }
//     else
//     {
//         cout << "The index of Key is :" << search << endl;
//     }

//     return 0;
// }

// Binary Searching ************************************************

int binarySearch(int arr[], int a, int key)
{

    int s = 0;
    int e = a;

    

        while (s <= e)
        {
            int mid = (s + e) / 2;
            if (arr[mid] == key)
            {
                return mid;
            }
            else if (arr[mid] > key)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            };
        };
    

    return -2;
}

int main()
{
    int n = 7;
    //  cin>>"Enter the size of array : ">>n;

    int arr[7] = {8, 10, 12, 21, 27, 34, 42};
    int ans = 0;
    int key;
    cin >> key;

    ans = binarySearch(arr, n, key);

    cout <<"Value found at index : "<< ans+1 << endl;

    return 0;
}
