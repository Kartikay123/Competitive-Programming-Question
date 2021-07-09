#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,l=0,b=0;
        cin >> n;
        int arr[n], a[n] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n, greater<int>());
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                l=max(l,arr[i]);
                a[i] = arr[i];
            }
        }
        sort(a, a + n, greater<int>());
        for (int i = 0; i < n; i++)
        {
            if (l!=a[i])
            {
                b=a[i];
                break;
            }
            
        }
        

        if (l*b)
        {
            cout << l*b << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}