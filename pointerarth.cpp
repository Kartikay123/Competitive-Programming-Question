#include"Kartikay.h"
int main(){
    int arr[4][2]= { {111,221},{133,164},{51,61},{16,1118}};
    /* arr[n][k] then n is number of set and k means total number of element in set
    arr[n][k]= arr[n]  + k 
    *(*(arr+n)+k)) will always give the arr[n][k] */
    
    // cout<<(*(arr[3]+0)+2)<<endl;  /*simple arithmetic takes place after brackey*/
    // cout<<(*(arr[1]+1)+1)<<endl;  /*simple arithmetic takes place after brackey*/
    // cout<<*((*(arr+1)+1))<<endl;  /*simple arithmetic takes place after brackey*/
    // cout<<(*(arr[2]+1)+5)<<endl;  /*simple arithmetic takes place after brackey*/
    // cout<<*((*(arr+1)+1));
   
    // cout<<(arr[0] + i)<<endl;
    // cout<<*(arr[0] + i)<<endl;
    // cout<<(arr [0]+ 1)<<endl;
    // cout<<*(arr[0] + 1)<<endl;
    // cout<<*(arr[0] + 1)<<endl;
    // cout<<*(arr[1] + 1)<<endl;
    // cout<<(arr[1] + 1)<<endl;
    // cout<<(*(arr[2] + 1)+2)<<endl;  /*simple arithmetic takes place after brackey*/
    // cout<<((arr[2] + 1)+2)<<endl;  /*simple arithmetic takes place after brackey*/
    int i=2;
   int (*p)[2];     /*this is the way of declare ing piomter in 2D array like (*ptr)[k]*/
        p = &arr[i];
        cout<<*p<<endl;
    int *po;
    po =(int *)p;
    cout<<*po<<endl;
    cout<<*(po+1)<<endl;
    cout<<*(po+2)<<endl;
    cout<<*(po++)<<endl;
   
    
    return 0;
}