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
        arr[i] = sqrt(n);
    }
    for (int i = 0; i < t; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}