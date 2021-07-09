#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, N;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> N;
        int rem = 0;
        int num = 0;
        while (N > 0)
        {

            rem = N % 10;
            num = num * 10 + rem;
            N = N / 10;
        }
        cout << num << endl;
    }

    return 0;
}