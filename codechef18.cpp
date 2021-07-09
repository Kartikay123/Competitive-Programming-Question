#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int T;
    cin >> T;
    ll A, B;

    while (T--)
    {
        cin >> A >> B;
        if (A < B)
        {
            cout << "<" << endl;
        }
        else if (A > B)
        {
            cout << ">" << endl;
        }
        else
        {
            cout << "=" << endl;
        }
    }

    return 0;
}