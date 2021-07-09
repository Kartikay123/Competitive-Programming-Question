#include <bits/stdc++.h>
using namespace std;
int main()
{

    int ans, count = 0;
    string s;
    cin >> s;
    sort(s.begin(), s.end());

    for (int i = 0; i < s.length(); i++)
    {

       if (s[i]==s[i+1])
       {
           count++;
       }
       
    }
   
    ans = s.length() - count;
    if (ans % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}