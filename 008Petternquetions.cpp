
// Pattern problems:- -----------------------------------

// * I am using one space more in patterns so they look better:-  

#include<iostream>
using namespace std;


int main(){


// row = user enter number:- ----------------------------



// Print a solid rectangle:-      (row=5,columns=4),

// int rows; 
// cout<<"Enter numbers of rows: ";
// cin>>rows;

// int columns;
// cout<<"Enter nunbers of columns: ";
// cin>>columns;


// for (int i=1;i<=rows;i++){

//    for (int j=1;j<=columns;j++){

//       cout<<" "<<"*";

//    }
//    cout<<" "<<endl;
// }

// Output like:- 
// ****
// ****
// ****
// ****
// ****

// ----------------------------------------------------

// Print a hollow rectangle:-  (row=5,columns=4),

// int rows;
// cout<<"Enter number for rows: ";
// cin>>rows;

// int columns;
// cout<<"Enter number for columns: ";
// cin>>columns;

// for (int i=1;i<=rows;i++){
     
//    for(int j=1;j<=columns;j++){

//       if(i==1 || i==rows || j==1 || j==columns){

//          cout<<"*";

//        } else
//        {
//           cout<<" ";
//        }
//     }

//     cout<<endl;

//  }

// Output like:-

// ****
// *  *
// *  *
// *  *
// ****

// -----------------------------------------------------

// Print Half Pyramid Pattern using Stars:-  (row=n=8),

// int row;
// cout<<"Enter the number of rows: ";
// cin>>row;

// for(int i=1;i<=row;i++){
 
//     for(int j=1;j<=i ;j++){

//      cout<<" "<<"*";

//    }

//    cout<<endl;

// }

// Output like:-

//  *
//  * *
//  * * *
//  * * * *
//  * * * * *
//  * * * * * *
//  * * * * * * *
//  * * * * * * * *

// ----------------------------------------------------

// Print Inverted Half Pyramid using numbers:- (row=n=5),

// int row;
// cout<<"Enter the numbers of rows: ";
// cin>>row;

// for(int i=row;i>=1;i--){
   
//     for(int j=i;j>=1;j--){

//        cout<<" *";
      
//     }

//   cout<<endl;

// }

// Output:- 

//  * * * * *
//  * * * *
//  * * *
//  * *
//  *

// -----------------------------------------------------

// Print half pyramid using numbers:-       (row=n=5),

// int row;
// cout<<"Enter the numbers of row: ";
// cin>>row;

// for(int i=1;i<=row;i++){
  
//     for(int j=1;j<=i;j++){

//        cout<<" "<<j;

//     }

//   cout<<endl;
  
// }
    
// Output:-

//  1
//  1 2
//  1 2 3
//  1 2 3 4
//  1 2 3 4 5

// -----------------------------------------------------

// Print inverted half pyramid using numbers-2:-   (row=n=5),

// int row;
// cout<<"Enter the numbers of rows:- ";
// cin>>row;

// for(int i=1;i<=row;i++){

//     for(int j=1;j<=row-i+1;j++){

//         cout<<i<<" ";

//     }

//     cout<<endl;

// }

// Output:- 

//  1 1 1 1 1
//  2 2 2 2
//  3 3 3
//  4 4
//  5

// ------------------------------------------------------

// Print half pyramid using 1 or 0 :-       (row=n=5),

// int i,j,r;
// cout<<"Enter the numbers of rows:- ";
// cin>>r;

// for(i=1;i<=r;i++){

//     for(j=1;j<=i;j++){

//         if((i+j)%2==0){

//             cout<<" 1";

//         }else{

//             cout<<" 0";

//         }

//     }
//     cout<<endl;
// }

// Output:-

//  1
//  0 1
//  1 0 1
//  0 1 0 1
//  1 0 1 0 1

// -----------------------------------------------------

// Print a half pyramid after 180* rotation:- (row=n=8),

// int row;
// cout<<"Enter the numbers of rows:- ";
// cin>>row;

// for(int i=1;i<=row;i++){

//     for(int j=1;j<=row;j++){

//         if(j<=row-i){

//             cout<<"  ";

//         }else{

//             cout<<"* ";

//         }
//     }
//     cout<<endl;
// }

// Output:-

//               * 
//             * * 
//           * * * 
//         * * * * 
//       * * * * * 
//     * * * * * * 
//   * * * * * * * 
// * * * * * * * * 

// -----------------------------------------------------

// Print a half pyramid using numbers:-    (row=n=6),

// int row;
// cout<<"Enter the number of rows:- ";
// cin>>row;

// for(int i=1;i<=row;i++){

//     for(int j=1;j<=i;j++){

//         cout<<i<<" ";

//     }

//     cout<<endl;

// }

// Output:-

// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 
// 6 6 6 6 6 6 

// -----------------------------------------------------

// Print a floyd's triangle:-           (row=n=5),

// int row;
// cout<<"Enter the row numbers:- ";
// cin>>row;

// int var3=1;

// for(int i=1;i<=row;i++){

//     for(int j=1;j<=i;j++){

//         cout<<" "<<var3;

//         var3++;   

//     }

//     cout<<endl;

// }

// Output:-

//  1
//  2 3
//  4 5 6
//  7 8 9 10
//  11 12 13 14 15

// -----------------------------------------------------

// Pyramid pattern for numbers:-           (row=n=5),

// int row;
// cout<<"Enter the numbers of rows:- ";
// cin>>row;

// for(int i=1;i<=row;i++){

//     for(int j=1;j<=row;j++){

//         if(j<=row-i){

//             cout<<" ";

//         }else{

//             cout<<i<<" ";

//         }
//     }

//     cout<<endl;

// }

// Output:-

//     1 
//    2 2 
//   3 3 3 
//  4 4 4 4 
// 5 5 5 5 5 


// ------------------------------------------------------

// Print a sold butterfly pattern:-        (row=n=6),

// int row;
// cout<<"Enter the row numbers: ";
// cin>>row;

// int i=1;
// int j=1;

// // /We divide this pattern into two parts: upper or lower:- 

// // Upper part:- --------------------------------

// for(i=1;i<=row;i++){

//           for(j=1;j<=i;j++){

//             cout<<"* ";

//           }
//           for(j=1;j<=row*2-(2*i);j++){


//             cout<<"  ";

//           }
//           for(j=1;j<=i;j++){

//             cout<<"* ";

//           }

//           cout<<endl;

// }

// // Lower part:- -------------------------------

// for(i=row;i>=1;i--){

//           for(j=1;j<=i;j++){

//             cout<<"* ";

//           }
//           for(j=1;j<=row*2-(2*i);j++){


//             cout<<"  ";

//           }
//           for(j=1;j<=i;j++){

//             cout<<"* ";

//           }

//           cout<<endl;

// }

// Output:- 

// *                     * 
// * *                 * * 
// * * *             * * * 
// * * * *         * * * * 
// * * * * *     * * * * * 
// * * * * * * * * * * * * 
// * * * * * * * * * * * * 
// * * * * *     * * * * * 
// * * * *         * * * * 
// * * *             * * * 
// * *                 * * 
// *                     *  

// ------------------------------------------------------

// Print a Zig-zag pattern:-              (row=n=9),

// int row;
// cout<<"Enter the number of row: ";
// cin>>row;

// int i;

// int j;

// for(i=1;i<=3;i++){

//    for(j=1;j<=row;j++){

//        if((i+j)%4==0||(i==2)&&j%4==0){

//            cout<<"*";

//        }else{

//            cout<<" ";

//        }

//    }

//    cout<<endl;

// }

// Output:- 

//   *   *  
//  * * * * 
// *   *   *

// ------------------------------------------------------






return 0;
}