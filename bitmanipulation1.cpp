#include <bits/stdc++.h>
using namespace std;
//  bool ispower(int n){
//         if (n==0)
//         {
//             /* code */return 0;
//         }
//         else
//         return !(n&(n-1));
//     }


// int numberofoneoccur(int n){
//     int count=0;
//     while (n)
//     {
//         n=n&(n-1);
//         count++;
//     }
//    return count; 
// }

// void subset(int arr[], int n){
//     for (int i = 0; i <(1<<n); i++)
//     {
//         for (int j = 0; j<n; j++)
//         {
//             if (i& (1<<j))
//             {
//                 cout<<arr[j]<<" ";
//             }
            
//         }
//         cout<<endl;
//     }
    
// }

int main(){
    /*check the poe=wer of 2 or not*/
  // cout<<ispower(512);



/* program to count no of one(set bit ) in int =ger/*/
//cout<<numberofoneoccur(19);


/* subset using Bit manipulation*/
// int arr[4]={2,5,7,3};
// subset(arr,4);


/* unique number in an arary
by XOR sum;*/

// int arr[9]={1,3,6,8,9,1,3,6,8};
// int sumxor=0;
// for (int i = 0; i < 9; i++)
// {
//     sumxor=sumxor^arr[i];
// }

// cout<<sumxor<<endl;
    return 0;
 }


