#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, sum = 0;
        cin >> n;

        sum = sum + n / 100;
        n = n % 100;
        sum = sum + n / 50;
        n = n % 50;
        sum = sum + n / 10;
        n = n % 10;
        sum = sum + n / 5;
        n = n % 5;
        sum = sum + n / 2;
        n = n % 2;
        sum = sum + n;

        cout << (sum) << endl;
    }

    return 0;
}