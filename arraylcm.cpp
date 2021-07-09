#include <bits/stdc++.h>
using namespace std;

long long int findLCM(long long int arr[], long long int n)
{
    long long int i,lcm = arr[0];
    for (i = 1; i < n; i++)
    {
        lcm = (lcm * arr[i]) / __gcd(arr[i], lcm);
    }
    return lcm;
}

int main() 
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);                    
    cout.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,m=0,j,k,i,lcm;
        cin>>n>>k;
        
        long long int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        
        
        lcm=findLCM(a, n);
        cout<<k/lcm<<endl;
    }
    
}
      /* the number of element divisible by array eleemnt is by finding the lCM*/