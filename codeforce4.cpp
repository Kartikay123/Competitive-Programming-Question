#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int  t;
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        total = (t % k == 0) ? (++total) : total;
    }
    cout << total << endl;
    return 0;
}