#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, count = 0;
    cin >> t;
    while (t--)
    {
        int r, pos1[3], pos2[3];
        cin >> r;

        cin >> pos1[0] >> pos2[0];
        cin >> pos1[1] >> pos2[1];
        cin >> pos1[2] >> pos2[2];
        if ((pos1[0] + pos2[0]) <= r)
        {
            count++;
        }
        if ((pos1[1] + pos2[1]) <= r)
        {
            count++;
        }
        if ((pos1[2] + pos2[2]) <= r)
        {
            count++;
        }

        if (count == 3)
        {
            cout << "yes" << endl;
            count = 0;
        }
        else
        {
            cout << "no" << endl;
            count = 0;
        }
    }

    return 0;
}