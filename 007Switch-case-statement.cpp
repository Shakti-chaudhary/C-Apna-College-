#include<iostream>
using namespace std;

int main(){

// Break statement:- 

// Write a program to write a simple calculator.

int n1,n2;      
cout<<"Enter two number for operation: ";
// cin>>n1>>n2;
// ---------------------------------------------
char op;
cin>>n1>>op>>n2;
// ---------------------------------------------
// char op;
// cout<<"Enter an operater: ";
// cin>>op;

switch (op)
{
case '+':
         cout<<n1+n2<<endl;
         break;
case '-':
         cout<<n1-n2<<endl;
         break;
case '/':
         cout<<n1/n2<<endl;
         break;
case '*':
         cout<<n1*n2<<endl;
         break;

default:
    cout<<"enter an right operator: - + * / "<<endl;
    break;
}

 return 0;
}