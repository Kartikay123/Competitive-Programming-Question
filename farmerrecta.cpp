#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, b;
        cin >> l >> b;
        int side = __gcd(l, b);
        side = side * side;
        cout << (l * b) / side << endl;
    }
    return 0;
}
