#include <iostream>
using namespace std;

void swap(int arr[], int m, int hl)
{
    int temp = arr[hl];
    arr[hl] = arr[m];
    arr[m] = temp;
}

void dnfSort(int arr[], int n)
{

    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr, low, mid);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr, mid, high);
            high--;
        }
    }
}

int main()
{

    int arr[] = {0, 2, 0, 1, 0, 2, 1, 2, 0, 0, 1, 2};

    int s = sizeof(arr) / sizeof(arr[0]);

    cout << s << endl;

    dnfSort(arr, 12);

    for (int i = 0; i < 12; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}