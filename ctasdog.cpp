#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int c,d,l;
        cin>>c>>d>>l;
        d=d*4;
        long long int ans = l-d;
        
        
        for (int i = 0; i <=c; i++)
        {
           if (ans==4*i)
           {
               cout<<"yes"<<endl;
               break;
           }
           else if (i==c)
           {
               cout<<"no"<<endl;
               break;
           }
           
            
        }
        
    }
    /*30% solved*/
    return 0;
}