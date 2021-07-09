#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;
    vector<int> v;
    for (int i = 0; i < s.size(); i += 2)
    {
        v.push_back(s[i]);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        s[2 * i] = v[i];
    }
    cout << s << "\n";

    return 0;
}