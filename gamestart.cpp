#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    set<int>s1;
    unordered_set<int>s;
    cin>>t;
    while(t--){
        int n,m,count=0;
        cin>>n>>m;
        int arr[n],a[m];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            s.insert(arr[i]);
        }
         for (int i = 0; i < m; i++)
        {
            cin>>a[i];   
        }
         for (int i = 0; i < m; i++)
        {
            
            if (s.find(a[i])!=s.end()&&(a[i]%3==0))
            {
                s1.insert(a[i]);
                count++;
            }
            
        }
        if(count>0){
        for (auto i = s1.begin(); i !=s1.end(); i++)
        {
            cout<<*i<<" ";
        }
        }
        else{
            cout<<"-1";
        }
        cout<<endl;
    }
    return 0;
}