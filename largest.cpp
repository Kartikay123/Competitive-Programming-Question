#include <bits/stdc++.h>
using namespace std;
int getlargest(int arr1[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] > arr1[res])
        {
            res = i;
        }
        /* code */
    }
    return res;
}
int main()
{
    int arr[] = {400, 79, 137, 236};
    cout << getlargest(arr, 4) << endl;
    return 0;
}