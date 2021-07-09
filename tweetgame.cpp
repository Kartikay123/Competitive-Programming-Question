#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, count = 0;
    cin >> n >> k;

    vector<int> v;
    for (int i = 0; i < k; i++)
    {
        string s;
        cin >> s;
        if (s == "CLICK")
        {
            int x;

            cin >> x;
            auto it = find(v.begin(), v.end(), x);
            if (it == v.end())
            {
                v.push_back(x);
                count++;
            }
            else
            {
                auto it = remove(v.begin(), v.end(), x);
                count--;
            }
        }
        else
        {
            count = 0;
            v.clear();
        }
        cout << count << endl;
    }

    return 0;
}