#include<iostream>
using namespace std; 

void swap(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
 
int main(){ 

 
//  int a=10;
//  int*ptr=&a;

//  cout<<a<<endl; 
//  cout<<*ptr<<endl; 
//  *ptr=55;
//  cout<<*ptr<<endl; 

// Pointers  Arithmetic Are ==>  ++,--,+,-    ;

// Swaping two number using pointer

int a=10;
int b=20;

swap(&a,&b);

 cout<<"A is "<<a<<" and B is "<<b<<endl; 
 
 
return 0; 
 }