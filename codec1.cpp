#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int t, n;
    cin >> t;
    int yes = 0;
    int no = 0;
    int arr[t];
    for (int i = 1; i <= t; i++)
    {

        cin >> arr[i];

        if (arr[i] % 2 == 0)
        {
            yes++;
        }
        else
        {
            no++;
        }
    }
    if (yes > no)
    {
        cout << "READY FOR BATTLE" << endl;
    }
    else
    {
        cout << "NOT READY" << endl;
    }

    return 0;
}
