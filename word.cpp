#include <bits/stdc++.h>
using namespace std;
int main()
{
    int counts = 0, countb = 0;
    string s, scopy;
    cin >> s;
    scopy = s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A' || s[i] == 'B' || s[i] == 'C' || s[i] == 'D' || s[i] == 'E' || s[i] == 'F' || s[i] == 'G' || s[i] == 'H' || s[i] == 'I' || s[i] == 'J' || s[i] == 'K' || s[i] == 'L' || s[i] == 'M' || s[i] == 'N' || s[i] == 'O' || s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S' || s[i] == 'T' || s[i] == 'U' || s[i] == 'V' || s[i] == 'W' || s[i] == 'X' || s[i] == 'Y' || s[i] == 'Z')
        {
            countb++;
        }
        else
        {
            counts++;
        }
    }

    if (counts >= countb)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s << endl;
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s << endl;
    }

    return 0;
}