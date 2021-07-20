#include <iostream>
using namespace std;

// void primeSieve(int n)
// {

//     int prime[100] = {0};

//     for (int i = 2; i <= n; i++)
//     {

//         if (prime[i] == 0)
//         {
//             for (int j = i * i; j <= n; j += i)
//             {

//                 prime[j] = 1;
//             }
//         }
//     }

//     for (int i = 2; i <= n; i++)
//     {

//         if (prime[i] == 0)
//         {
//             cout << i << " ";
//         }
//     }
//     cout<<endl;
// }

// int main()
// {
//     int n;

//     cin >> n;

//     primeSieve(n);

//     return 0;
// }

// Prime factorisation using Sieve

void prfac(int n)
{

    int arr[100] = {0};

    for (int i = 2; i <= n; i++)
    {

        arr[i] = i;
    }

    for (int i = 2; i <= n; i++)
    {

        if (arr[i] == i)
        {
            for (int j = i * i; j <= n; j += i)
            {

                if (arr[j] == j)
                {
                    arr[j] = i;
                }
            }
        }
    }
    while (n != 1)
    {
        cout << arr[n] << " ";
        n = n / arr[n];
    }
}

int main()
{
    int n = 0;
    cin >> n;
    prfac(n);

    return 0;
}
