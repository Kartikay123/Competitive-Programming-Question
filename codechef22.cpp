#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        double  ans;
        if (a > 1000)
        {
            ans = (a * b) - (a * b / 10);
            cout.precision(6);
            cout << fixed << ans << endl;
        }
        else
        {
           ans =a*b;
            cout.precision(6);
            cout << fixed << ans << endl;
        }
    }
        return 0;
    }