#include <bits/stdc++.h>
using namespace std;
int prime(int n){
int count=0;
int i=2;
while (count==n)
{
    
    int m=i/2;
    for(int j = 2; j <= m;j++)  
  {  
      if(i % j != 0)  
      {  
          count++;
      }
  }
      i++;

}
    return i;
}
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int sumxor=0;
      for (int i = 1; i <= prime(n); i++)
      {
          sumxor=sumxor^i;
      }
      cout<<sumxor<<endl;
    }
    
    return 0;
}
