#include<iostream>
using namespace std;

int main (){
    
// // for loop  

for (int i=1; i<=5; i++)
{
    cout<<i<<endl;
}

//------------------------------------------------------

// while loop 

// int i=1;

// while (i<=5)
// {
//     cout<<i<<endl;
//     i++;
// }

// -----------------------------------------------------

// do while loop. one time loop work definatly.

// int i=1;

// do
// {
//     cout<<i<<endl;
//     i++;

// } while(i<=5);

// Example of do while loop. --------------------||.

//   int n;
//   cout<<"enter number below 5: "<<endl;
//   cin>>n;

//   do{
//       cout<<n<<endl;

//       cout<<"enter number again below 5"<<endl;
//       cin>>n;
// 
//      }while(n<=5);


// -----------------------------------------------------

// Program to find sum of natural numbers till n. input taken from user.

// int n;
// cin>>n;

// int sum=0;

// for (int i=1; i<=n; i++)
// {
//     sum+=i;
// }

// cout<<sum<<endl;

// ------------------------------------------------------

// Program to display Multiplecation upto n number.

// int n;
// cout << "Enter a positive integer: ";
// cin >> n;

// for (int i=1;i<=n; ++i){

//     cout<<" "<<endl;
//     cout<<"Table of "<<i<<endl;
//     cout<<" "<<endl;

//     // using nested for loop. 

//     int b=i;
//     for (int i = 1; i<=10; i++){
//     int tablevalues=b*i;
//     cout<<b<< " * " << i << " = " <<tablevalues<< endl;

//     }

//     }

// -----------------------------------------------------

// Program to add only positive numbers gevin by user. for satisfing the while loop conditions.
// --if we enter negative number while loop terminate.

// int n;
// cout << "Enter the positive numbers for sum : " <<endl;
// cin>>n;

// int sum=0;

// while (n>=0)
// { 
//     sum+=n;
//     // cout<<sum<<endl;
// cout<<"the sum is :"<<sum<<endl;
//     cout<< "\nEnter another positive number for sum "<<endl;
//     cin>>n;  
// }
  

return 0;
}
