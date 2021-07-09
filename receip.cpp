#include<bits/stdc++.h> 
#include<algorithm>
using namespace std;  
int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = __gcd(arr[i], result);
 
        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,gcd;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
                cin>>arr[i];
               gcd =findGCD(arr,  n);
        }
       for (int i = 0; i < n; i++)
       {
           arr[i]=arr[i]/gcd;
       }
       for (int i = 0; i < n; i++)
       {
           cout<<arr[i]<<" ";
       }
       cout<<endl;
    }
    return 0;
}