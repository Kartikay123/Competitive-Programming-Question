#include <bits/stdc++.h>
using namespace std;
void minCost(int arr[], int n,int k)
{
    int cost = INT_MAX;
    
 
    // calculate XOR sum of array
    int XOR = 0;
    for (int i = 0; i < n; i++)
        XOR ^= arr[i];
 
    // find the min cost and element corresponding
    for (int i = 0; i < n; i++) {
        if (cost > abs((XOR ^ arr[i]) - arr[i])) {
            cost = abs((XOR ^ arr[i]) - arr[i]);
        
        }
    }
    cout<<(abs(cost)+k)<<endl;
}    
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        minCost(arr,n,k);
    //     int p = 1, count = 0, i = 0, avi = 0;
    //     while (1)
    //     {
    //         if (((arr[i] ^ p) < arr[i]) && (arr[i] != 0))
    //         {
    //             arr[i] = arr[i] ^ (2 ^ p);
    //             count++;
    //         }

    //         if ((i == n - 1) || (count == k))
    //         {
    //             if (count == 0)
    //             {
    //                 break;
    //             }

    //             avi++;
    //             p = 2 * p;
    //             count = 0, i = -1;
    //         }

    //         i++;
    //     }
    //     cout << (avi + 1) << endl;
     }
    return 0;
}