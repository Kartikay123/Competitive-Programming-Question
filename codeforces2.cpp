#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long  n, m, a;
    cin >> n >> m >> a;
    long long c, k;
    if (m % a == 0)
    {
        c = m / a;
    }
    else
    {
        c = m / a + 1;
    }
    if (n % a == 0)
    {
        k = n / a;
    }
    else
    {
        k = n / a + 1;
    }
    cout << (c * k) << endl;

    return 0;
}