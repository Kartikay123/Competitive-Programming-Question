#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    
    
        int step = 0;
        for (int i = 5; i > 0; i--)
        {
            step += x / i;
            x = x % i;
        }
        cout << step << endl;
    

    return 0;
}
