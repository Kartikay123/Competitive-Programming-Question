#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int x = 0;
    int y = 0;
    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == '1')
        {
            x++;
            y = 0;
            if (x == 7)
                break;
        }
        else
        {
            x = 0;
            y++;
            if (y == 7)
                break;
        }
    }
    if (x >= 7 || y >= 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}