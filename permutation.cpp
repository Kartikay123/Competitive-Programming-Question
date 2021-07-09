#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[]={2,6,4};
    int n= sizeof(a)/sizeof(a[0]);
    sort(a,a+n);
    while ( next_permutation(a, a + n))
    {
        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        
    } ;
    
    return 0;
}
  