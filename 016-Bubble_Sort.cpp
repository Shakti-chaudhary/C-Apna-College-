#include <iostream>
using namespace std;

void bubbleSort(int arr[], int a)
{
    int count = 1;
    while (count < a)
    {
        for (int j = 0; j < a - count; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        };
                count++;
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

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    };
    cout << endl;

    return 0;
}