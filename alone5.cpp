#include<iostream>
#include<iomanip>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    // /*const int/float value never changes**/
    // const int a = 34;
    // /*iomanip is header which provide setw(n)width*/
    // cout<<"my name is kartikay gupta"<<setw(9)<<a<<endl;

    // /* here [] signifies the buffer which store the data */
    // char ch, don[45] = "geeks of keeks";
    
    // cout<<"enter the value of char "<<don;
    int l=9,k=11,ans,m=(10^9+7);
    ans = pow(l,k)/m;
    k--;
    ans =ans* pow(l,k);
    cout<<ans;
    return 0;
}
