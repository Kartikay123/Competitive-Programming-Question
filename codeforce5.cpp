#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    int res = 0;
    cin >> n >> k;
    int a[100];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] >= a[k] && a[i] > 0)
        {
            res++;
        }
    }

    cout << res << endl;

    return 0;
}