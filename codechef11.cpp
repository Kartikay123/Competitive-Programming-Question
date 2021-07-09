#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        while (n > 0)
        {
            if (n % 10 == 4)
            {
                sum++;
                n = n / 10;
            }
            else
            {
                n = n / 10;
            }
        }

        cout << sum << endl;
    }

    return 0;
}