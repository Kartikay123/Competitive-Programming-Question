#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    int arr[t];

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int first;
        int last = n % 10;
        while (n > 0)
        {
            first = n;
            n = n / 10;
        }
        cout << (first + last) << endl;
    }

    return 0;
}