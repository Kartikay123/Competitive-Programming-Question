#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int i = 1, count = 0,sum=0;
        while (sum+i<=n)
        {
           sum=sum+i;
           count++;
           i++; 
           
        }
         cout << count << endl;
    }
    
    return 0;
}