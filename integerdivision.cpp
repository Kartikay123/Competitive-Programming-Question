#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int a,b,n;
        cin>>a>>b>>n;
        if (n%2)
        {
            cout<<max(2*a,b)/min(2*a,b);
        }
        else
         cout<<max(2*a,b)/min(2*a,b);
    }
    
    return 0;
}
