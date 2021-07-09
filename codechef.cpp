#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int total = 0;
        for (int i = 11; i >=0; i--)
        {
            total+= n / pow(2, i);
            n = n % (int) pow(2, i);
        }
        cout << total << endl;
    }

    return 0;
}