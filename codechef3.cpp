#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    long long N;
    cin >> T;
    int arr[T];

    for (int i = 0; i < T; i++)
    {
        cin >> N;
        for (int n = 0; N != 0;)
        {
            n = n + N % 10;
            N = N / 10;
            arr[i] = n;
        }
    }
    for (int i = 0; i < T; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}