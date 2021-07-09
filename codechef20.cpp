#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s= to_string(n);
        for (int i = 0,j=(s.length()-1); i < s.length(); i++,j--)
        {
            if (s[i]==s[j])
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"LOSES"<<endl;
            }
        }
        
    }
    
    return 0;
}