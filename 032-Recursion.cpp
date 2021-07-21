#include <iostream>
using namespace std;

// Sum till n Using recursion =============================================

// int Sum(int n)
// {
//     if (n==0)
//     {
//     return 0;
//     }
//     int prevSum=Sum(n - 1);
//     return n + prevSum;
// }

// int main()
// {

//     int n;
//     cin >> n;
//     cout << Sum(n) << endl;

//     return 0;
// }

// N raised to power of p =================================================

// int power(int n, int p)
// {

//     if (p == 0)
//     {
//         return 1;
//     }

//     return n * power(n, p - 1);
// }

// int main()
// {

//     int n, p;
//     cin >> n >> p;

//     cout << power(n, p) << endl;

//     return 0;
// }

// Factorial till n =============================================================

// int factorial(int n){
//     if(n==0){
//         return 1;
//     }
//     return n*factorial(n-1);
// }

// int main()
// {
//     int n;
//     cin>>n;

//  cout<<factorial(n)<<endl;

// return 0;
// }

// Fibonacci number ==============================================================

int fib(int n)
{

    if (n==0||n==1)
    {
        return n;
    }

    return fib(n - 1) + fib(n - 2);
}

int main()
{

    int n;
    cin >> n;

cout<<fib(n)<<endl; 
    return 0;
}
