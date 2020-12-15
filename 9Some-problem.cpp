// Some problems questions:- 

#include <iostream>
#include <math.h>
using namespace std;

int main (){

// Checking if a number is prime:-  

int n;
cout <<"Enter the number: ";
cin>>n;
 
bool tf=true;

for (int i = 2; i<sqrt(n); i++)
{
    if (n%i==0)
    {
        tf=false;
       break;
    }

}
if (tf)
{
    cout<<"prime"<<endl;
}else{
    cout<<"non-prime"<<endl;
}

// Output:-  

// Enter the number: 8
// non-prime

// ------------------------------------------------------

// Reverse a given number:- 

// int n;
// cout<<"Enter the number for reverse: ";
// cin>>n;

// int reverse=0;

// while(n>0){

//     int lastdigit=n%10;
//     reverse = reverse*10 + lastdigit;  
//     n = n/10;
// }

// cout<<reverse<<endl;

// Output:-

// Enter the number for reverse: 1234567
// 7654321

// ------------------------------------------------------

// Check a given number is Armstrong number or not:-

// int n;
// cout<<"Enter the number: ";
// cin>>n;
 
// int sum=0;

// int orignaln=n;

//  while (n>0)
//  {
//     int lastdigit = n%10;
//     sum+=pow(lastdigit,3);
//     n/=10;

//  }
//  if (sum==orignaln)
//  {
//     cout<<"Armstrong number "<<endl;
//  }
//  else
//  {
//      cout<<"Not Armstrong number "<<endl;
//  }
 
//  Output:- 

// Enter the number: 153
// Armstrong number 
 
//  -----------------------------------------------------

// Calculating the factorial of a number n:-

// int n;
// cout<<"Enter the number: ";
// cin>>n;

// int factorail=1;

// for (int i = 1; i <= n; i++)
// {
//     factorail*=i;
// }
// cout<<factorail<<endl;

// // Output:- 

// Enter the number: 5
// 120

// ------------------------------------------------------

// First n terms of fibonacci series with starting terms as 0,1 :-

// int n;
// cout<<"Enter the number: ";
// cin>>n;

// int t1=0;
// int t2=1;
// int t3;
 
// for (int i = 0; i <= n; i++)
// {
//     cout<<t1<<" ";
//     t3=t1+t2;
//     t1=t2;
//     t2=t3;
// }
// cout<<endl;

// Output:-

// Enter the number: 5
// 0 1 1 2 3 5 

// ------------------------------------------------------



    return 0;
}

