#include <bits/stdc++.h>
using namespace std;

// Binary to Decimal Conversion **********************************************

// int binaryToDecimal(int a)
// {

//     int ans = 0;

//     int x = 1;

//     while (a > 0)
//     {
//         int y = a % 10;
//         ans += y * x;
//         x *= 2;
//         a /= 10;
//     }

//     return ans;
// }

// int main()
// {

//     int x;
//     cin >> x;

//     cout << binaryToDecimal(x) << endl;

//     return 0;
// }

// Octal to Decimal Conversion *****************************************************

// int octalToDecimal(int a)
// {
//
//     int ans = 0;

//     int x = 1;

//     while (a > 0)
//     {
//         int y = a % 10;
//         ans += y * x;
//         x *= 8;
//         a /= 10;
//     }

//     return ans;
// }

// int main()
// {

//     int x;
//     cin >> x;

//     cout << octalToDecimal(x) << endl;

//     return 0;
// }

// Hexadecimal To Decimal ********************************************************


int hexadecimalToDecimal(string a)
{

    int ans = 0;

    int x = 1;
    int s=a.size();

  for (int i = s-1; i >= 0; i--)
  {
      if (a[i]>='0'&& a[i]<='9')
      {
          ans+=x*(a[i]-'0');
      }
      else if (a[i]>='A'&& a[i]<='F')
      {
          ans+=x*(a[i]-'A'+10);
      }
      x*=16;
  }
  

    return ans;
}

int main()
{

    string x;
    cin >> x;

    cout << hexadecimalToDecimal(x) << endl;

    return 0;
}




