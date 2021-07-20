#include <iostream>
using namespace std;

void maxtill(int arr[], int a)
{

    int mx = -99999;
    for (int i = 0; i < a; i++)
    {

        if (mx < arr[i])
        {
            mx = arr[i];
        }
        cout << mx << endl;
    };
};

int main()
{

    int n = 6;
    int arr[6] = {0, -9, 1, 3, -4, 5};

    maxtill(arr, n);

    return 0;
}