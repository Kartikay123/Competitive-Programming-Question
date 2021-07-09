#include <iostream>
using namespace std;

int main()
{
    while (1)
    {
        int n, flag = 0;
        cin >> n;
        if (n == 0)
        {
            break;
        }
        int arr[n], arr2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            arr2[arr[i] - 1] = i + 1;
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != arr2[i])
            {
                flag = 1;
            }
        }
        if (flag)
        {
            cout << "not ambiguous" << endl;
        }
        else
        {
            cout << "ambiguous" << endl;
        }
    }
    return 0;
}
