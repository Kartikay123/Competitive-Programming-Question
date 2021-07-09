#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
         int n;
         long long int sum=0,maxi=LLONG_MIN;
        
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            sum=sum+arr[i];
            if (sum>maxi)
            {
                maxi=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
       if(maxi>0) cout << "Can study - " << maxi << endl;
		else cout << "Cannot study - " << maxi<< endl;
    }
    
    return 0;
}
