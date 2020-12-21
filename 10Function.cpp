#include <iostream>
#include <math.h>
using namespace std;

// Write a program to add 2 numbers using function:-

// int sum(int num1, int num2)
// {

//     int add = num1 + num2;

//     return add;
// }

// int main()
// {

//     int a, b;
//     cout << "Enter the two number for sum: ";
//     cin >> a >> b;

//     cout << sum(a, b) << endl;

// Output:-

// Enter the two number for sum: 12 23
// 35

// ------------------------------------------------------

// Write a program to print a given number using function:-

// int view(int num2){
//     cout<<num2<<endl;
//     return 0;
// }

// int main(){

//     int num;
//     cout<<"Enter a number to print: ";
//     cin>>num;

// view(num);

// Output:-

// Enter a number to print: 123456
// 123456

// ------------------------------------------------------

// Write a program to print numbers between 2 given numbers:-

// bool print(int c){
//     for (int i = 2; i < sqrt(c); i++)
//     {
//      if(c%i==0){
//         return false;
//      }
//     }

//        return true;
// }

// int main(){

// int a,b;
// cout<<"Enter 2 number for find prime number between them: ";
// cin>>a>>b;

// for(int i=a; i<=b;i++){
// if(print(i)){
//     cout<<i<<" ";
// }
// }
// cout<<endl;

// Output:-

// Enter 2 number for find prime number between them: 12 23
// 13 17 19 23

// ------------------------------------------------------

// Write a program to print Fibonacci sequence:-

// void fab(int num)
// {
//     int t1 = 0;
//     int t2 = 1;
//     int t3;

//     for (int i = 1; i <= num; i++)
//     {

//         cout << t1 << " ";
//         t3 = t1 + t2;
//         t1 = t2;
//         t2 = t3;
//     }
//     cout << endl;
// }

// int main()
// {

//     int n;
//     cout << "Enter a number to find a fibonacci sequence: ";
//     cin >> n;

//     fab(n);

// Output:-

// Enter a number to find a fibonacci sequence: 5
// 0 1 1 2 3

// -----------------------------------------------------

// Write a program to find the factorial of a given number:-

// int fac(int num){

//    int c=1;

//     for(int i=2;i<=num;i++){
//      c=c*i;
//     }

// return c;

// }

// int main() {

// int n;
// cout<<"Enter the number to find factorial: ";
// cin>>n;

// int ans=fac(n);

// cout<<ans<<endl;

// Output:-

// Enter the number to find factorial: 5
// 120

// ------------------------------------------------------

// Write a program to find the binary coefficient (nCr):-

// int fac(int num){

//    int c=1;

//     for(int i=2;i<=num;i++){
//      c=c*i;
//     }

// return c;
// }

// int main(){

// int n,r;
// cout<<"Enter the number to find (nCr): ";
// cin>>n,r;

// int ans =  fac(n)/(fac(r)*fac(n-r));

// cout<<ans<<endl;

// Output:-

// Error;

// -----------------------------------------------------

// Write a program to print the Pascal triangle:-

//  int fac(int num){

//    int c=1;

//     for(int i=2;i<=num;i++){
//      c=c*i;
//     }

// return c;
// }

// int main(){

// int n;
// cout<<"Enter the number for pascal triangle: ";
// cin>>n;

// for(int i=0;i< n;i++){

// for(int j = 0; j <= i; j++)
// {

// cout<<fac(i)/(fac(j)*fac(i-j))<<" ";

// }

// cout<<endl;

// }

// // Output:-

// // Enter the number for pascal triangle: 4
// // 1
// // 1 1
// // 1 2 1
// // 1 3 3 1

// -----------------------------------------------------

// Write a program to find out whether a given number is even or odd using function:-

// bool check(int num)
// {

//     if (num % 2 == 0)
//     {
//         return false;
//     }
//     return true;
// }

// int main()
// {

//     int n;
//     cout << "Enter the number to check odd or even: ";
//     cin >> n;

//     if (check(n))
//     {

//         cout << "odd number" << endl;
//     }
//     else
//     {
//         cout << "even number" << endl;
//     }

// Output:-

// Enter the number to check odd or even: 3
// odd number

// -----------------------------------------------------

// Write a program with two function to print the  maximum and the minimum number respectively among three number entered by user.

// int maxim(int x,int y,int z){

//     if(x>y){
//         if(x>z){
//             return x;
//         }
//     }
//     else if (y>z)
//     {
//         return y;
//     }

// return z;
// }

// int mine(int x,int y,int z){

//     if(x<y){
//         if(x<z){
//             return x;
//         }
//     }
//     else if (y<z)
//     {
//         return y;
//     }
//     return z;
// }

// int main(){

// // you can't use max and min in var name;

//     int x,y,z;
//     cout<<"Enter three number: ";
//     cin>>x,y,z;

//  if(x>y){
//         if(x>z){
//             cout<<x<<endl;
//         }
//     }
//     else if (y>z)
//     {
//          cout<<y<<endl;
//     }else{
//       cout<<z<<endl;
//     }

//     int max2 = maxim(x,y,z);

//     int min2 = mine(x,y,z);

//     cout<<"Maximum number is : "<<max2<<endl;
//     cout<<"Minemum number is : "<<min2<<endl;

// Output:-  

// Error:-  

// Enter three number: 2 4 7
// Maximum number is : 22099
// Minemum number is : -406888160

// ------------------------------------------------------

// Write a program to find out whether a given character is an alphabet  using function :- 

// bool check(char ch1){
// if(ch1>=65&&ch1<=90){
//     return true;
// }
// if(ch1>=97&&ch1<=122){
//     return true;
// }

// return false;
// }

// int main(){

//     char ch;
//     cout<<"Enter character: ";
//     cin>>ch;


// if(check(ch)){
//     cout<<"Alphabet Character "<<endl;
// }else
// {
//     cout<<"Non-Alphabet Character "<<endl;
// }

// Output:-  

// Enter character: A
// Alphabet Character 

// ------------------------------------------------------


// Write a program with a function to swap the value of 2 given integer variables:-   

// void swap(int x, int y){
// int z;
// z=y;
// y=x;
// x=z;
// cout<<x<<" "<<y<<endl;
// }

// int main(){

// int num1,num2;
// cout<<"Enter two number for swaping: ";
// cin>>num1,num2;
// int num3;

// swap(num1,num2);

// Output:-  

// Error:-  

// Enter two number for swaping: 4 8
// 32764 4

// ------------------------------------------------------

// Write a program using function to check if a person is eligeble for voting or not by comparing his age with legal voting age i.e. 18.:-  

// bool check(int age){
// if(age>18){
//     return true;
// }

// return false;
// }

// int main(){

// int age;
// cout<<"Enter your age: ";
// cin>>age;

// if(check(age)){
//     cout<<"You can vote:"<<endl;

// }
// else
// {
//     cout<<"You can't vote: "<<endl;
// }

// Output:- 

// Enter your age: 12
// You can't vote: 

// ------------------------------------------------------


return 0;
}