#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        if (s.length()>10)
        {
        cout<<s.at(0)<<(s.length()-2)<<s.at(s.length()-1)<<endl;;
        }
        else{
            cout<<s<<endl;
        }
        
    }
    
   return 0;
}
