#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int i,flag=0,n;
	    string s;
	    cin>>n;
	    cin>>s;
	    for(i=0;i<n;i++)
	    {
	        if(s[i]=='I')
	        {
	            flag=1;
	            cout<<"INDIAN"<<endl;
	            break;
	        }
	        else if(s[i]=='Y')
	        {
	            flag=1;
	            cout<<"NOT INDIAN"<<endl;
	            break;
	        }
	    }
	    if(flag!=1)
	    {
	        cout<<"NOT SURE"<<endl;
	    }
	    
	}
	return 0;
}

