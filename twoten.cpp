#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
    int t,count=0;
    cin>>t;
    while (t--)
    {
        long long int n;
        cin>>n;
        if (n%10==0)
        {
            cout<<count<<endl;
        }
        else{
            n=n*2;
            count++;
        }

    }
    
    return 0;
}