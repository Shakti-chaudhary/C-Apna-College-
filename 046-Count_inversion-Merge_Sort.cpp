#include <iostream>
using namespace std;

long long merge(int arr[], int l, int mid, int n)
{

    long long inv = 0;
    int n1 = mid - l + 1;
    int n2 = n - mid;

    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++)
    {

        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {

        b[i] = arr[mid + i + 1];
    }
    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            inv += n1 - i;
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }

    return inv;
}

long long countin(int arr[], int l, int n)
{
    long long inv = 0;
    if (l < n)
    {

        int mid = (l+n) / 2;

        inv += countin(arr, l, mid);

        inv += countin(arr, mid + 1,n);

        inv += merge(arr, l, mid, n);
    }
    return inv;
}

int main()
{
    int n;
    // cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << countin(arr, 0, n - 1) << endl;

    return 0;
}