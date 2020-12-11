#include<iostream>
using namespace std;

int main (){ 
 
// if/else condition:

int age = 19;
// use cin for taking input by user
// cin>>age;
 
 if(age>18){
     cout<<"you can give vote."<<endl;
 }
else{
    cout<<"you can not give vote"<<endl;
}

// -----------------------------------------------------

// else if condition:

// int x,y;
// cin>>x>>y;
 
//  if(x==y){
//      cout<<"x is equal to y"<<endl;
//  }
// else if(x>y){
//     cout<<"x is greater than y"<<endl;
// }
// else{
//     cout<<"y is greater than x"<<endl;
// }

    // you can also write this way
    // cout<<y<<" is greater than "<<x<<endl;
// -----------------------------------------------------

// nested if  
// int x,y;
// cin>>x>>y;

//  if(x==y){
//      cout<<"x is equal to y"<<endl;
//  }
//      else {
//          if(x>y){
//              cout<<"x is greater than y"<<endl;
//          }
//          else{
//              cout<<"y is greater than x"<<endl;
//          }
//      }
// ------------------------------------------------------

// Program to check if a number is a even or odd

// int no;
// cin>>no;

// if(no%2==0){
//     cout<<"number is a even\n";
// }
// else {
//     cout<<"number is a odd\n";
//     }

// Program to find maximum,minimum among two number

// int x,y;
// cin>>x>>y;
// int max,min;
// if (x>y){ 
// max=x;
// min=y;
// }
// else{max=y;
// min=x;
// }
//     cout<<"Max="<<max<<endl;
//     cout<<"Min="<<min<<endl;

// ---------------------------------------------------

// Program to find the maximum among three numbers.

// int x,y,z;
// cin>>x>>y>>z;
 
//  int max;

// if(x>y){
//     if(x>z){
//         max=x;
//     }
// }
// else if(y>z){
//     max=y;
// }
// else{
//     max=z;
// }
// cout<<"Max="<<max<<endl;

// ---------------------------------------------------

// Program to check if a tringle is scalene, isosceles or equilateral.

// int x,y,z;
// cin>>x>>y>>z;
 
// if(x==y&&y==z){
//     cout<<"triangle is a equaleteral\n";
// }
// else if(x==y||y==z||z==x){
//     cout<<"triangle is a isosceles\n";
// }else{
//     cout<<"triangle is a scalene\n";
// }

// -----------------------------------------------------

// Program to check if an alphabet is a vowel

// char ch;
// int islowervowel,isuppervowel;
// cout<<"enter your character\n";
// cin>>ch;

// islowervowel = (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
// isuppervowel = (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');

// if(islowervowel||isuppervowel){
//     cout<<"Character is vowel\n";
// }
// else{
//     cout<<"Character is consonent\n";

// }


return 0;
}