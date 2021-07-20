#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

//  Sum of first n natural numbers  **************************************

// int main()
// {

//     int n, sum = 0;
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {

//         sum += i;
//     }

//     cout << sum << endl;

//     return 0;
// }

// Check pythagorian triplet **************************************

bool check(int x, int y, int z)
{

    int a = max(x, max(y, z));
    int b, c;

    if (a == x)
    {
        b = y, c = z;
        if (pow(a, 2) == pow(b, 2) + pow(c, 2))
        {
            return true;
        }
    }
    if (a == y)
    {
        b = x, c = z;
        if (pow(a, 2) == pow(b, 2) + pow(c, 2))
        {
            return true;
        }
    }
    if (a == z)
    {
        b = y, c = x;
        if (pow(a, 2) == pow(b, 2) + pow(c, 2))
        {
            return true;
        }
    }

    return 0;
}

int main()
{

    int a, b, c;
    cin >> a >> b >> c;

    if (check(a, b, c))
    {
        cout << "Pythagorean triplet" << endl;
    }
    else
    {
        cout << "Not a pythagorean triplet" << endl;
    }

    return 0;
}