// Jumps in loop is use to control the flow of loop. 
// With the help of continue and break.

// Continue in loop. continue will escape that part on a condition.

#include<iostream>
using namespace std;

int main(){
    
    //Program to print all odd numbers till n.

    int n;
    cout<<"Enter the number to get the odd numbers till: ";
    cin>>n;

    for (int i=1;i<=n;i++){
        
        if(i%2==0){
            continue;
        }
     cout<<i<<" ";

    } 
    
// ------------------------------------------------------

// Write a Program to check if a given number is prime or not.

// int n;
// cout<<"Enter the number to check prime or odd: ";
// cin>>n;

// int i;

//    for (i=2;i<n;i++){
 
//         if(n%i==0){

//             break;
//             cout<<"non-prime ";
//             }
//      }
// 
    //  if(i==n){
   
    //   cout<<"prime number "<<endl;

    // }

    // --------------------------------------------------

//  Write a program to print all prime number in a given range.

// int x,y;
// cout<<"Enter x and y: ";
// cin>>x>>y;

// int a;

// int i;

// for(a=x;a<y;a++){

//  for(i=2;i<a;i++){
    
//     if(a%i==0){
//         break;
//     }
//  }
//     if(a==i){
//     cout<<a<<" ";
//     }
// }

// ----------------------------------------------------

  cout<<" "<<endl;
  return 0;
  
}


