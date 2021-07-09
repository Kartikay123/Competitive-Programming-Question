#include <bits/stdc++.h>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    for (int i = 0; i < s.length(); i++)
        if (s[i] != 'a' && s[i] != 'o' && s[i] != 'y' && s[i] != 'e' && s[i] != 'u' && s[i] != 'i')
        {
            cout << "." << s[i];
        }

    return 0;
}