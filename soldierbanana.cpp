#include <bits/stdc++.h>
using namespace std;
int main()
{
    int w, k;
    
     int n,x=0;

    cin >> k >> n >> w;
    for (int i = 1; i <=w ; i++)
    {
       int  j= i*k;
        x=x+j;
       j=0;
    }
   
    if ((n-x)>=0)
    {
        cout<<"0"<<endl;
    }
    else{
        cout<<(x-n)<<endl;
    }
    
    
  

    return 0;
}