#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    unsigned int withdrawl;
    float curramount;
    cin >> withdrawl >> curramount;

    if (withdrawl % 5 == 0&& curramount>=(0.50+withdrawl))
    {
        curramount = (curramount - (withdrawl + 0.50));

        cout.precision(2);
        cout << fixed << curramount << endl;
    }
    else
    {
        cout.precision(2);
        cout << fixed << curramount << endl;
    }
    return 0;
}
