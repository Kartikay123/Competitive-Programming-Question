#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,h,count=0;
    cin>>n>>h;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (h>=arr[i])
        {
            count++;
        }
        else{
            count=count+2;
        }
        
    }
    cout<<count<<endl;
    
    
    
    return 0;
}