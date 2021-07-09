#include <bits/stdc++.h>
using namespace std;
int comparision(string s, string s1){
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < s1.length(); i++)
        {
            if(s[i]==s[j])
        }
        
    }
    
}
int main()
{
    int t;

    cin >> t;
    while (t--)
    {
        string s, s1;
        cin >> s;
        //  sort(s.begin(),s.end());
        if (s.length() % 2 == 0)
        {
            s1 = s.substr(s.length() / 2, s.length() - 1);
           
            s.erase(s.length() / 2, s.length() - 1);
           
             cout<<comparision(s,s1)<<endl;

           
        }
        else
        {
            s.erase((int)s.length() / 2, ((int)s.length() / 2) - 1);

            s1 = s.substr(s.length() / 2, s.length() - 1);
             
            s.erase(s.length() / 2, s.length() - 1);
            
             cout<<comparision(s,s1)<<endl;

           
        }
    }

    return 0;
}