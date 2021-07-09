#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];

        }
        sort(arr,arr+n);
        int cmp =arr[0];
        int i=1,count=1;
        for(int k=1;k<n;k++)
        {
            if (cmp!=arr[k])
            {
                count++;
                cmp=arr[i];
                i++;
            }
            else{
                cmp=arr[i];
                i++;
            }
        }
        cout<<count<<endl;
    }
    
    
    return 0;
}
