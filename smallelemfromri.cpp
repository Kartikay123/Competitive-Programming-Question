#include <bits/stdc++.h>
using namespace std;
void countSmallerRight(int A[], int len)
{
    set<int> s;
    int countSmaller[len];
    for (int i = len - 1; i >= 0; i--) {
        s.insert(A[i]);
        auto it = s.lower_bound(A[i]);
        countSmaller[i] = distance(s.begin(), it);
        cout<< countSmaller[i] <<endl;
    }
  
    for (int i = 0; i < len; i++)
        cout << countSmaller[i] << " ";
}
  
// Driver code
int main()
{
    int A[] = {12, 1, 2, 3, 0, 11, 4};
    int len = sizeof(A) / sizeof(int);
    countSmallerRight(A, len);
    return 0;
}