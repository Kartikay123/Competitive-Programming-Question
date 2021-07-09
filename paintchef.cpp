#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, red = 0, green = 0, blue = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            switch (s[i])
            {
            case 'B':
                blue++;
                break;
            case 'G':
                green++;
                break;
            case 'R':
                red++;
                break;
            default:
                break;
            }
        }
       
        int maxi = max(red, max(blue, green));
        cout << (n - maxi) << endl;
    }

    return 0;
}