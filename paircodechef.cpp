#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    map<int,int> m;
	    for(int i=1;i<=n;i++)
	    {
	        int a;
	        cin>>a;
	        m[a]++;
	    }
	    for(auto it: m)
	    {
	        if(it.second % 2 !=0)
	        {
	            cout<<it.first<<endl;
	            break;
	        }
	    }
	}
	return 0;
}
