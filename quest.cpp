#include<bits/stdc++.h> 
using namespace std;  
int power(int x, int y)
{
     
    // Initialize answer
    int res = 1;
     
    // Check till the number becomes zero
    while (y)
    {
         
        // If y is odd, multiply x with result
        if (y % 2 == 1)
            res = (res * x);
             
        // y = y/2
        y = y >> 1;
         
        // Change x to x^2
        x = (x * x);
    }
    return res;
}
int main(int argc, char const *argv[])
{
    int t,m=10^9+7;
    cin>>t;
    while (t--)
    {
        int l,r,k;
        cin>>l>>r;
        r=k;
       long long  int ans =1;
      
      for (int i = 0; i < (l-r); i++)
      {
          ans= ans* power(l,r);
           k--;
      }
      
        cout<<ans<<endl;
         
    }
    
    return 0;
}
