#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, count = 0;
    cin >> t;
    while (t > 0)
    {
        int check = t % 10;
        if (check == 4 || check == 7)
        {
            count++;
            t = t / 10;
        }
        else
        {
            t = t / 10;
        }
    }
    if (count == 4 || count == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
