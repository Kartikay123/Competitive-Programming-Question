#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int count = 0;
        unordered_map<char, int> mp;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            /* code */ mp[s[i]]++;
        }
        for (auto x : mp)
        {
            if (x.second > count)
            {
                count = x.second;
            }
        }

        if (s.length() - count == count)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}