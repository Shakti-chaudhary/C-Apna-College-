#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {

            if (arr[i] > arr[j])
            {
                int a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        };
    };
}

int main()
{

    int n = 7;
    //  cin>>"Enter the size of array : ">>n;

    int arr[7] = {8, 10, 21, 11, 27, 14, 42};
    int ans = 0;
    // int key;
    // cin >> key;

    selectionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    };
    cout<<endl;

    return 0;
}