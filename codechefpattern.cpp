//<----ALEX RAVE---->   
//<----   EVIL     ----> 
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
#include <vector>
#define ll long long
#define test int testcases; cin>>testcases; while(testcases--)
#define modulo 1000000007
using namespace std;


int main() {

    test{
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<j;
                int k=j;
                while(k-- ){if(j!=i){cout<<"*";}}
            }
            cout<<endl;
        }
    }


    return 0;
}