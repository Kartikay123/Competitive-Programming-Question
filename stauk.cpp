#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);

        if (result == 1)
        {
            return 1;
        }
    }
    return result;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        int ans = findGCD(A, N);
        int maxi = 0, k = 0;
        for (int i = 0; i < N; i++)
        {
            if (maxi < A[i])
            {
                maxi = A[i];
                k = i;
            }
        }
        A[k] = ans;
        int sum = 0;
        for (int i = 0; i < N; i++)
        {
            sum = sum + (A[i] / (ans));
        }
        cout << sum << endl;
    }
    return 0;
}