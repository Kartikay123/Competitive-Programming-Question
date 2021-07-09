#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B, T;
    cin >> T;
    int arr[T];
    for (int i = 0; i < T; i++)
    {
        cin >> A >> B;
        arr[i] = A % B;
    }
    for (int i = 0; i < T; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}