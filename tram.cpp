#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    int a, b, sum = 0, mx = 0;
    cin >> n;
    while (n--)
    {

        cin >> a >> b;
        sum = sum + (b - a);
        mx = max(sum, mx);
    }
    cout << mx << endl;

    return 0;
}