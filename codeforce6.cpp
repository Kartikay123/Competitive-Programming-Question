#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int ans;
    if (m % 2 == 0)
    {
        ans = m * n / 2;
    }
    else
    {
        int k = m / 2;
        int l = k * n;
        int j = n / 2;
        ans = l + j;
    }
    cout << ans << endl;
    return 0;
}