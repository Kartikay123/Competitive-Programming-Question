#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, A, B, player, maxi=0;
    int cum2 = 0;
    int cum1 = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A >> B;

        cum1 = cum1 + A;
        cum2 = cum2 + B;

        if (cum1 > cum2)
        {
            int l = cum1 - cum2;

            if (l > maxi)
            {
                maxi = l;
                player = 1;
            }
        }
        else
        {
            int l = cum2 - cum1;
            if (l > maxi)
            {
                maxi = l;
                player = 2;
            }
        }
        
    }
    cout<<player<<" "<<maxi<<endl;

    return 0;
}