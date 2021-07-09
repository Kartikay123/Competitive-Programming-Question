#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        int count = 0;
        cin >> n;
        string s = to_string(n);
        for (int i = 0; i < s.length(); i++)
        {
            /* code */ if (s[i] == '3' || s[i] == '7')
            {
                count++;
            }
        }
        if (count == (s.length()))
        {
            /* code */ cout << "LUCKY" << endl;
        }
        else
        {
            cout << "BETTER LUCK NEXT TIME" << endl;
        }
    }

    return 0;
}