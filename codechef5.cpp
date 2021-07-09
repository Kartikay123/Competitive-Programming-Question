#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int n;
     int A,B,C;
    cin>>n;
    int ans[n];
    for (int i = 0; i < n; i++)
    {
        cin>>A>>B>>C;
       int maxi= max(A,max(B,C));
       int mini= min(A,min(B,C));
       int sum = A+B+C;
       cout<<sum-(maxi+mini)<<endl;
    }
    return 0;
    
}