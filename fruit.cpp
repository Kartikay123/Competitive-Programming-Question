#include <bits/stdc++.h>
using namespace std;
int main()
{
    {
        // your code goes here
        int t, n, m, c, k;
        cin >> t;
        while (t--)
        {
            cin >> n >> m >> k;
            if (n == m)
                c = 0;
            else if (n > m)
            {
                c = n - m;
                if (k >= c)
                    c = 0;
                else
                    c = c - k;
            }
            else
            {
                c = m - n;
                if (k >= c)
                    c = 0;
                else
                    c = c - k;
            }
            cout << c << "\n";
        }
        return 0;
    }
