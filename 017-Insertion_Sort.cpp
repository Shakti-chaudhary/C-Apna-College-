#include <iostream>
using namespace std;

void insertionSort(int arr[], int a)
{

    for (int i = 1; i < a; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = current;
    };
}

int main()
{

    int n = 7;
    //  cin>>"Enter the size of array : ">>n;

    int arr[7] = {8, 10, 12, 21, 27, 34, 42};
    int ans = 0;
    // int key;
    // cin >> key;

    insertionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    };
    cout << endl;

    return 0;
}