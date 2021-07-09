#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int pet, vy, ton;
    int answer = 0;
    for (int i = n - 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> pet >> vy >> ton;
            if (pet == 1 && vy == 1 && ton == 1 || pet == 1 && vy == 1 && ton == 0 || pet == 0 && vy == 1 && ton == 1 || pet == 1 && vy == 0 && ton == 1)
            {
                answer++;
            }
            else
            {
                answer = answer;
            }
        }
    }
    cout << answer << endl;

    return 0;
}