#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,max=0;
	    cin>>n>>k;
		if (k==1)
		{
			/* code */
			cout<<max<<endl;
		}
		
	    for(int i=2;i<=k;i++)
	        if(max<n%i)
	            max=n%i;
	    cout<<max<<endl;
	}
	return 0;
}
