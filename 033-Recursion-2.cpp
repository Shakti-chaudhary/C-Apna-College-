#include <iostream>
using namespace std;

// Checking the array is sorted or not using recursion =============================

// bool sorted(int arr[], int n)
// {
//     if (n == 1)
//     {
//         return true;
//     }
//     bool prevarr = sorted(arr + 1, n - 1);

//     return (arr[n] < arr[n + 1] && prevarr);
// }

// int main()
// {
//     int arr[5]={1,4,7,55,25};

// cout<<sorted(arr,5)<<endl;
//     return 0;
// }

// Print number in decresing and increasing order till n. =======================

// void dec(int n)
// {
//     if (n == 0)
//     {
//         return;
//     }

//     cout << n << " ";
//     dec(n - 1);
// }

// void inc(int n)
// {

//     if (n==0)
//     {
//         return;
//     }

//     inc(n-1);
//     cout << n << " ";
// }

// int main()
// {
//     int a;
//     cin >> a;

//     dec(a);
//     cout << endl;
//     inc(a);
//     cout << endl;

//     return 0;
// }

// Last and first occurance of number ============================================

int firstocc(int arr[], int n, int i, int key)
{

    if (i == n)
    {
        return -1;
    }

    if (arr[i] == key)
    {
        return i;
    }

    return firstocc(arr, n, i + 1, key);
}

int lastocc(int arr[], int n, int i, int key)
{

if (i==n)
{
    return  -1;
}



    int prevind = lastocc(arr, n, i + 1, key);

        if (prevind != -1)
    {
        return prevind; 
    }

    if (arr[i] == key)
    {
        return i;
    }
    return -1;
}

int main()
{

    return 0;
}
