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
        string s= to_string(n);
        for (int i = 0; i < s.size(); i++)
        {
            /* code */if (s[i]=='0')
            {
                s[i]='1';
            }
            
        }
        
        
    }
    
    return 0;
}
