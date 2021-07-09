#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int main()
{
    unsigned int t, n;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        arr[i] = factorial(n);
    }
    cout<<endl;
    for (int i = 0; i < t; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}