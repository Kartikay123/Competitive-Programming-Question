#include<bits/stdc++.h>
using namespace std;

int main() {
     int t;
     cin>>t;
     for(int i=1;i<=t;i++)
     {
         string s1,right,left;
         cin>>s1;
         int l=s1.size();
         if(l%2==0)
         {
             right=s1.substr(0,l/2);
             left=s1.substr(l/2,l);
         }
         else
         {
             right=s1.substr(0,l/2);
             left=s1.substr((l/2)+1,l);
         }
         sort(right.begin(),right.end());
         sort(left.begin(),left.end());
         sort(left.begin(),left.end());
         if(right==left)
         {
             cout<<"YES"<<endl;
         }
         else
         {
             cout<<"NO"<<endl;
         }
         
         
     }
	return 0;
}
